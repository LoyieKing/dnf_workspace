# modified

`_ZN7PackSet8modifiedEPKcP16IPackFileProcess`

`PackSet::modified(char const*, IPackFileProcess*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac54ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac54ee  _ZN7PackSet8modifiedEPKcP16IPackFileProcess
#           PackSet::modified(char const*, IPackFileProcess*)
# range [0x08ac54ee, 0x08ac56a1]
08ac54ee +0x000:  push   %ebp
08ac54ef +0x001:  mov    %esp,%ebp
08ac54f1 +0x003:  sub    $0x48,%esp
08ac54f4 +0x006:  lea    -0x14(%ebp),%eax
08ac54f7 +0x009:  mov    %eax,(%esp)
08ac54fa +0x00c:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac54ff +0x011:  mov    0x8(%ebp),%eax
08ac5502 +0x014:  mov    0xc(%eax),%eax
08ac5505 +0x017:  test   %eax,%eax
08ac5507 +0x019:  je     08ac555d <+0x6f>
08ac5509 +0x01b:  mov    &stdout,%eax
08ac550e +0x020:  movl   $"PACK_LOAD_FULL needed",0x8(%esp)
08ac5516 +0x028:  movl   $"%s\n",0x4(%esp)
08ac551e +0x030:  mov    %eax,(%esp)
08ac5521 +0x033:  call   0807da90 <_init+0x388>
08ac5526 +0x038:  mov    &stdout,%eax
08ac552b +0x03d:  movl   $&_ZZN7PackSet8modifiedEPKcP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac5533 +0x045:  movl   $0x369,0xc(%esp)
08ac553b +0x04d:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5543 +0x055:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac554b +0x05d:  mov    %eax,(%esp)
08ac554e +0x060:  call   0807da90 <_init+0x388>
08ac5553 +0x065:  mov    $0x1,%eax
08ac5558 +0x06a:  jmp    08ac56a0 <+0x1b2>
08ac555d +0x06f:  lea    -0x1c(%ebp),%eax
08ac5560 +0x072:  mov    0xc(%ebp),%edx
08ac5563 +0x075:  mov    %edx,0x8(%esp)
08ac5567 +0x079:  mov    0x8(%ebp),%edx
08ac556a +0x07c:  mov    %edx,0x4(%esp)
08ac556e +0x080:  mov    %eax,(%esp)
08ac5571 +0x083:  call   08ac4e00 <_ZN7PackSet4findEPKc>  ; PackSet::find(char const*)
08ac5576 +0x088:  sub    $0x4,%esp
08ac5579 +0x08b:  mov    -0x1c(%ebp),%eax
08ac557c +0x08e:  mov    %eax,-0x14(%ebp)
08ac557f +0x091:  mov    0x8(%ebp),%eax
08ac5582 +0x094:  lea    0x10(%eax),%edx
08ac5585 +0x097:  lea    -0x10(%ebp),%eax
08ac5588 +0x09a:  mov    %edx,0x4(%esp)
08ac558c +0x09e:  mov    %eax,(%esp)
08ac558f +0x0a1:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5594 +0x0a6:  sub    $0x4,%esp
08ac5597 +0x0a9:  lea    -0x10(%ebp),%eax
08ac559a +0x0ac:  mov    %eax,0x4(%esp)
08ac559e +0x0b0:  lea    -0x14(%ebp),%eax
08ac55a1 +0x0b3:  mov    %eax,(%esp)
08ac55a4 +0x0b6:  call   08ac7cb7 <_ZN16IPackFileProcess15getCommonBufferEj+0x579>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x579
08ac55a9 +0x0bb:  test   %al,%al
08ac55ab +0x0bd:  je     08ac5600 <+0x112>
08ac55ad +0x0bf:  mov    &stdout,%eax
08ac55b2 +0x0c4:  mov    0xc(%ebp),%edx
08ac55b5 +0x0c7:  mov    %edx,0x8(%esp)
08ac55b9 +0x0cb:  movl   $"find failed. %s",0x4(%esp)
08ac55c1 +0x0d3:  mov    %eax,(%esp)
08ac55c4 +0x0d6:  call   0807da90 <_init+0x388>
08ac55c9 +0x0db:  mov    &stdout,%eax
08ac55ce +0x0e0:  movl   $&_ZZN7PackSet8modifiedEPKcP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac55d6 +0x0e8:  movl   $0x370,0xc(%esp)
08ac55de +0x0f0:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac55e6 +0x0f8:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac55ee +0x100:  mov    %eax,(%esp)
08ac55f1 +0x103:  call   0807da90 <_init+0x388>
08ac55f6 +0x108:  mov    $0x1,%eax
08ac55fb +0x10d:  jmp    08ac56a0 <+0x1b2>
08ac5600 +0x112:  lea    -0x14(%ebp),%eax
08ac5603 +0x115:  mov    %eax,(%esp)
08ac5606 +0x118:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac560b +0x11d:  add    $0x4,%eax
08ac560e +0x120:  mov    %eax,-0xc(%ebp)
08ac5611 +0x123:  mov    -0xc(%ebp),%eax
08ac5614 +0x126:  mov    0x18(%eax),%eax
08ac5617 +0x129:  test   %eax,%eax
08ac5619 +0x12b:  je     08ac563d <+0x14f>
08ac561b +0x12d:  mov    -0xc(%ebp),%eax
08ac561e +0x130:  mov    0x18(%eax),%eax
08ac5621 +0x133:  test   %eax,%eax
08ac5623 +0x135:  je     08ac5633 <+0x145>
08ac5625 +0x137:  mov    -0xc(%ebp),%eax
08ac5628 +0x13a:  mov    0x18(%eax),%eax
08ac562b +0x13d:  mov    %eax,(%esp)
08ac562e +0x140:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac5633 +0x145:  mov    -0xc(%ebp),%eax
08ac5636 +0x148:  movl   $0x0,0x18(%eax)
08ac563d +0x14f:  mov    0x10(%ebp),%eax
08ac5640 +0x152:  mov    %eax,0xc(%esp)
08ac5644 +0x156:  mov    0x8(%ebp),%eax
08ac5647 +0x159:  mov    %eax,0x8(%esp)
08ac564b +0x15d:  mov    0xc(%ebp),%eax
08ac564e +0x160:  mov    %eax,0x4(%esp)
08ac5652 +0x164:  mov    -0xc(%ebp),%eax
08ac5655 +0x167:  mov    %eax,(%esp)
08ac5658 +0x16a:  call   08ac4476 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess>  ; IndexEntry::update_content_from_file(char const*, PackSet*, IPackFileProcess*)
08ac565d +0x16f:  cmp    $0x1,%eax
08ac5660 +0x172:  sete   %al
08ac5663 +0x175:  test   %al,%al
08ac5665 +0x177:  je     08ac569b <+0x1ad>
08ac5667 +0x179:  mov    &stdout,%eax
08ac566c +0x17e:  movl   $&_ZZN7PackSet8modifiedEPKcP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac5674 +0x186:  movl   $0x37d,0xc(%esp)
08ac567c +0x18e:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5684 +0x196:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac568c +0x19e:  mov    %eax,(%esp)
08ac568f +0x1a1:  call   0807da90 <_init+0x388>
08ac5694 +0x1a6:  mov    $0x1,%eax
08ac5699 +0x1ab:  jmp    08ac56a0 <+0x1b2>
08ac569b +0x1ad:  mov    $0x0,%eax
08ac56a0 +0x1b2:  leave
08ac56a1 +0x1b3:  ret
```

