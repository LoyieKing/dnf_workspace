# OnStartMission

`_ZN10expert_job10CEnchanter14OnStartMissionEP5CUserS2_`

`expert_job::CEnchanter::OnStartMission(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849c7b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c7b6  _ZN10expert_job10CEnchanter14OnStartMissionEP5CUserS2_
#           expert_job::CEnchanter::OnStartMission(CUser*, CUser*)
# range [0x0849c7b6, 0x0849c821]
0849c7b6 +0x00:  push   %ebp
0849c7b7 +0x01:  mov    %esp,%ebp
0849c7b9 +0x03:  sub    $0x18,%esp
0849c7bc +0x06:  mov    0x8(%ebp),%eax
0849c7bf +0x09:  mov    0xc(%ebp),%edx
0849c7c2 +0x0c:  mov    %edx,0x28(%eax)
0849c7c5 +0x0f:  mov    0xc(%ebp),%eax
0849c7c8 +0x12:  mov    %eax,(%esp)
0849c7cb +0x15:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849c7d0 +0x1a:  movzwl %ax,%edx
0849c7d3 +0x1d:  mov    0x8(%ebp),%eax
0849c7d6 +0x20:  mov    %edx,0x30(%eax)
0849c7d9 +0x23:  mov    0x8(%ebp),%edx
0849c7dc +0x26:  mov    0x8(%ebp),%eax
0849c7df +0x29:  mov    0x28(%eax),%eax
0849c7e2 +0x2c:  mov    %edx,0x4(%esp)
0849c7e6 +0x30:  mov    %eax,(%esp)
0849c7e9 +0x33:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
0849c7ee +0x38:  mov    0x8(%ebp),%eax
0849c7f1 +0x3b:  mov    0x10(%ebp),%edx
0849c7f4 +0x3e:  mov    %edx,0x2c(%eax)
0849c7f7 +0x41:  mov    0x10(%ebp),%eax
0849c7fa +0x44:  mov    %eax,(%esp)
0849c7fd +0x47:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849c802 +0x4c:  movzwl %ax,%edx
0849c805 +0x4f:  mov    0x8(%ebp),%eax
0849c808 +0x52:  mov    %edx,0x34(%eax)
0849c80b +0x55:  mov    0x8(%ebp),%edx
0849c80e +0x58:  mov    0x8(%ebp),%eax
0849c811 +0x5b:  mov    0x2c(%eax),%eax
0849c814 +0x5e:  mov    %edx,0x4(%esp)
0849c818 +0x62:  mov    %eax,(%esp)
0849c81b +0x65:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
0849c820 +0x6a:  leave
0849c821 +0x6b:  ret
```

## 反编译 C

```c
// expert_job::CEnchanter::OnStartMission @ 0x849c7b6

/* expert_job::CEnchanter::OnStartMission(CUser*, CUser*) */

void __thiscall
expert_job::CEnchanter::OnStartMission(CEnchanter *this,CUser *param_1,CUser *param_2)

{
  uint uVar1;
  
  *(CUser **)(this + 0x28) = param_1;
  uVar1 = CUser::get_unique_id(param_1);
  *(uint *)(this + 0x30) = uVar1 & 0xffff;
  CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x28),(CExpertJob *)this);
  *(CUser **)(this + 0x2c) = param_2;
  uVar1 = CUser::get_unique_id(param_2);
  *(uint *)(this + 0x34) = uVar1 & 0xffff;
  CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x2c),(CExpertJob *)this);
  return;
}
```
