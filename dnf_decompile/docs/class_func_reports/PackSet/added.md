# added

`_ZN7PackSet5addedEPKcP16IPackFileProcess`

`PackSet::added(char const*, IPackFileProcess*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac56a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac56a2  _ZN7PackSet5addedEPKcP16IPackFileProcess
#           PackSet::added(char const*, IPackFileProcess*)
# range [0x08ac56a2, 0x08ac587f]
08ac56a2 +0x000:  push   %ebp
08ac56a3 +0x001:  mov    %esp,%ebp
08ac56a5 +0x003:  push   %esi
08ac56a6 +0x004:  push   %ebx
08ac56a7 +0x005:  sub    $0x50,%esp
08ac56aa +0x008:  lea    -0x30(%ebp),%eax
08ac56ad +0x00b:  mov    %eax,(%esp)
08ac56b0 +0x00e:  call   08ac7de4 <_ZN16IPackFileProcess15getCommonBufferEj+0x6a6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x6a6
08ac56b5 +0x013:  mov    0x8(%ebp),%eax
08ac56b8 +0x016:  mov    0xc(%eax),%eax
08ac56bb +0x019:  test   %eax,%eax
08ac56bd +0x01b:  je     08ac5713 <+0x71>
08ac56bf +0x01d:  mov    &stdout,%eax
08ac56c4 +0x022:  movl   $"PACK_LOAD_FULL needed",0x8(%esp)
08ac56cc +0x02a:  movl   $"%s\n",0x4(%esp)
08ac56d4 +0x032:  mov    %eax,(%esp)
08ac56d7 +0x035:  call   0807da90 <_init+0x388>
08ac56dc +0x03a:  mov    &stdout,%eax
08ac56e1 +0x03f:  movl   $&_ZZN7PackSet5addedEPKcP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac56e9 +0x047:  movl   $0x38a,0xc(%esp)
08ac56f1 +0x04f:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac56f9 +0x057:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5701 +0x05f:  mov    %eax,(%esp)
08ac5704 +0x062:  call   0807da90 <_init+0x388>
08ac5709 +0x067:  mov    $0x1,%ebx
08ac570e +0x06c:  jmp    08ac5869 <+0x1c7>
08ac5713 +0x071:  lea    -0x10(%ebp),%eax
08ac5716 +0x074:  mov    0xc(%ebp),%edx
08ac5719 +0x077:  mov    %edx,0x8(%esp)
08ac571d +0x07b:  mov    0x8(%ebp),%edx
08ac5720 +0x07e:  mov    %edx,0x4(%esp)
08ac5724 +0x082:  mov    %eax,(%esp)
08ac5727 +0x085:  call   08ac4e00 <_ZN7PackSet4findEPKc>  ; PackSet::find(char const*)
08ac572c +0x08a:  sub    $0x4,%esp
08ac572f +0x08d:  mov    0x8(%ebp),%eax
08ac5732 +0x090:  lea    0x10(%eax),%edx
08ac5735 +0x093:  lea    -0xc(%ebp),%eax
08ac5738 +0x096:  mov    %edx,0x4(%esp)
08ac573c +0x09a:  mov    %eax,(%esp)
08ac573f +0x09d:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5744 +0x0a2:  sub    $0x4,%esp
08ac5747 +0x0a5:  lea    -0x10(%ebp),%eax
08ac574a +0x0a8:  mov    %eax,0x4(%esp)
08ac574e +0x0ac:  lea    -0xc(%ebp),%eax
08ac5751 +0x0af:  mov    %eax,(%esp)
08ac5754 +0x0b2:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac5759 +0x0b7:  test   %al,%al
08ac575b +0x0b9:  je     08ac57b0 <+0x10e>
08ac575d +0x0bb:  mov    &stdout,%eax
08ac5762 +0x0c0:  mov    0xc(%ebp),%edx
08ac5765 +0x0c3:  mov    %edx,0x8(%esp)
08ac5769 +0x0c7:  movl   $"find %s",0x4(%esp)
08ac5771 +0x0cf:  mov    %eax,(%esp)
08ac5774 +0x0d2:  call   0807da90 <_init+0x388>
08ac5779 +0x0d7:  mov    &stdout,%eax
08ac577e +0x0dc:  movl   $&_ZZN7PackSet5addedEPKcP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac5786 +0x0e4:  movl   $0x390,0xc(%esp)
08ac578e +0x0ec:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5796 +0x0f4:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac579e +0x0fc:  mov    %eax,(%esp)
08ac57a1 +0x0ff:  call   0807da90 <_init+0x388>
08ac57a6 +0x104:  mov    $0x1,%ebx
08ac57ab +0x109:  jmp    08ac5869 <+0x1c7>
08ac57b0 +0x10e:  mov    0x10(%ebp),%eax
08ac57b3 +0x111:  mov    %eax,0xc(%esp)
08ac57b7 +0x115:  mov    0x8(%ebp),%eax
08ac57ba +0x118:  mov    %eax,0x8(%esp)
08ac57be +0x11c:  mov    0xc(%ebp),%eax
08ac57c1 +0x11f:  mov    %eax,0x4(%esp)
08ac57c5 +0x123:  lea    -0x30(%ebp),%eax
08ac57c8 +0x126:  add    $0x4,%eax
08ac57cb +0x129:  mov    %eax,(%esp)
08ac57ce +0x12c:  call   08ac4476 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess>  ; IndexEntry::update_content_from_file(char const*, PackSet*, IPackFileProcess*)
08ac57d3 +0x131:  cmp    $0x1,%eax
08ac57d6 +0x134:  sete   %al
08ac57d9 +0x137:  test   %al,%al
08ac57db +0x139:  je     08ac5811 <+0x16f>
08ac57dd +0x13b:  mov    &stdout,%eax
08ac57e2 +0x140:  movl   $&_ZZN7PackSet5addedEPKcP16IPackFileProcessE12__FUNCTION__,0x10(%esp)
08ac57ea +0x148:  movl   $0x396,0xc(%esp)
08ac57f2 +0x150:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac57fa +0x158:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5802 +0x160:  mov    %eax,(%esp)
08ac5805 +0x163:  call   0807da90 <_init+0x388>
08ac580a +0x168:  mov    $0x1,%ebx
08ac580f +0x16d:  jmp    08ac5869 <+0x1c7>
08ac5811 +0x16f:  lea    -0x30(%ebp),%eax
08ac5814 +0x172:  add    $0x8,%eax
08ac5817 +0x175:  mov    %eax,(%esp)
08ac581a +0x178:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac581f +0x17d:  mov    %eax,(%esp)
08ac5822 +0x180:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08ac5827 +0x185:  mov    %eax,(%esp)
08ac582a +0x188:  call   08ac3b04 <_ZL5_hashPKc>  ; _hash(char const*)
08ac582f +0x18d:  mov    %eax,-0x30(%ebp)
08ac5832 +0x190:  mov    0x8(%ebp),%eax
08ac5835 +0x193:  lea    0x1c(%eax),%edx
08ac5838 +0x196:  lea    -0x30(%ebp),%eax
08ac583b +0x199:  mov    %eax,0x4(%esp)
08ac583f +0x19d:  mov    %edx,(%esp)
08ac5842 +0x1a0:  call   08ac7e04 <_ZN16IPackFileProcess15getCommonBufferEj+0x6c6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x6c6
08ac5847 +0x1a5:  mov    $0x0,%ebx
08ac584c +0x1aa:  jmp    08ac5869 <+0x1c7>
08ac584e +0x1ac:  mov    %edx,%ebx
08ac5850 +0x1ae:  mov    %eax,%esi
08ac5852 +0x1b0:  lea    -0x30(%ebp),%eax
08ac5855 +0x1b3:  mov    %eax,(%esp)
08ac5858 +0x1b6:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac585d +0x1bb:  mov    %esi,%eax
08ac585f +0x1bd:  mov    %ebx,%edx
08ac5861 +0x1bf:  mov    %eax,(%esp)
08ac5864 +0x1c2:  call   08ae3750 <_Unwind_Resume>
08ac5869 +0x1c7:  lea    -0x30(%ebp),%eax
08ac586c +0x1ca:  mov    %eax,(%esp)
08ac586f +0x1cd:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac5874 +0x1d2:  mov    %ebx,%eax
08ac5876 +0x1d4:  lea    -0x8(%ebp),%esp
08ac5879 +0x1d7:  add    $0x0,%esp
08ac587c +0x1da:  pop    %ebx
08ac587d +0x1db:  pop    %esi
08ac587e +0x1dc:  pop    %ebp
08ac587f +0x1dd:  ret
```

