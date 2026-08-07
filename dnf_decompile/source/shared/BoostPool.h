// boost::pool 兼容实现（对齐 df_community_r 原始二进制的定制版 boost pool）
//
// 原始二进制中的 boost pool 是带 max_size 限制的定制版本：
//   - pool<UserAllocator>::pool(nrequested_size, nnext_size, nmax_size)  3 参数
//   - object_pool<T, UserAllocator>::object_pool(nnext_size, nmax_size)  2 参数
//   - pool 布局：+0x0 simple_segregated_storage.first / +0x4 PODptr list /
//               +0xc requested_size / +0x10 next_size / +0x14 start_size / +0x18 max_size
// 符号名、字段布局、成员函数均按原始二进制反编译逐一对齐（2026-08-07）。
#ifndef REDNF_BOOST_POOL_H_
#define REDNF_BOOST_POOL_H_

#include <cstddef>
#include <new>

namespace boost {

struct default_user_allocator_new_delete
{
  typedef std::size_t size_type;
  typedef std::ptrdiff_t difference_type;

  static char * malloc(const size_type bytes)
  { return new (std::nothrow) char[bytes]; }

  static void free(char * const block)
  { if (block != 0) ::operator delete[](block); }
};

namespace details {

template <typename SizeType>
class PODptr
{
  public:
    typedef SizeType size_type;

  private:
    char * ptr;
    size_type sz;

    char * ptr_next_size() const
    { return (ptr + sz - sizeof(size_type)); }

    char * ptr_next_ptr() const
    { return (ptr_next_size() - sizeof(void *)); }

  public:
    PODptr(char * const nptr, const size_type nsize)
    :ptr(nptr), sz(nsize) { }

    PODptr()
    :ptr(0), sz(0) { }

    bool valid() const { return (begin() != 0); }
    void invalidate() { begin() = 0; }
    char * & begin() { return ptr; }
    char * begin() const { return ptr; }
    char * end() const { return ptr_next_ptr(); }
    size_type total_size() const { return sz; }
    size_type element_size() const
    { return (sz - sizeof(size_type) - sizeof(void *)); }

    size_type & next_size() const
    { return *(reinterpret_cast<size_type *>(ptr_next_size())); }
    char * & next_ptr() const
    { return *(reinterpret_cast<char **>(ptr_next_ptr())); }

    PODptr next() const
    { return PODptr<size_type>(next_ptr(), next_size()); }

    void next(const PODptr & arg) const
    {
      next_ptr() = arg.begin();
      next_size() = arg.total_size();
    }
};

} // namespace details

template <typename SizeType>
class simple_segregated_storage
{
  public:
    typedef SizeType size_type;

  protected:
    void * first;

    static void * & nextof(void * const ptr)
    { return *(static_cast<void **>(ptr)); }

  public:
    simple_segregated_storage()
    :first(0) { }

    bool empty() const { return (first == 0); }

    void * malloc()
    {
      void * const ret = first;
      first = nextof(first);
      return ret;
    }

    void free(void * const chunk)
    {
      nextof(chunk) = first;
      first = chunk;
    }

    void * find_prev(void * const ptr)
    {
      if (first == 0 || std::greater<void *>()(first, ptr))
        return 0;
      void * iter = first;
      while (true)
      {
        if (nextof(iter) == 0 || std::greater<void *>()(nextof(iter), ptr))
          return iter;
        iter = nextof(iter);
      }
    }

    void ordered_free(void * const chunk)
    {
      void * const loc = find_prev(chunk);
      if (loc == 0)
        free(chunk);
      else
      {
        nextof(chunk) = nextof(loc);
        nextof(loc) = chunk;
      }
    }

    static void * segregate(void * block, size_type nsz,
        size_type npartition_size, void * end)
    {
      // 原始：old = block + ((nsz - partition_sz) / partition_sz) * partition_sz
      char * old = static_cast<char *>(block)
          + ((nsz - npartition_size) / npartition_size) * npartition_size;

      nextof(old) = end;

      if (old == block)
        return block;

      for (char * iter = old - npartition_size; iter != block;
          old = iter, iter -= npartition_size)
        nextof(iter) = old;

      nextof(block) = old;

      return block;
    }

    void add_block(void * const block, const size_type nsz,
        const size_type npartition_size)
    {
      first = segregate(block, nsz, npartition_size, first);
    }

