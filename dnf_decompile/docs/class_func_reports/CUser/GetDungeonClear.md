# GetDungeonClear

`_ZNK5CUser15GetDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR`

`CUser::GetDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864de58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864de58  _ZNK5CUser15GetDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR
#           CUser::GetDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) const
# range [0x0864de58, 0x0864dee9]
0864de58 +0x00:  push   %ebp
0864de59 +0x01:  mov    %esp,%ebp
0864de5b +0x03:  push   %ebx
0864de5c +0x04:  sub    $0x24,%esp
0864de5f +0x07:  mov    0xc(%ebp),%eax
0864de62 +0x0a:  movl   $0x0,0xc(%eax)
0864de69 +0x11:  mov    0x8(%ebp),%eax
0864de6c +0x14:  mov    %eax,(%esp)
0864de6f +0x17:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864de74 +0x1c:  test   %eax,%eax
0864de76 +0x1e:  sete   %al
0864de79 +0x21:  test   %al,%al
0864de7b +0x23:  je     0864deba <+0x62>
0864de7d +0x25:  movl   $0x5,0xc(%esp)
0864de85 +0x2d:  movl   $0x1400,0x8(%esp)
0864de8d +0x35:  movl   $&_ZZNK5CUser15GetDungeonClearEP22SIG_LOAD_DUNGEON_CLEARE19__PRETTY_FUNCTION__,0x4(%esp)
0864de95 +0x3d:  lea    -0x18(%ebp),%eax
0864de98 +0x40:  mov    %eax,(%esp)
0864de9b +0x43:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864dea0 +0x48:  movl   $"CUser::GetDungeonClear User  m_selected is null",0x4(%esp)
0864dea8 +0x50:  lea    -0x18(%ebp),%eax
0864deab +0x53:  mov    %eax,(%esp)
0864deae +0x56:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864deb3 +0x5b:  mov    $0x0,%eax
0864deb8 +0x60:  jmp    0864dee4 <+0x8c>
0864deba +0x62:  mov    0xc(%ebp),%eax
0864debd +0x65:  lea    0x10(%eax),%ebx
0864dec0 +0x68:  mov    0x8(%ebp),%eax
0864dec3 +0x6b:  mov    %eax,(%esp)
0864dec6 +0x6e:  call   085bfab2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1010>  ; global constructors keyed to CParty::cMember::cMember()+0x1010
0864decb +0x73:  movl   $0x1800,0x8(%esp)
0864ded3 +0x7b:  mov    %ebx,0x4(%esp)
0864ded7 +0x7f:  mov    %eax,(%esp)
0864deda +0x82:  call   0848441c <_ZNK8WongWork13CDungeonClear8toStringEPcj>  ; WongWork::CDungeonClear::toString(char*, unsigned int) const
0864dedf +0x87:  mov    $0x1,%eax
0864dee4 +0x8c:  add    $0x24,%esp
0864dee7 +0x8f:  pop    %ebx
0864dee8 +0x90:  pop    %ebp
0864dee9 +0x91:  ret
```

## 反编译 C

```c
// CUser::GetDungeonClear @ 0x864de58

/* CUser::GetDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) const */

bool __thiscall CUser::GetDungeonClear(CUser *this,SIG_LOAD_DUNGEON_CLEAR *param_1)

{
  int iVar1;
  CDungeonClear *this_00;
  cMyTrace local_1c [20];
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    this_00 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefR((CUserCharacInfo *)this);
    WongWork::CDungeonClear::toString(this_00,(char *)(param_1 + 0x10),0x1800);
  }
  else {
    cMyTrace::cMyTrace(local_1c,"bool CUser::GetDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) const",0x1400,
                       5);
    cMyTrace::operator()(local_1c,"CUser::GetDungeonClear User  m_selected is null");
  }
  return iVar1 != 0;
}
```
