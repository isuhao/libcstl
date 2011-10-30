/*
 *  The private interface of iterator.
 *  Copyright (C)  2008,2009,2010,2011  Wangbo
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *  Author e-mail: activesys.wb@gmail.com
 *                 activesys@sina.com.cn
 */

#ifndef _CSTL_ITERATOR_PRIVATE_H_
#define _CSTL_ITERATOR_PRIVATE_H_

#ifdef __cplusplus
extern "C" {
#endif

/** include section **/

/** constant declaration and macro section **/
/* vector iterator handler */
#define _VECTOR_ITERATOR_COREPOS(it_iter)               ((it_iter)._t_pos._pby_corepos)
#define _VECTOR_ITERATOR_CONTAINER(it_iter)             ((vector_t*)((it_iter)._pt_container))
#define _VECTOR_ITERATOR_CONTAINER_TYPE(it_iter)        ((it_iter)._t_containertype)
#define _VECTOR_ITERATOR_ITERATOR_TYPE(it_iter)         ((it_iter)._t_iteratortype)
/* list iterator handler */
#define _LIST_ITERATOR_COREPOS(it_iter)                 ((it_iter)._t_pos._pby_corepos)
#define _LIST_ITERATOR_CONTAINER(it_iter)               ((list_t*)((it_iter)._pt_container))
#define _LIST_ITERATOR_CONTAINER_TYPE(it_iter)          ((it_iter)._t_containertype)
#define _LIST_ITERATOR_ITERATOR_TYPE(it_iter)           ((it_iter)._t_iteratortype)
/* deque iterator handler */
#define _DEQUE_ITERATOR_MAP_POINTER(it_iter)            ((it_iter)._t_pos._t_dequepos._ppby_mappos)
#define _DEQUE_ITERATOR_FIRST_POS(it_iter)              ((it_iter)._t_pos._t_dequepos._pby_first)
#define _DEQUE_ITERATOR_AFTERLAST_POS(it_iter)          ((it_iter)._t_pos._t_dequepos._pby_afterlast)
#define _DEQUE_ITERATOR_COREPOS(it_iter)                ((it_iter)._t_pos._t_dequepos._pby_corepos)
#define _DEQUE_ITERATOR_CONTAINER(it_iter)              ((deque_t*)((it_iter)._pt_container))
#define _DEQUE_ITERATOR_CONTAINER_TYPE(it_iter)         ((it_iter)._t_containertype)
#define _DEQUE_ITERATOR_ITERATOR_TYPE(it_iter)          ((it_iter)._t_iteratortype)
/* slist iterator handler */
#define _SLIST_ITERATOR_COREPOS(it_iter)                ((it_iter)._t_pos._pby_corepos)
#define _SLIST_ITERATOR_CONTAINER(it_iter)              ((slist_t*)((it_iter)._pt_container))
#define _SLIST_ITERATOR_CONTAINER_TYPE(it_iter)         ((it_iter)._t_containertype)
#define _SLIST_ITERATOR_ITERATOR_TYPE(it_iter)          ((it_iter)._t_iteratortype)
/* avl_tree iterator handler */
#define _AVL_TREE_ITERATOR_COREPOS(it_iter)             ((it_iter)._t_pos._t_treepos._pby_corepos)
#define _AVL_TREE_ITERATOR_TREE(it_iter)                ((_avl_tree_t*)((it_iter)._t_pos._t_treepos._pt_tree))
#define _AVL_TREE_ITERATOR_TREE_POINTER(it_iter)        ((it_iter)._t_pos._t_treepos._pt_tree)
/* rb_tree iterator handler */
#define _RB_TREE_ITERATOR_COREPOS(it_iter)              ((it_iter)._t_pos._t_treepos._pby_corepos)
#define _RB_TREE_ITERATOR_TREE(it_iter)                 ((_rb_tree_t*)((it_iter)._t_pos._t_treepos._pt_tree))
#define _RB_TREE_ITERATOR_TREE_POINTER(it_iter)         ((it_iter)._t_pos._t_treepos._pt_tree)
/* set iterator handler */
#define _SET_ITERATOR_CONTAINER(it_iter)                ((set_t*)((it_iter)._pt_container))
#define _SET_ITERATOR_CONTAINER_TYPE(it_iter)           ((it_iter)._t_containertype)
#define _SET_ITERATOR_ITERATOR_TYPE(it_iter)            ((it_iter)._t_iteratortype)
/* multiset iterator handler */
#define _MULTISET_ITERATOR_CONTAINER(it_iter)           ((multiset_t*)((it_iter)._pt_container))
#define _MULTISET_ITERATOR_CONTAINER_TYPE(it_iter)      ((it_iter)._t_containertype)
#define _MULTISET_ITERATOR_ITERATOR_TYPE(it_iter)       ((it_iter)._t_iteratortype)
/* map iterator handler */
#define _MAP_ITERATOR_CONTAINER(it_iter)                ((map_t*)((it_iter)._pt_container))
#define _MAP_ITERATOR_CONTAINER_TYPE(it_iter)           ((it_iter)._t_containertype)
#define _MAP_ITERATOR_ITERATOR_TYPE(it_iter)            ((it_iter)._t_iteratortype)
/* multimap iterator handler */
#define _MULTIMAP_ITERATOR_CONTAINER(it_iter)           ((multimap_t*)((it_iter)._pt_container))
#define _MULTIMAP_ITERATOR_CONTAINER_TYPE(it_iter)      ((it_iter)._t_containertype)
#define _MULTIMAP_ITERATOR_ITERATOR_TYPE(it_iter)       ((it_iter)._t_iteratortype)
/* hashtable iterator handler */
#define _GET_HASHTABLE_BUCKETPOS(it_iter)          ((it_iter)._t_pos._t_hashpos._pby_bucketpos)
#define _GET_HASHTABLE_COREPOS(it_iter)            ((it_iter)._t_pos._t_hashpos._pby_corepos)
#define _GET_HASHTABLE(it_iter)                    ((_hashtable_t*)((it_iter)._t_pos._t_hashpos._pt_hashtable))
#define _GET_HASHTABLE_POINTER(it_iter)            ((it_iter)._t_pos._t_hashpos._pt_hashtable)
/* hash_set iterator handler */
#define _GET_HASH_SET_CONTAINER(it_iter)           ((hash_set_t*)((it_iter)._pt_container))
#define _GET_HASH_SET_CONTAINER_TYPE(it_iter)      ((it_iter)._t_containertype)
#define _GET_HASH_SET_ITERATOR_TYPE(it_iter)       ((it_iter)._t_iteratortype)
/* hash_multiset iterator handler */
#define _GET_HASH_MULTISET_CONTAINER(it_iter)      ((hash_multiset_t*)((it_iter)._pt_container))
#define _GET_HASH_MULTISET_CONTAINER_TYPE(it_iter) ((it_iter)._t_containertype)
#define _GET_HASH_MULTISET_ITERATOR_TYPE(it_iter)  ((it_iter)._t_iteratortype)
/* hash_map iterator handler */
#define _GET_HASH_MAP_CONTAINER(it_iter)           ((hash_map_t*)((it_iter)._pt_container))
#define _GET_HASH_MAP_CONTAINER_TYPE(it_iter)      ((it_iter)._t_containertype)
#define _GET_HASH_MAP_ITERATOR_TYPE(it_iter)       ((it_iter)._t_iteratortype)
/* hash_multimap iterator handler */
#define _GET_HASH_MULTIMAP_CONTAINER(it_iter)      ((hash_multimap_t*)((it_iter)._pt_container))
#define _GET_HASH_MULTIMAP_CONTAINER_TYPE(it_iter) ((it_iter)._t_containertype)
#define _GET_HASH_MULTIMAP_ITERATOR_TYPE(it_iter)  ((it_iter)._t_iteratortype)
/* basic_string iterator handler */
#define _GET_BASIC_STRING_COREPOS(it_iter)         ((it_iter)._t_pos._pby_corepos)
#define _GET_BASIC_STRING_CONTAINER(it_iter)       ((basic_string_t*)((it_iter)._pt_container))
#define _GET_BASIC_STRING_CONTAINER_TYPE(it_iter)  ((it_iter)._t_containertype)
#define _GET_BASIC_STRING_ITERATOR_TYPE(it_iter)   ((it_iter)._t_iteratortype)
/* for all container iterator */
#define _GET_CONTAINER(it_iter)                    ((it_iter)._pt_container)
#define _GET_CONTAINER_TYPE(it_iter)               ((it_iter)._t_containertype)
#define _GET_ITERATOR_TYPE(it_iter)                ((it_iter)._t_iteratortype)

#define _STRING_CONTAINER        _BASIC_STRING_CONTAINER

/** data type declaration and struct, union, enum section **/
/* container type */
typedef enum _tagcontainertype
{
    _VECTOR_CONTAINER,
    _LIST_CONTAINER,
    _DEQUE_CONTAINER,
    _SLIST_CONTAINER,
    _MAP_CONTAINER,
    _MULTIMAP_CONTAINER,
    _SET_CONTAINER,
    _MULTISET_CONTAINER,
    _HASH_SET_CONTAINER,
    _HASH_MULTISET_CONTAINER,
    _HASH_MAP_CONTAINER,
    _HASH_MULTIMAP_CONTAINER,
    _BASIC_STRING_CONTAINER
}containertype_t;

/* iterator type */
typedef enum _tagiteratortype
{
    _INPUT_ITERATOR,
    _OUTPUT_ITERATOR,
    _FORWARD_ITERATOR,
    _BIDIRECTIONAL_ITERATOR,
    _RANDOM_ACCESS_ITERATOR
}iteratortype_t;

/* cstl iterator */
typedef struct _tagiterator
{
    /* flexibility for all containter */
    union 
    {
        _byte_t*      _pby_corepos;    /* for vector list e.g. */
        struct 
        {                    /* for deque */
            _byte_t*  _pby_corepos;
            _byte_t*  _pby_first;
            _byte_t*  _pby_afterlast;  /* the node after the last node */
            _byte_t** _ppby_mappos;    /* point to the map */
        }_t_dequepos;
        struct
        {                    /* for avl tree or rb tree */
            _byte_t*  _pby_corepos;
            void*     _pt_tree;       /* point to the avl tree or rb tree*/
        }_t_treepos;
        struct               /* for hash table */
        {
            _byte_t*  _pby_corepos;
            _byte_t*  _pby_bucketpos;   /* pointer to vector bucket position */
            void*     _pt_hashtable;   /* point to hash node */
        }_t_hashpos;
    }_t_pos;
    void*             _pt_container;
    containertype_t   _t_containertype;
    iteratortype_t    _t_iteratortype;
}iterator_t;

/* range type */
typedef struct _tagrange
{
    iterator_t it_begin;
    iterator_t it_end;
}range_t;


/* declaration five iterator type */
typedef iterator_t                  input_iterator_t;
typedef iterator_t                  output_iterator_t;
typedef input_iterator_t            forward_iterator_t;
typedef forward_iterator_t          bidirectional_iterator_t;
typedef bidirectional_iterator_t    random_access_iterator_t;
/* declaration four iterator adapters */
typedef iterator_t                  reverse_iterator_t;
typedef output_iterator_t           insert_iterator_t;
typedef input_iterator_t            istream_iterator_t;
typedef output_iterator_t           ostream_iterator_t;

/** exported global variable declaration section **/

/** exported function prototype section **/
/*
 * Private iterator functions.
 */
extern bool_t _iterator_same_type(iterator_t t_iterfirst, iterator_t t_itersecond);
extern bool_t _iterator_before(iterator_t t_iterfirst, iterator_t t_itersecond);
extern bool_t _iterator_limit_type(iterator_t it_iter, iteratortype_t t_limittype);

extern bool_t _iterator_valid_range(
    iterator_t t_first, iterator_t t_last, iteratortype_t t_type);
extern bool_t _iterator_same_elem_type(iterator_t t_first, iterator_t t_last);

extern _typestyle_t _iterator_get_typestyle(iterator_t it_iter);
extern const char* _iterator_get_typebasename(iterator_t it_iter);
extern _typeinfo_t* _iterator_get_typeinfo(iterator_t it_iter);
extern const char* _iterator_get_typename(iterator_t it_iter);
extern binary_function_t _iterator_get_typecopy(iterator_t it_iter);
extern size_t _iterator_get_typesize(iterator_t it_iter);
extern void* _iterator_allocate_init_elem(iterator_t it_iter);
extern void _iterator_deallocate_destroy_elem(iterator_t it_iter, void* pv_value);

#ifdef __cplusplus
}
#endif

#endif /* _CSTL_ITERATOR_PRIVATE_H_ */
/** eof **/