## 反编译 C

```c
// PackSet::modified @ 0x8ac54ee

/* DWARF original prototype: pack_ret_t modified(PackSet * this, NCHAR * name, IPackFileProcess *
   process) */

pack_ret_t __thiscall PackSet::modified(PackSet *this,NCHAR *name,IPackFileProcess *process)

{
  bool bVar1;
  pack_ret_t pVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_18;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_14;
  
                    /* Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: IndexEntry * r_entry@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_18);
  if (this->type_ == PACK_LOAD_FULL) {
    find((PackSet *)&local_20,(NCHAR *)this);
    local_18._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end(&local_14);
    bVar1 = __gnu_cxx::
            operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_18,
                       (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        *)&local_14);
    if (bVar1) {
      fprintf(stdout,"find failed. %s",name);
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x370,"modified");
      pVar2 = PACK_ERROR;
    }
    else {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_18);
      local_14.
      super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ._M_impl._M_finish = (pair<long_unsigned_int,_IndexEntry> *)&ppVar3->second;
      if ((ppVar3->second).content_ != (uchar *)0x0) {
        if ((ppVar3->second).content_ != (uchar *)0x0) {
          operator_delete__((ppVar3->second).content_);
        }
        ((local_14.
          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ._M_impl._M_finish)->second).offset_ = 0;
      }
      pVar2 = IndexEntry::update_content_from_file
                        ((IndexEntry *)
                         local_14.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish,name,this,process);
      if (pVar2 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x37d,"modified");
        pVar2 = PACK_ERROR;
      }
      else {
        pVar2 = PACK_OK;
      }
    }
  }
  else {
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x369,"modified");
    pVar2 = PACK_ERROR;
  }
  return pVar2;
}
```
