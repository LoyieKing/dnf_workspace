# getPrefix

`_ZN18RandomOptionScript9getPrefixEiib`

`RandomOptionScript::getPrefix(int, int, bool)`

| 类 | 地址 |
|---|---|
| `RandomOptionScript` | `0x08a73956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a73956  _ZN18RandomOptionScript9getPrefixEiib
#           RandomOptionScript::getPrefix(int, int, bool)
# range [0x08a73956, 0x08a73a7d]
08a73956 +0x000:  push   %ebp
08a73957 +0x001:  mov    %esp,%ebp
08a73959 +0x003:  push   %edi
08a7395a +0x004:  push   %esi
08a7395b +0x005:  push   %ebx
08a7395c +0x006:  sub    $0x4c,%esp
08a7395f +0x009:  mov    0x8(%ebp),%ebx
08a73962 +0x00c:  mov    0x18(%ebp),%eax
08a73965 +0x00f:  mov    %al,-0x3c(%ebp)
08a73968 +0x012:  mov    %ebx,%eax
08a7396a +0x014:  mov    %eax,(%esp)
08a7396d +0x017:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a73972 +0x01c:  mov    0xc(%ebp),%eax
08a73975 +0x01f:  add    $0x1a8,%eax
08a7397a +0x024:  mov    %eax,-0x28(%ebp)
08a7397d +0x027:  cmpb   $0x0,-0x3c(%ebp)
08a73981 +0x02b:  je     08a7398e <+0x38>
08a73983 +0x02d:  mov    0xc(%ebp),%eax
08a73986 +0x030:  add    $0x1c0,%eax
08a7398b +0x035:  mov    %eax,-0x28(%ebp)
08a7398e +0x038:  mov    0x14(%ebp),%eax
08a73991 +0x03b:  mov    %eax,0x4(%esp)
08a73995 +0x03f:  mov    0xc(%ebp),%eax
08a73998 +0x042:  mov    %eax,(%esp)
08a7399b +0x045:  call   08a73a80 <_ZN18RandomOptionScript14getPrefixGradeEi>  ; RandomOptionScript::getPrefixGrade(int)
08a739a0 +0x04a:  mov    %eax,-0x24(%ebp)
08a739a3 +0x04d:  cmpb   $0x0,-0x3c(%ebp)
08a739a7 +0x051:  je     08a739ad <+0x57>
08a739a9 +0x053:  addl   $0x3,-0x24(%ebp)
08a739ad +0x057:  lea    -0x30(%ebp),%eax
08a739b0 +0x05a:  lea    0x10(%ebp),%edx
08a739b3 +0x05d:  mov    %edx,0x8(%esp)
08a739b7 +0x061:  mov    -0x28(%ebp),%edx
08a739ba +0x064:  mov    %edx,0x4(%esp)
08a739be +0x068:  mov    %eax,(%esp)
08a739c1 +0x06b:  call   08a74e54 <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x12f5>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x12f5
08a739c6 +0x070:  sub    $0x4,%esp
08a739c9 +0x073:  lea    -0x2c(%ebp),%eax
08a739cc +0x076:  mov    -0x28(%ebp),%edx
08a739cf +0x079:  mov    %edx,0x4(%esp)
08a739d3 +0x07d:  mov    %eax,(%esp)
08a739d6 +0x080:  call   08a74e80 <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x1321>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x1321
08a739db +0x085:  sub    $0x4,%esp
08a739de +0x088:  lea    -0x2c(%ebp),%eax
08a739e1 +0x08b:  mov    %eax,0x4(%esp)
08a739e5 +0x08f:  lea    -0x30(%ebp),%eax
08a739e8 +0x092:  mov    %eax,(%esp)
08a739eb +0x095:  call   08a74ea6 <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x1347>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x1347
08a739f0 +0x09a:  test   %al,%al
08a739f2 +0x09c:  je     08a73a6e <+0x118>
08a739f4 +0x09e:  lea    -0x30(%ebp),%eax
08a739f7 +0x0a1:  mov    %eax,(%esp)
08a739fa +0x0a4:  call   08a74eba <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x135b>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x135b
08a739ff +0x0a9:  add    $0x4,%eax
08a73a02 +0x0ac:  mov    %eax,-0x20(%ebp)
08a73a05 +0x0af:  movl   $0x0,-0x1c(%ebp)
08a73a0c +0x0b6:  jmp    08a73a3d <+0xe7>
08a73a0e +0x0b8:  mov    -0x24(%ebp),%eax
08a73a11 +0x0bb:  cmp    -0x1c(%ebp),%eax
08a73a14 +0x0be:  jne    08a73a39 <+0xe3>
08a73a16 +0x0c0:  mov    -0x1c(%ebp),%eax
08a73a19 +0x0c3:  mov    %eax,0x4(%esp)
08a73a1d +0x0c7:  mov    -0x20(%ebp),%eax
08a73a20 +0x0ca:  mov    %eax,(%esp)
08a73a23 +0x0cd:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08a73a28 +0x0d2:  mov    %ebx,%edx
08a73a2a +0x0d4:  mov    %eax,0x4(%esp)
08a73a2e +0x0d8:  mov    %edx,(%esp)
08a73a31 +0x0db:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08a73a36 +0x0e0:  nop
08a73a37 +0x0e1:  jmp    08a73a6f <+0x119>
08a73a39 +0x0e3:  addl   $0x1,-0x1c(%ebp)
08a73a3d +0x0e7:  mov    -0x20(%ebp),%eax
08a73a40 +0x0ea:  mov    %eax,(%esp)
08a73a43 +0x0ed:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
08a73a48 +0x0f2:  cmp    -0x1c(%ebp),%eax
08a73a4b +0x0f5:  seta   %al
08a73a4e +0x0f8:  test   %al,%al
08a73a50 +0x0fa:  jne    08a73a0e <+0xb8>
08a73a52 +0x0fc:  jmp    08a73a6f <+0x119>
08a73a54 +0x0fe:  mov    %edx,%esi
08a73a56 +0x100:  mov    %eax,%edi
08a73a58 +0x102:  mov    %ebx,%eax
08a73a5a +0x104:  mov    %eax,(%esp)
08a73a5d +0x107:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a73a62 +0x10c:  mov    %edi,%eax
08a73a64 +0x10e:  mov    %esi,%edx
08a73a66 +0x110:  mov    %eax,(%esp)
08a73a69 +0x113:  call   08ae3750 <_Unwind_Resume>
08a73a6e +0x118:  nop
08a73a6f +0x119:  mov    %ebx,%eax
08a73a71 +0x11b:  mov    %ebx,%eax
08a73a73 +0x11d:  lea    -0xc(%ebp),%esp
08a73a76 +0x120:  add    $0x0,%esp
08a73a79 +0x123:  pop    %ebx
08a73a7a +0x124:  pop    %esi
08a73a7b +0x125:  pop    %edi
08a73a7c +0x126:  pop    %ebp
08a73a7d +0x127:  ret    $0x4
```

