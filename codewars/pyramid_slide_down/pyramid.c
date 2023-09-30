typedef struct tree
{
    int         v;
    struct tree *l;
    struct tree *r;
}               tree_t;

int     ft_depthcalc(int num_elements)
{
    int i;
    int depth;

    i = 0;
    depth = 0;
    while (i < num_elements - 1)
    {
        i += depth + 1;
        depth++;
    }
    return(depth);
}

tree_t  *ft_createnode(int val)
{
    tree_t  *new_node;

    new_node = (tree_t *)malloc(sizeof(tree_t *));
    node->v = val;
    node->l = NULL;
    node->r = NULL;
    return (new_node);
}

void    ft_btreeedgecontruct(tree_t **head, int *pyramid, int depth)
{
    tree_t  *current;
    tree_t  *new;
    int     i;
    int     j;

    *head = ft_createnode(pyramid[0]);
    current = *head;
    i = 0;
    j = 0;
    while (i < depth)
    {
        i++;
        j += i;
        new = ft_createnode(pyramid[j]);
        current->l = new;
        new = ft_createnode(pyramid[j + 1]);
        current->r = new;
    }
}

void    ft_bnrytreeconstruct(int num_elements,
        const int *pyramid, tree_t **head)
{
    int     i;
    int     j;
    int     depth;
    tree_t  *node;

    depth = ft_depthcalc(num_elements);
    ft_btreeedgecontruct(head, pyramid, depth);
    i = 2;
    while (i < num_elements)
    {
        node = *head;
        while (node->r->l)
            node = node->r;
        j = ft_depthcalc(i);
        i += depth + 2;
        while (j < depth)
        {
            j++;
            node->r->l = node->l->r;
            node->r->r = ft_createnode(pyramid[i + j + 1]);
            node = node->l;
        }
    }
}
int     pyramid_slide_down(int num_elements,
        const int pyramid[num_elements], int rows)
{
    tree_t  **head;

    head = (tree_t **)malloc(sizeof(tree_t **));
    *head = NULL;
    ft_bnrytreeconstruct(num_elements, pyramid, head);
}
