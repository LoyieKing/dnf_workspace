# printRestrict

`_ZN22SecurityRestrictPolicy13printRestrictEv`

`SecurityRestrictPolicy::printRestrict()`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816dbe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816dbe8  _ZN22SecurityRestrictPolicy13printRestrictEv
#           SecurityRestrictPolicy::printRestrict()
# range [0x0816dbe8, 0x0816dd21]
0816dbe8 +0x000:  push   %ebp
0816dbe9 +0x001:  mov    %esp,%ebp
0816dbeb +0x003:  push   %esi
0816dbec +0x004:  push   %ebx
0816dbed +0x005:  sub    $0x60,%esp
0816dbf0 +0x008:  movl   $0x1,0x14(%esp)
0816dbf8 +0x010:  movl   $0x1,0x10(%esp)
0816dc00 +0x018:  movl   $0x9,0xc(%esp)
0816dc08 +0x020:  movl   $0xd7,0x8(%esp)
0816dc10 +0x028:  movl   $&_ZZN22SecurityRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816dc18 +0x030:  lea    -0x3c(%ebp),%eax
0816dc1b +0x033:  mov    %eax,(%esp)
0816dc1e +0x036:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816dc23 +0x03b:  movl   $"\tSecurity Restrict Begin",0x4(%esp)
0816dc2b +0x043:  lea    -0x3c(%ebp),%eax
0816dc2e +0x046:  mov    %eax,(%esp)
0816dc31 +0x049:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816dc36 +0x04e:  movl   $0x0,-0xc(%ebp)
0816dc3d +0x055:  jmp    0816dcb9 <+0xd1>
0816dc3f +0x057:  mov    0x8(%ebp),%eax
0816dc42 +0x05a:  lea    0xc(%eax),%edx
0816dc45 +0x05d:  mov    -0xc(%ebp),%eax
0816dc48 +0x060:  mov    %eax,0x4(%esp)
0816dc4c +0x064:  mov    %edx,(%esp)
0816dc4f +0x067:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
0816dc54 +0x06c:  movzwl (%eax),%eax
0816dc57 +0x06f:  movswl %ax,%esi
0816dc5a +0x072:  mov    -0xc(%ebp),%eax
0816dc5d +0x075:  mov    %eax,(%esp)
0816dc60 +0x078:  call   0816d481 <_ZN16SecurityRestrict12enumToStringENS_4EnumE>  ; SecurityRestrict::enumToString(SecurityRestrict::Enum)
0816dc65 +0x07d:  mov    %eax,%ebx
0816dc67 +0x07f:  movl   $0x1,0x14(%esp)
0816dc6f +0x087:  movl   $0x1,0x10(%esp)
0816dc77 +0x08f:  movl   $0x9,0xc(%esp)
0816dc7f +0x097:  movl   $0xda,0x8(%esp)
0816dc87 +0x09f:  movl   $&_ZZN22SecurityRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816dc8f +0x0a7:  lea    -0x2c(%ebp),%eax
0816dc92 +0x0aa:  mov    %eax,(%esp)
0816dc95 +0x0ad:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816dc9a +0x0b2:  mov    %esi,0xc(%esp)
0816dc9e +0x0b6:  mov    %ebx,0x8(%esp)
0816dca2 +0x0ba:  movl   $"\t- %s : %d",0x4(%esp)
0816dcaa +0x0c2:  lea    -0x2c(%ebp),%eax
0816dcad +0x0c5:  mov    %eax,(%esp)
0816dcb0 +0x0c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816dcb5 +0x0cd:  addl   $0x1,-0xc(%ebp)
0816dcb9 +0x0d1:  mov    0x8(%ebp),%eax
0816dcbc +0x0d4:  add    $0xc,%eax
0816dcbf +0x0d7:  mov    %eax,(%esp)
0816dcc2 +0x0da:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
0816dcc7 +0x0df:  cmp    -0xc(%ebp),%eax
0816dcca +0x0e2:  seta   %al
0816dccd +0x0e5:  test   %al,%al
0816dccf +0x0e7:  jne    0816dc3f <+0x57>
0816dcd5 +0x0ed:  movl   $0x1,0x14(%esp)
0816dcdd +0x0f5:  movl   $0x1,0x10(%esp)
0816dce5 +0x0fd:  movl   $0x9,0xc(%esp)
0816dced +0x105:  movl   $0xde,0x8(%esp)
0816dcf5 +0x10d:  movl   $&_ZZN22SecurityRestrictPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816dcfd +0x115:  lea    -0x1c(%ebp),%eax
0816dd00 +0x118:  mov    %eax,(%esp)
0816dd03 +0x11b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816dd08 +0x120:  movl   $"\tSecurity Restrict End",0x4(%esp)
0816dd10 +0x128:  lea    -0x1c(%ebp),%eax
0816dd13 +0x12b:  mov    %eax,(%esp)
0816dd16 +0x12e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816dd1b +0x133:  add    $0x60,%esp
0816dd1e +0x136:  pop    %ebx
0816dd1f +0x137:  pop    %esi
0816dd20 +0x138:  pop    %ebp
0816dd21 +0x139:  ret
```

## 反编译 C

```c
// SecurityRestrictPolicy::printRestrict @ 0x816dbe8

/* SecurityRestrictPolicy::printRestrict() */

void __thiscall SecurityRestrictPolicy::printRestrict(SecurityRestrictPolicy *this)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  uint local_10;
  
  cMyTrace::cMyTrace(local_40,"virtual void SecurityRestrictPolicy::printRestrict()",0xd7,9,true,
                     true);
  cMyTrace::operator()(local_40,"\tSecurity Restrict Begin");
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar4 <= local_10) break;
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    sVar1 = *psVar2;
    uVar3 = SecurityRestrict::enumToString(local_10);
    cMyTrace::cMyTrace(local_30,"virtual void SecurityRestrictPolicy::printRestrict()",0xda,9,true,
                       true);
    cMyTrace::operator()(local_30,"\t- %s : %d",uVar3,(int)sVar1);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_20,"virtual void SecurityRestrictPolicy::printRestrict()",0xde,9,true,
                     true);
  cMyTrace::operator()(local_20,"\tSecurity Restrict End");
  return;
}
```
