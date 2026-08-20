# add

`_ZN22CNPCDynamicInfoManager3addEPK10CNPCScript`

`CNPCDynamicInfoManager::add(CNPCScript const*)`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfoManager` | `0x08580668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580668  _ZN22CNPCDynamicInfoManager3addEPK10CNPCScript
#           CNPCDynamicInfoManager::add(CNPCScript const*)
# range [0x08580668, 0x08580721]
08580668 +0x00:  push   %ebp
08580669 +0x01:  mov    %esp,%ebp
0858066b +0x03:  push   %ebx
0858066c +0x04:  sub    $0x34,%esp
0858066f +0x07:  mov    0xc(%ebp),%eax
08580672 +0x0a:  mov    %eax,(%esp)
08580675 +0x0d:  call   085819ac <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x13e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x13e
0858067a +0x12:  mov    %eax,0x4(%esp)
0858067e +0x16:  mov    0x8(%ebp),%eax
08580681 +0x19:  mov    %eax,(%esp)
08580684 +0x1c:  call   08581948 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xda>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xda
08580689 +0x21:  test   %eax,%eax
0858068b +0x23:  setne  %al
0858068e +0x26:  test   %al,%al
08580690 +0x28:  je     0858069c <+0x34>
08580692 +0x2a:  mov    $0x0,%eax
08580697 +0x2f:  jmp    0858071d <+0xb5>
0858069c +0x34:  movl   $0x10,(%esp)
085806a3 +0x3b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085806a8 +0x40:  mov    %eax,%ebx
085806aa +0x42:  mov    %ebx,%eax
085806ac +0x44:  mov    0xc(%ebp),%edx
085806af +0x47:  mov    %edx,0x4(%esp)
085806b3 +0x4b:  mov    %eax,(%esp)
085806b6 +0x4e:  call   0858191c <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xae>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xae
085806bb +0x53:  mov    %ebx,%eax
085806bd +0x55:  mov    %eax,-0x28(%ebp)
085806c0 +0x58:  mov    0xc(%ebp),%eax
085806c3 +0x5b:  mov    %eax,(%esp)
085806c6 +0x5e:  call   085819ac <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x13e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x13e
085806cb +0x63:  mov    %eax,-0xc(%ebp)
085806ce +0x66:  lea    -0x14(%ebp),%eax
085806d1 +0x69:  lea    -0x28(%ebp),%edx
085806d4 +0x6c:  mov    %edx,0x8(%esp)
085806d8 +0x70:  lea    -0xc(%ebp),%edx
085806db +0x73:  mov    %edx,0x4(%esp)
085806df +0x77:  mov    %eax,(%esp)
085806e2 +0x7a:  call   0858292e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x10c0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x10c0
085806e7 +0x7f:  sub    $0x4,%esp
085806ea +0x82:  lea    -0x14(%ebp),%eax
085806ed +0x85:  mov    %eax,0x4(%esp)
085806f1 +0x89:  lea    -0x1c(%ebp),%eax
085806f4 +0x8c:  mov    %eax,(%esp)
085806f7 +0x8f:  call   08582974 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1106>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1106
085806fc +0x94:  mov    0x8(%ebp),%edx
085806ff +0x97:  lea    -0x24(%ebp),%eax
08580702 +0x9a:  lea    -0x1c(%ebp),%ecx
08580705 +0x9d:  mov    %ecx,0x8(%esp)
08580709 +0xa1:  mov    %edx,0x4(%esp)
0858070d +0xa5:  mov    %eax,(%esp)
08580710 +0xa8:  call   085829a4 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1136>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1136
08580715 +0xad:  sub    $0x4,%esp
08580718 +0xb0:  mov    $0x1,%eax
0858071d +0xb5:  mov    -0x4(%ebp),%ebx
08580720 +0xb8:  leave
08580721 +0xb9:  ret
```

## 反编译 C

```c
// CNPCDynamicInfoManager::add @ 0x8580668

/* CNPCDynamicInfoManager::add(CNPCScript const*) */

bool __thiscall CNPCDynamicInfoManager::add(CNPCDynamicInfoManager *this,CNPCScript *param_1)

{
  int iVar1;
  CNPCDynamicInfo *this_00;
  pair local_28 [8];
  pair<unsigned_int_const,CNPCDynamicInfo*> local_20 [8];
  uint local_18 [2];
  CNPCDynamicInfo *local_10 [2];
  
  CNPCScript::getIndex(param_1);
  iVar1 = getNPCInfo((uint)this);
  if (iVar1 == 0) {
    this_00 = operator_new(0x10);
    CNPCDynamicInfo::CNPCDynamicInfo(this_00,param_1);
    local_10[0] = (CNPCDynamicInfo *)CNPCScript::getIndex(param_1);
    std::make_pair<unsigned_int,CNPCDynamicInfo*&>(local_18,local_10);
    std::pair<unsigned_int_const,CNPCDynamicInfo*>::pair<unsigned_int,CNPCDynamicInfo*>
              (local_20,(pair *)local_18);
    std::
    map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
    ::insert(local_28);
  }
  return iVar1 == 0;
}
```
