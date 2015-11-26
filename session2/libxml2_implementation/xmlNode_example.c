

#include <libxml/xmlmemory.h>
#include <libxml/parser.h>
#include <stdlib.h>

int main()
{
	xmlDocPtr doc = xmlNewDoc(BAD_CAST"1.0");
	xmlNodePtr root_node = xmlNewNode(NULL, BAD_CAST"root");

	xmlDocSetRootElement(doc, root_node);

	xmlNodePtr node1 = xmlNewNode(NULL, BAD_CAST"node1");
	xmlNodePtr node2 = xmlNewNode(NULL, BAD_CAST"node2");
	xmlNodePtr node3 = xmlNewNode(NULL, BAD_CAST"node3");

	xmlAddChild(root_node, node1);
	xmlAddChild(root_node, node2);
	xmlAddChild(node2, node3);

	int nRel = xmlSaveFile("example.xml", doc);
	if (nRel != -1) {
		printf("save succeed.\n");
	}

	xmlFreeDoc(doc);
	return 1;
}

