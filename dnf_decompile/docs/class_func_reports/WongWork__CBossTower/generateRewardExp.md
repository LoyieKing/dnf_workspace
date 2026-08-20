# generateRewardExp

`_ZN8WongWork10CBossTower17generateRewardExpEv`

`WongWork::CBossTower::generateRewardExp()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08144d54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08144d54  _ZN8WongWork10CBossTower17generateRewardExpEv
#           WongWork::CBossTower::generateRewardExp()
# range [0x08144d54, 0x08144e35]
08144d54 +0x00:  push   %ebp
08144d55 +0x01:  mov    %esp,%ebp
08144d57 +0x03:  push   %ebx
08144d58 +0x04:  sub    $0x34,%esp
08144d5b +0x07:  movl   $0x0,-0x10(%ebp)
08144d62 +0x0e:  jmp    08144e1c <+0xc8>
08144d67 +0x13:  mov    0x8(%ebp),%eax
08144d6a +0x16:  mov    0x4(%eax),%eax
08144d6d +0x19:  mov    -0x10(%ebp),%edx
08144d70 +0x1c:  mov    %edx,0x4(%esp)
08144d74 +0x20:  mov    %eax,(%esp)
08144d77 +0x23:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08144d7c +0x28:  mov    %eax,-0xc(%ebp)
08144d7f +0x2b:  cmpl   $0x0,-0xc(%ebp)
08144d83 +0x2f:  je     08144da1 <+0x4d>
08144d85 +0x31:  mov    0x8(%ebp),%eax
08144d88 +0x34:  mov    0x4(%eax),%eax
08144d8b +0x37:  mov    -0x10(%ebp),%edx
08144d8e +0x3a:  mov    %edx,0x4(%esp)
08144d92 +0x3e:  mov    %eax,(%esp)
08144d95 +0x41:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08144d9a +0x46:  xor    $0x1,%eax
08144d9d +0x49:  test   %al,%al
08144d9f +0x4b:  je     08144da8 <+0x54>
08144da1 +0x4d:  mov    $0x1,%eax
08144da6 +0x52:  jmp    08144dad <+0x59>
08144da8 +0x54:  mov    $0x0,%eax
08144dad +0x59:  test   %al,%al
08144daf +0x5b:  jne    08144e17 <+0xc3>
08144db1 +0x5d:  movl   $0x0,-0x14(%ebp)
08144db8 +0x64:  mov    -0xc(%ebp),%eax
08144dbb +0x67:  mov    %eax,(%esp)
08144dbe +0x6a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08144dc3 +0x6f:  mov    %eax,%ebx
08144dc5 +0x71:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08144dca +0x76:  lea    -0x14(%ebp),%edx
08144dcd +0x79:  mov    %edx,0x8(%esp)
08144dd1 +0x7d:  mov    %ebx,0x4(%esp)
08144dd5 +0x81:  mov    %eax,(%esp)
08144dd8 +0x84:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
08144ddd +0x89:  mov    0x8(%ebp),%eax
08144de0 +0x8c:  mov    0x9f0(%eax),%ebx
08144de6 +0x92:  mov    -0x14(%ebp),%ecx
08144de9 +0x95:  mov    0x8(%ebp),%eax
08144dec +0x98:  mov    0xae0(%eax),%edx
08144df2 +0x9e:  mov    0x8(%ebp),%eax
08144df5 +0xa1:  mov    %ebx,0x10(%esp)
08144df9 +0xa5:  mov    %ecx,0xc(%esp)
08144dfd +0xa9:  mov    %edx,0x8(%esp)
08144e01 +0xad:  mov    -0x10(%ebp),%edx
08144e04 +0xb0:  mov    %edx,0x4(%esp)
08144e08 +0xb4:  mov    %eax,(%esp)
08144e0b +0xb7:  call   08149e20 <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon>  ; WongWork::CBossPlay::generateRewardExp(int, unsigned int, unsigned int, CDungeon const*)
08144e10 +0xbc:  xor    $0x1,%eax
08144e13 +0xbf:  test   %al,%al
08144e15 +0xc1:  jmp    08144e18 <+0xc4>
08144e17 +0xc3:  nop
08144e18 +0xc4:  addl   $0x1,-0x10(%ebp)
08144e1c +0xc8:  cmpl   $0x3,-0x10(%ebp)
08144e20 +0xcc:  setle  %al
08144e23 +0xcf:  test   %al,%al
08144e25 +0xd1:  jne    08144d67 <+0x13>
08144e2b +0xd7:  mov    $0x1,%eax
08144e30 +0xdc:  add    $0x34,%esp
08144e33 +0xdf:  pop    %ebx
08144e34 +0xe0:  pop    %ebp
08144e35 +0xe1:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::generateRewardExp @ 0x8144d54

/* WongWork::CBossTower::generateRewardExp() */

undefined4 __thiscall WongWork::CBossTower::generateRewardExp(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  uint local_18;
  int local_14;
  CUserCharacInfo *local_10;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 1;
    }
    local_10 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (local_10 == (CUserCharacInfo *)0x0) {
LAB_08144da1:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar2 != '\x01') goto LAB_08144da1;
      bVar1 = false;
    }
    if (!bVar1) {
      local_18 = 0;
      iVar3 = CUserCharacInfo::get_charac_level(local_10);
      this_00 = (CDataManager *)G_CDataManager();
      CDataManager::get_mob_reward(this_00,iVar3,&local_18);
      CBossPlay::generateRewardExp
                ((CBossPlay *)this,local_14,*(uint *)(this + 0xae0),local_18,
                 *(CDungeon **)(this + 0x9f0));
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