    void add_ordered_block(void * const block, const size_type nsz,
        const size_type npartition_size)
    {
      void * const loc = find_prev(block);
      if (loc == 0)
        add_block(block, nsz, npartition_size);
      else
        nextof(loc) = segregate(block, nsz, npartition_size,
            nextof(loc));
    }
};

template <typename UserAllocator>
class pool: protected simple_segregated_storage<
    typename UserAllocator::size_type>
{
  public:
    typedef UserAllocator user_allocator;
    typedef typename UserAllocator::size_type size_type;
    typedef typename UserAllocator::difference_type difference_type;

  private:
    static const unsigned int min_alloc_size = 4;

    void * ordered_malloc_need_resize();

  protected:
    details::PODptr<size_type> list;

    simple_segregated_storage<size_type> & store() { return *this; }
    const simple_segregated_storage<size_type> & store() const { return *this; }
    const size_type requested_size;
    size_type next_size;
    size_type start_size;
    size_type max_size;

    size_type alloc_size() const
    {
      // 原始：std::max(requested_size, min_alloc_size) 后向上取整到 4 的倍数
      size_type x = std::max(requested_size, min_alloc_size);
      size_type t = x & 3;
      if (t != 0)
        x = x - t + 4;
      return x;
    }

    static void * & nextof(void * const ptr)
    { return *(static_cast<void **>(ptr)); }

  public:
    explicit pool(const size_type nrequested_size,
        const size_type nnext_size = 32,
        const size_type nmax_size = 0)
    :list(0, 0), requested_size(nrequested_size),
     next_size(nnext_size), start_size(nnext_size), max_size(nmax_size)
    { }

    ~pool() { purge_memory(); }

    bool purge_memory();

    void * ordered_malloc()
    {
      if (!store().empty())
        return store().malloc();
      return ordered_malloc_need_resize();
    }

    void ordered_free(void * const chunk)
    { store().ordered_free(chunk); }
};

template <typename UserAllocator>
const unsigned int pool<UserAllocator>::min_alloc_size;

template <typename UserAllocator>
bool pool<UserAllocator>::purge_memory()
{
  details::PODptr<size_type> iter = list;

  if (!iter.valid())
    return false;

  do
  {
    const details::PODptr<size_type> next = iter.next();
    UserAllocator::free(iter.begin());
    iter = next;
  } while (iter.valid());

  list.invalidate();
  this->first = 0;
  next_size = start_size;

  return true;
}

template <typename UserAllocator>
void * pool<UserAllocator>::ordered_malloc_need_resize()
{
  const size_type partition_size = alloc_size();
  size_type POD_size = next_size * partition_size
      + sizeof(size_type) + sizeof(void *);
  char * ptr = UserAllocator::malloc(POD_size);
  if (ptr == 0)
  {
    if (next_size > 4)
    {
      next_size >>= 1;
      POD_size = next_size * alloc_size()
          + sizeof(size_type) + sizeof(void *);
      ptr = UserAllocator::malloc(POD_size);
    }
    if (ptr == 0)
      return 0;
  }

  const details::PODptr<size_type> node(ptr, POD_size);

  if (max_size == 0)
  {
    next_size <<= 1;
  }
  else
  {
    const size_type chunks = (next_size * partition_size) / requested_size;
    if (chunks < max_size)
    {
      const size_type max_chunks = (max_size * requested_size) / partition_size;
      next_size = std::min(next_size << 1, max_chunks);
    }
  }

  store().add_ordered_block(node.begin(), node.element_size(), partition_size);

  if (!list.valid() || std::greater<void *>()(list.begin(), node.begin()))
  {
    node.next(list);
    list = node;
  }
  else
  {
    details::PODptr<size_type> prev = list;
    while (true)
    {
      if (prev.next_ptr() == 0
          || std::greater<void *>()(prev.next_ptr(), node.begin()))
        break;
      prev = prev.next();
    }
    node.next(prev.next());
    prev.next(node);
  }

  return store().malloc();
}

template <typename T, typename UserAllocator>
class object_pool: protected pool<UserAllocator>
{
  public:
    typedef T element_type;
    typedef UserAllocator user_allocator;
    typedef typename pool<UserAllocator>::size_type size_type;
    typedef typename pool<UserAllocator>::difference_type difference_type;

  protected:
    pool<UserAllocator> & store() { return *this; }
    const pool<UserAllocator> & store() const { return *this; }

    static void * & nextof(void * const ptr)
    { return *(static_cast<void **>(ptr)); }

  public:
    explicit object_pool(const size_type nnext_size = 32,
        const size_type nmax_size = 0)
    :pool<UserAllocator>(sizeof(T), nnext_size, nmax_size) { }

    ~object_pool()
    {
      // 原始：析构遍历 list，删除所有未释放对象，再释放存储
      if (!this->list.valid())
        return;

      details::PODptr<size_type> iter = this->list;
      details::PODptr<size_type> next = iter;

      void * freed_iter = this->first;
      const size_type partition_size = this->alloc_size();

      do
      {
        next = next.next();

        for (char * i = iter.begin(); i != iter.end(); i += partition_size)
        {
          if (i == freed_iter)
          {
            freed_iter = nextof(freed_iter);
            continue;
          }
          static_cast<T *>(static_cast<void *>(i))->~T();
        }

        UserAllocator::free(iter.begin());
        iter = next;
      } while (iter.valid());

      this->list.invalidate();
    }

    element_type * malloc()
    { return static_cast<element_type *>(store().ordered_malloc()); }

    void free(element_type * const chunk)
    { store().ordered_free(chunk); }
};

} // namespace boost

#endif  // REDNF_BOOST_POOL_H_
