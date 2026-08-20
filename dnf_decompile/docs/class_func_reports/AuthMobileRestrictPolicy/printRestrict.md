# printRestrict

`_ZN24AuthMobileRestrictPolicy13printRestrictEv`

`AuthMobileRestrictPolicy::printRestrict()`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d866  _ZN24AuthMobileRestrictPolicy13printRestrictEv
#           AuthMobileRestrictPolicy::printRestrict()
# range [0x0816d866, 0x0816d99f]
0816d866 +0x000:  push   %ebp
0816d867 +0x001:  mov    %esp,%ebp
0816d869 +0x003:  push   %esi
0816d86a +0x004:  push   %ebx
0816d86b +0x005:  sub    $0x60,%esp
0816d86e +0x008:  movl   $0x1,0x14(%esp)
0816d876 +0x010:  movl   $0x1,0x10(%esp)
0816d87e +0x018:  movl   $0x9,0xc(%esp)
0816d886 +0x020:  movl   $0x8d,0x8(%esp)
0816d88e +0x028:  movl   $&_ZZN24AuthMobileRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816d896 +0x030:  lea    -0x3c(%ebp),%eax
0816d899 +0x033:  mov    %eax,(%esp)
0816d89c +0x036:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816d8a1 +0x03b:  movl   $"\tMobile Auth Begin",0x4(%esp)
0816d8a9 +0x043:  lea    -0x3c(%ebp),%eax
0816d8ac +0x046:  mov    %eax,(%esp)
0816d8af +0x049:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816d8b4 +0x04e:  movl   $0x0,-0xc(%ebp)
0816d8bb +0x055:  jmp    0816d937 <+0xd1>
0816d8bd +0x057:  mov    0x8(%ebp),%eax
0816d8c0 +0x05a:  lea    0xc(%eax),%edx
0816d8c3 +0x05d:  mov    -0xc(%ebp),%eax
0816d8c6 +0x060:  mov    %eax,0x4(%esp)
0816d8ca +0x064:  mov    %edx,(%esp)
0816d8cd +0x067:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816d8d2 +0x06c:  movzwl (%eax),%eax
0816d8d5 +0x06f:  movswl %ax,%esi
0816d8d8 +0x072:  mov    -0xc(%ebp),%eax
0816d8db +0x075:  mov    %eax,(%esp)
0816d8de +0x078:  call   0816d463 <_ZN14MobileRestrict12enumToStringENS_4EnumE>  ; MobileRestrict::enumToString(MobileRestrict::Enum)
0816d8e3 +0x07d:  mov    %eax,%ebx
0816d8e5 +0x07f:  movl   $0x1,0x14(%esp)
0816d8ed +0x087:  movl   $0x1,0x10(%esp)
0816d8f5 +0x08f:  movl   $0x9,0xc(%esp)
0816d8fd +0x097:  movl   $0x90,0x8(%esp)
0816d905 +0x09f:  movl   $&_ZZN24AuthMobileRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816d90d +0x0a7:  lea    -0x2c(%ebp),%eax
0816d910 +0x0aa:  mov    %eax,(%esp)
0816d913 +0x0ad:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816d918 +0x0b2:  mov    %esi,0xc(%esp)
0816d91c +0x0b6:  mov    %ebx,0x8(%esp)
0816d920 +0x0ba:  movl   $"\t- %s : %d",0x4(%esp)
0816d928 +0x0c2:  lea    -0x2c(%ebp),%eax
0816d92b +0x0c5:  mov    %eax,(%esp)
0816d92e +0x0c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816d933 +0x0cd:  addl   $0x1,-0xc(%ebp)
0816d937 +0x0d1:  mov    0x8(%ebp),%eax
0816d93a +0x0d4:  add    $0xc,%eax
0816d93d +0x0d7:  mov    %eax,(%esp)
0816d940 +0x0da:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
0816d945 +0x0df:  cmp    -0xc(%ebp),%eax
0816d948 +0x0e2:  seta   %al
0816d94b +0x0e5:  test   %al,%al
0816d94d +0x0e7:  jne    0816d8bd <+0x57>
0816d953 +0x0ed:  movl   $0x1,0x14(%esp)
0816d95b +0x0f5:  movl   $0x1,0x10(%esp)
0816d963 +0x0fd:  movl   $0x9,0xc(%esp)
0816d96b +0x105:  movl   $0x94,0x8(%esp)
0816d973 +0x10d:  movl   $&_ZZN24AuthMobileRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816d97b +0x115:  lea    -0x1c(%ebp),%eax
0816d97e +0x118:  mov    %eax,(%esp)
0816d981 +0x11b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816d986 +0x120:  movl   $"\tMobile Auth End",0x4(%esp)
0816d98e +0x128:  lea    -0x1c(%ebp),%eax
0816d991 +0x12b:  mov    %eax,(%esp)
0816d994 +0x12e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816d999 +0x133:  add    $0x60,%esp
0816d99c +0x136:  pop    %ebx
0816d99d +0x137:  pop    %esi
0816d99e +0x138:  pop    %ebp
0816d99f +0x139:  ret
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::printRestrict @ 0x816d866

/* AuthMobileRestrictPolicy::printRestrict() */

void __thiscall AuthMobileRestrictPolicy::printRestrict(AuthMobileRestrictPolicy *this)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  uint local_10;
  
  cMyTrace::cMyTrace(local_40,"virtual void AuthMobileRestrictPolicy::printRestrict()",0x8d,9,true,
                     true);
  cMyTrace::operator()(local_40,"\tMobile Auth Begin");
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar4 <= local_10) break;
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    sVar1 = *psVar2;
    uVar3 = MobileRestrict::enumToString(local_10);
    cMyTrace::cMyTrace(local_30,"virtual void AuthMobileRestrictPolicy::printRestrict()",0x90,9,true
                       ,true);
    cMyTrace::operator()(local_30,"\t- %s : %d",uVar3,(int)sVar1);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_20,"virtual void AuthMobileRestrictPolicy::printRestrict()",0x94,9,true,
                     true);
  cMyTrace::operator()(local_20,"\tMobile Auth End");
  return;
}
```
