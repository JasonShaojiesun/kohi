
#ifndef _DEBUG_RENDERGRAPH_NODE_H_
#define _DEBUG_RENDERGRAPH_NODE_H_

#include "defines.h"

struct rendergraph;
struct rendergraph_node;
struct rendergraph_node_config;
struct frame_data;

struct geometry_render_data;

b8 debug_rendergraph_node_create(struct rendergraph* graph, struct rendergraph_node* self, const struct rendergraph_node_config* config);
b8 debug_rendergraph_node_initialize(struct rendergraph_node* self);
b8 debug_rendergraph_node_load_resources(struct rendergraph_node* self);
b8 debug_rendergraph_node_execute(struct rendergraph_node* self, struct frame_data* p_frame_data);
void debug_rendergraph_node_destroy(struct rendergraph_node* self);

b8 debug_rendergraph_node_register_factory(void);

#endif