# RegisterQuery

`_ZN13CQueryCounter13RegisterQueryEPKcii`

`CQueryCounter::RegisterQuery(char const*, int, int)`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ed5ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ed5ae  _ZN13CQueryCounter13RegisterQueryEPKcii
#           CQueryCounter::RegisterQuery(char const*, int, int)
# range [0x085ed5ae, 0x085ed6f4]
085ed5ae +0x000:  push   %ebp
085ed5af +0x001:  mov    %esp,%ebp
085ed5b1 +0x003:  push   %esi
085ed5b2 +0x004:  push   %ebx
085ed5b3 +0x005:  sub    $0x70,%esp
085ed5b6 +0x008:  lea    -0x54(%ebp),%eax
085ed5b9 +0x00b:  mov    %eax,(%esp)
085ed5bc +0x00e:  call   085ed760 <_GLOBAL__I_query_table+0x2b>  ; global constructors keyed to query_table+0x2b
085ed5c1 +0x013:  mov    0x14(%ebp),%eax
085ed5c4 +0x016:  mov    %eax,-0x54(%ebp)
085ed5c7 +0x019:  lea    -0x38(%ebp),%eax
085ed5ca +0x01c:  lea    -0x54(%ebp),%edx
085ed5cd +0x01f:  mov    %edx,0x8(%esp)
085ed5d1 +0x023:  lea    0x10(%ebp),%edx
085ed5d4 +0x026:  mov    %edx,0x4(%esp)
085ed5d8 +0x02a:  mov    %eax,(%esp)
085ed5db +0x02d:  call   085ed9dd <_GLOBAL__I_query_table+0x2a8>  ; global constructors keyed to query_table+0x2a8
085ed5e0 +0x032:  sub    $0x4,%esp
085ed5e3 +0x035:  lea    -0x38(%ebp),%eax
085ed5e6 +0x038:  mov    %eax,0x4(%esp)
085ed5ea +0x03c:  lea    -0x48(%ebp),%eax
085ed5ed +0x03f:  mov    %eax,(%esp)
085ed5f0 +0x042:  call   085eda1c <_GLOBAL__I_query_table+0x2e7>  ; global constructors keyed to query_table+0x2e7
085ed5f5 +0x047:  mov    0x8(%ebp),%eax
085ed5f8 +0x04a:  lea    0x4(%eax),%ecx
085ed5fb +0x04d:  lea    -0x5c(%ebp),%eax
085ed5fe +0x050:  lea    -0x48(%ebp),%edx
085ed601 +0x053:  mov    %edx,0x8(%esp)
085ed605 +0x057:  mov    %ecx,0x4(%esp)
085ed609 +0x05b:  mov    %eax,(%esp)
085ed60c +0x05e:  call   085eda58 <_GLOBAL__I_query_table+0x323>  ; global constructors keyed to query_table+0x323
085ed611 +0x063:  sub    $0x4,%esp
085ed614 +0x066:  movzbl -0x58(%ebp),%eax
085ed618 +0x06a:  xor    $0x1,%eax
085ed61b +0x06d:  test   %al,%al
085ed61d +0x06f:  je     085ed629 <+0x7b>
085ed61f +0x071:  mov    $0x0,%eax
085ed624 +0x076:  jmp    085ed6eb <+0x13d>
085ed629 +0x07b:  lea    -0x20(%ebp),%eax
085ed62c +0x07e:  lea    -0x5c(%ebp),%edx
085ed62f +0x081:  mov    %edx,0x8(%esp)
085ed633 +0x085:  lea    0xc(%ebp),%edx
085ed636 +0x088:  mov    %edx,0x4(%esp)
085ed63a +0x08c:  mov    %eax,(%esp)
085ed63d +0x08f:  call   085eda84 <_GLOBAL__I_query_table+0x34f>  ; global constructors keyed to query_table+0x34f
085ed642 +0x094:  sub    $0x4,%esp
085ed645 +0x097:  lea    -0x20(%ebp),%eax
085ed648 +0x09a:  mov    %eax,0x4(%esp)
085ed64c +0x09e:  lea    -0x28(%ebp),%eax
085ed64f +0x0a1:  mov    %eax,(%esp)
085ed652 +0x0a4:  call   085edac2 <_GLOBAL__I_query_table+0x38d>  ; global constructors keyed to query_table+0x38d
085ed657 +0x0a9:  mov    0x8(%ebp),%eax
085ed65a +0x0ac:  lea    0x1c(%eax),%ecx
085ed65d +0x0af:  lea    -0x64(%ebp),%eax
085ed660 +0x0b2:  lea    -0x28(%ebp),%edx
085ed663 +0x0b5:  mov    %edx,0x8(%esp)
085ed667 +0x0b9:  mov    %ecx,0x4(%esp)
085ed66b +0x0bd:  mov    %eax,(%esp)
085ed66e +0x0c0:  call   085edb3e <_GLOBAL__I_query_table+0x409>  ; global constructors keyed to query_table+0x409
085ed673 +0x0c5:  sub    $0x4,%esp
085ed676 +0x0c8:  lea    -0x28(%ebp),%eax
085ed679 +0x0cb:  mov    %eax,(%esp)
085ed67c +0x0ce:  call   085ed836 <_GLOBAL__I_query_table+0x101>  ; global constructors keyed to query_table+0x101
085ed681 +0x0d3:  movzbl -0x60(%ebp),%eax
085ed685 +0x0d7:  xor    $0x1,%eax
085ed688 +0x0da:  test   %al,%al
085ed68a +0x0dc:  je     085ed6e6 <+0x138>
085ed68c +0x0de:  jmp    085ed6a9 <+0xfb>
085ed68e +0x0e0:  mov    %edx,%ebx
085ed690 +0x0e2:  mov    %eax,%esi
085ed692 +0x0e4:  lea    -0x28(%ebp),%eax
085ed695 +0x0e7:  mov    %eax,(%esp)
085ed698 +0x0ea:  call   085ed836 <_GLOBAL__I_query_table+0x101>  ; global constructors keyed to query_table+0x101
085ed69d +0x0ef:  mov    %esi,%eax
085ed69f +0x0f1:  mov    %ebx,%edx
085ed6a1 +0x0f3:  mov    %eax,(%esp)
085ed6a4 +0x0f6:  call   08ae3750 <_Unwind_Resume>
085ed6a9 +0x0fb:  movl   $0x0,0xc(%esp)
085ed6b1 +0x103:  movl   $0x291,0x8(%esp)
085ed6b9 +0x10b:  movl   $&_ZZN13CQueryCounter13RegisterQueryEPKciiE19__PRETTY_FUNCTION__,0x4(%esp)
085ed6c1 +0x113:  lea    -0x18(%ebp),%eax
085ed6c4 +0x116:  mov    %eax,(%esp)
085ed6c7 +0x119:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085ed6cc +0x11e:  movl   $"LoadQueryTable,  query_id_map_.insert ERROR",0x4(%esp)
085ed6d4 +0x126:  lea    -0x18(%ebp),%eax
085ed6d7 +0x129:  mov    %eax,(%esp)
085ed6da +0x12c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ed6df +0x131:  mov    $0x0,%eax
085ed6e4 +0x136:  jmp    085ed6eb <+0x13d>
085ed6e6 +0x138:  mov    $0x1,%eax
085ed6eb +0x13d:  lea    -0x8(%ebp),%esp
085ed6ee +0x140:  add    $0x0,%esp
085ed6f1 +0x143:  pop    %ebx
085ed6f2 +0x144:  pop    %esi
085ed6f3 +0x145:  pop    %ebp
085ed6f4 +0x146:  ret
```

## 反编译 C

```c
// CQueryCounter::RegisterQuery @ 0x85ed5ae