## 反编译 C

```c
// PackSet::added @ 0x8ac56a2

/* DWARF original prototype: pack_ret_t added(PackSet * this, NCHAR * name, IPackFileProcess *
   process) */

pack_ret_t __thiscall PackSet::added(PackSet *this,NCHAR *name,IPackFileProcess *process)

{
  bool bVar1;
  pack_ret_t pVar2;
  char *pcVar3;
  undefined1 local_34 [32];
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_10;
  
                    /* Unresolved local var: index_pair_t entry@[???] */
  std::pair<long_unsigned_int,_IndexEntry>::pair((pair<long_unsigned_int,_IndexEntry> *)local_34);
  if (this->type_ == PACK_LOAD_FULL) {
    find((PackSet *)&local_14,(NCHAR *)this);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)&local_10);
    bVar1 = __gnu_cxx::
            operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_10,&local_14);
    if (bVar1) {
      fprintf(stdout,"find %s",name);
      pcVar3 = "%s(%d) - %s\n";
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x390,"added");
      pVar2 = PACK_ERROR;
    }
    else {
      pVar2 = IndexEntry::update_content_from_file((IndexEntry *)(local_34 + 4),name,this,process);
      if (pVar2 == PACK_ERROR) {
        pcVar3 = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x396,"added");
        pVar2 = PACK_ERROR;
      }
      else {
        pcVar3 = (char *)std::string::c_str((string *)(local_34 + 8));
        pcVar3 = toMbcs(pcVar3);
        local_34._0_4_ = _hash(pcVar3);
        pcVar3 = local_34;
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::push_back(&this->addeds_,(pair<long_unsigned_int,_IndexEntry> *)pcVar3);
        pVar2 = PACK_OK;
      }
    }
  }
  else {
                    /* try { // try from 08ac56d7 to 08ac5846 has its CatchHandler @ 08ac584e */
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    pcVar3 = "%s(%d) - %s\n";
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x38a,"added");
    pVar2 = PACK_ERROR;
  }
  std::pair<long_unsigned_int,_IndexEntry>::~pair
            ((pair<long_unsigned_int,_IndexEntry> *)local_34,(int)pcVar3);
  return pVar2;
}
```
