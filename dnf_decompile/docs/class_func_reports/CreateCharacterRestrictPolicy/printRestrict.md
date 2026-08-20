# printRestrict

`_ZN29CreateCharacterRestrictPolicy13printRestrictEv`

`CreateCharacterRestrictPolicy::printRestrict()`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816df6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816df6c  _ZN29CreateCharacterRestrictPolicy13printRestrictEv
#           CreateCharacterRestrictPolicy::printRestrict()
# range [0x0816df6c, 0x0816e0a5]
0816df6c +0x000:  push   %ebp
0816df6d +0x001:  mov    %esp,%ebp
0816df6f +0x003:  push   %esi
0816df70 +0x004:  push   %ebx
0816df71 +0x005:  sub    $0x60,%esp
0816df74 +0x008:  movl   $0x1,0x14(%esp)
0816df7c +0x010:  movl   $0x1,0x10(%esp)
0816df84 +0x018:  movl   $0x9,0xc(%esp)
0816df8c +0x020:  movl   $0x125,0x8(%esp)
0816df94 +0x028:  movl   $&_ZZN29CreateCharacterRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816df9c +0x030:  lea    -0x3c(%ebp),%eax
0816df9f +0x033:  mov    %eax,(%esp)
0816dfa2 +0x036:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816dfa7 +0x03b:  movl   $"\tCreate Character Begin",0x4(%esp)
0816dfaf +0x043:  lea    -0x3c(%ebp),%eax
0816dfb2 +0x046:  mov    %eax,(%esp)
0816dfb5 +0x049:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816dfba +0x04e:  movl   $0x0,-0xc(%ebp)
0816dfc1 +0x055:  jmp    0816e03d <+0xd1>
0816dfc3 +0x057:  mov    0x8(%ebp),%eax
0816dfc6 +0x05a:  lea    0xc(%eax),%edx
0816dfc9 +0x05d:  mov    -0xc(%ebp),%eax
0816dfcc +0x060:  mov    %eax,0x4(%esp)
0816dfd0 +0x064:  mov    %edx,(%esp)
0816dfd3 +0x067:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816dfd8 +0x06c:  movzwl (%eax),%eax
0816dfdb +0x06f:  movswl %ax,%esi
0816dfde +0x072:  mov    -0xc(%ebp),%eax
0816dfe1 +0x075:  mov    %eax,(%esp)
0816dfe4 +0x078:  call   0816d472 <_ZN17CharacterRestrict12enumToStringENS_4EnumE>  ; CharacterRestrict::enumToString(CharacterRestrict::Enum)
0816dfe9 +0x07d:  mov    %eax,%ebx
0816dfeb +0x07f:  movl   $0x1,0x14(%esp)
0816dff3 +0x087:  movl   $0x1,0x10(%esp)
0816dffb +0x08f:  movl   $0x9,0xc(%esp)
0816e003 +0x097:  movl   $0x128,0x8(%esp)
0816e00b +0x09f:  movl   $&_ZZN29CreateCharacterRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816e013 +0x0a7:  lea    -0x2c(%ebp),%eax
0816e016 +0x0aa:  mov    %eax,(%esp)
0816e019 +0x0ad:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816e01e +0x0b2:  mov    %esi,0xc(%esp)
0816e022 +0x0b6:  mov    %ebx,0x8(%esp)
0816e026 +0x0ba:  movl   $"\t- %s : %d",0x4(%esp)
0816e02e +0x0c2:  lea    -0x2c(%ebp),%eax
0816e031 +0x0c5:  mov    %eax,(%esp)
0816e034 +0x0c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816e039 +0x0cd:  addl   $0x1,-0xc(%ebp)
0816e03d +0x0d1:  mov    0x8(%ebp),%eax
0816e040 +0x0d4:  add    $0xc,%eax
0816e043 +0x0d7:  mov    %eax,(%esp)
0816e046 +0x0da:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
0816e04b +0x0df:  cmp    -0xc(%ebp),%eax
0816e04e +0x0e2:  seta   %al
0816e051 +0x0e5:  test   %al,%al
0816e053 +0x0e7:  jne    0816dfc3 <+0x57>
0816e059 +0x0ed:  movl   $0x1,0x14(%esp)
0816e061 +0x0f5:  movl   $0x1,0x10(%esp)
0816e069 +0x0fd:  movl   $0x9,0xc(%esp)
0816e071 +0x105:  movl   $0x12c,0x8(%esp)
0816e079 +0x10d:  movl   $&_ZZN29CreateCharacterRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816e081 +0x115:  lea    -0x1c(%ebp),%eax
0816e084 +0x118:  mov    %eax,(%esp)
0816e087 +0x11b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816e08c +0x120:  movl   $"\tCreate Character End",0x4(%esp)
0816e094 +0x128:  lea    -0x1c(%ebp),%eax
0816e097 +0x12b:  mov    %eax,(%esp)
0816e09a +0x12e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816e09f +0x133:  add    $0x60,%esp
0816e0a2 +0x136:  pop    %ebx
0816e0a3 +0x137:  pop    %esi
0816e0a4 +0x138:  pop    %ebp
0816e0a5 +0x139:  ret
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::printRestrict @ 0x816df6c

/* CreateCharacterRestrictPolicy::printRestrict() */

void __thiscall CreateCharacterRestrictPolicy::printRestrict(CreateCharacterRestrictPolicy *this)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  uint local_10;
  
  cMyTrace::cMyTrace(local_40,"virtual void CreateCharacterRestrictPolicy::printRestrict()",0x125,9,
                     true,true);
  cMyTrace::operator()(local_40,"\tCreate Character Begin");
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar4 <= local_10) break;
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    sVar1 = *psVar2;
    uVar3 = CharacterRestrict::enumToString(local_10);
    cMyTrace::cMyTrace(local_30,"virtual void CreateCharacterRestrictPolicy::printRestrict()",0x128,
                       9,true,true);
    cMyTrace::operator()(local_30,"\t- %s : %d",uVar3,(int)sVar1);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_20,"virtual void CreateCharacterRestrictPolicy::printRestrict()",300,9,
                     true,true);
  cMyTrace::operator()(local_20,"\tCreate Character End");
  return;
}
```