/* CQueryCounter::RegisterQuery(char const*, int, int) */

undefined4 CQueryCounter::RegisterQuery(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 in_stack_00000010;
  pair local_68 [4];
  char local_64;
  pair local_60 [4];
  char local_5c;
  undefined4 local_58 [3];
  pair<int_const,CQueryCounter::QUERY_INFO> local_4c [16];
  int local_3c [4];
  pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_2c [8];
  char *local_24 [2];
  cMyTrace local_1c [16];
  
  QUERY_INFO::QUERY_INFO((QUERY_INFO *)local_58);
  local_58[0] = in_stack_00000010;
  std::make_pair<int&,CQueryCounter::QUERY_INFO&>(local_3c,(QUERY_INFO *)&param_3);
  std::pair<int_const,CQueryCounter::QUERY_INFO>::pair<int,CQueryCounter::QUERY_INFO>
            (local_4c,(pair *)local_3c);
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::insert(local_60);
  if (local_5c == '\x01') {
    std::
    make_pair<char_const*&,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>&>
              (local_24,(_Rb_tree_iterator *)&param_2);
    std::
    pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>::
    pair<char_const*,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
              (local_2c,(pair *)local_24);
                    /* try { // try from 085ed66e to 085ed672 has its CatchHandler @ 085ed68e */
    std::
    map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
    ::insert(local_68);
    std::
    pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>::
    ~pair(local_2c);
    if (local_64 == '\x01') {
      uVar1 = 1;
    }
    else {
      cMyTrace::cMyTrace(local_1c,"bool CQueryCounter::RegisterQuery(const char*, int, int)",0x291,0
                        );
      cMyTrace::operator()(local_1c,"LoadQueryTable,  query_id_map_.insert ERROR");
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