## 反编译 C

```c
// RandomOptionScript::getPrefix @ 0x8a73956

/* RandomOptionScript::getPrefix(int, int, bool) */

int RandomOptionScript::getPrefix(int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  uint uVar4;
  int in_stack_00000010;
  char in_stack_00000014;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>
  local_34 [4];
  map<int,std::vector<std::string,std::allocator<std::string>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>>
  local_30 [4];
  int local_2c;
  uint local_28;
  vector<std::string,std::allocator<std::string>> *local_24;
  uint local_20;
  
  std::string::string((string *)param_1);
  local_2c = param_2 + 0x1a8;
  if (in_stack_00000014 != '\0') {
    local_2c = param_2 + 0x1c0;
  }
                    /* try { // try from 08a7399b to 08a73a35 has its CatchHandler @ 08a73a54 */
  local_28 = getPrefixGrade((RandomOptionScript *)param_2,in_stack_00000010);
  if (in_stack_00000014 != '\0') {
    local_28 = local_28 + 3;
  }
  std::
  map<int,std::vector<std::string,std::allocator<std::string>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::find((int *)local_34);
  std::
  map<int,std::vector<std::string,std::allocator<std::string>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::end(local_30);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>
          ::operator!=(local_34,(_Rb_tree_iterator *)local_30);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>
            ::operator->(local_34);
    local_24 = (vector<std::string,std::allocator<std::string>> *)(iVar2 + 4);
    local_20 = 0;
    while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size(local_24),
          local_20 < uVar4) {
      if (local_28 == local_20) {
        psVar3 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[](local_24,local_20)
        ;
        std::string::operator=((string *)param_1,psVar3);
        return param_1;
      }
      local_20 = local_20 + 1;
    }
  }
  return param_1;
}
```
