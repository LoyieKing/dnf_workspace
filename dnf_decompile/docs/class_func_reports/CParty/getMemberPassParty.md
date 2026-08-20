# getMemberPassParty

`_ZN6CParty18getMemberPassPartyEP5CUser`

`CParty::getMemberPassParty(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b900c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b900c  _ZN6CParty18getMemberPassPartyEP5CUser
#           CParty::getMemberPassParty(CUser*)
# range [0x085b900c, 0x085b916d]
085b900c +0x000:  push   %ebp
085b900d +0x001:  mov    %esp,%ebp
085b900f +0x003:  push   %ebx
085b9010 +0x004:  sub    $0x24,%esp
085b9013 +0x007:  movl   $0x0,-0x14(%ebp)
085b901a +0x00e:  movl   $0x0,-0xc(%ebp)
085b9021 +0x015:  jmp    085b910e <+0x102>
085b9026 +0x01a:  mov    -0xc(%ebp),%eax
085b9029 +0x01d:  mov    %eax,0x4(%esp)
085b902d +0x021:  mov    0x8(%ebp),%eax
085b9030 +0x024:  mov    %eax,(%esp)
085b9033 +0x027:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b9038 +0x02c:  xor    $0x1,%eax
085b903b +0x02f:  test   %al,%al
085b903d +0x031:  jne    085b9106 <+0xfa>
085b9043 +0x037:  mov    0xc(%ebp),%eax
085b9046 +0x03a:  mov    %eax,(%esp)
085b9049 +0x03d:  call   085bfbb4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1112>  ; global constructors keyed to CParty::cMember::cMember()+0x1112
085b904e +0x042:  mov    %eax,%ebx
085b9050 +0x044:  mov    -0xc(%ebp),%edx
085b9053 +0x047:  mov    0x8(%ebp),%ecx
085b9056 +0x04a:  mov    %edx,%eax
085b9058 +0x04c:  add    %eax,%eax
085b905a +0x04e:  add    %edx,%eax
085b905c +0x050:  shl    $0x3,%eax
085b905f +0x053:  lea    (%ecx,%eax,1),%eax
085b9062 +0x056:  add    $0x78,%eax
085b9065 +0x059:  mov    (%eax),%eax
085b9067 +0x05b:  movl   $0xffffffff,0x4(%esp)
085b906f +0x063:  mov    %eax,(%esp)
085b9072 +0x066:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085b9077 +0x06b:  cmp    %eax,%ebx
085b9079 +0x06d:  je     085b90bb <+0xaf>
085b907b +0x06f:  movl   $0xffffffff,0x4(%esp)
085b9083 +0x077:  mov    0xc(%ebp),%eax
085b9086 +0x07a:  mov    %eax,(%esp)
085b9089 +0x07d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085b908e +0x082:  mov    %eax,%ebx
085b9090 +0x084:  mov    -0xc(%ebp),%edx
085b9093 +0x087:  mov    0x8(%ebp),%ecx
085b9096 +0x08a:  mov    %edx,%eax
085b9098 +0x08c:  add    %eax,%eax
085b909a +0x08e:  add    %edx,%eax
085b909c +0x090:  shl    $0x3,%eax
085b909f +0x093:  lea    (%ecx,%eax,1),%eax
085b90a2 +0x096:  add    $0x78,%eax
085b90a5 +0x099:  mov    (%eax),%eax
085b90a7 +0x09b:  movl   $0xffffffff,0x4(%esp)
085b90af +0x0a3:  mov    %eax,(%esp)
085b90b2 +0x0a6:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085b90b7 +0x0ab:  cmp    %eax,%ebx
085b90b9 +0x0ad:  jne    085b90c2 <+0xb6>
085b90bb +0x0af:  mov    $0x1,%eax
085b90c0 +0x0b4:  jmp    085b90c7 <+0xbb>
085b90c2 +0x0b6:  mov    $0x0,%eax
085b90c7 +0x0bb:  test   %al,%al
085b90c9 +0x0bd:  jne    085b9109 <+0xfd>
085b90cb +0x0bf:  mov    -0xc(%ebp),%edx
085b90ce +0x0c2:  mov    0x8(%ebp),%ecx
085b90d1 +0x0c5:  mov    %edx,%eax
085b90d3 +0x0c7:  add    %eax,%eax
085b90d5 +0x0c9:  add    %edx,%eax
085b90d7 +0x0cb:  shl    $0x3,%eax
085b90da +0x0ce:  lea    (%ecx,%eax,1),%eax
085b90dd +0x0d1:  add    $0x78,%eax
085b90e0 +0x0d4:  mov    (%eax),%eax
085b90e2 +0x0d6:  mov    %eax,(%esp)
085b90e5 +0x0d9:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b90ea +0x0de:  mov    %eax,-0x10(%ebp)
085b90ed +0x0e1:  lea    -0x10(%ebp),%eax
085b90f0 +0x0e4:  mov    %eax,0x4(%esp)
085b90f4 +0x0e8:  lea    -0x14(%ebp),%eax
085b90f7 +0x0eb:  mov    %eax,(%esp)
085b90fa +0x0ee:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
085b90ff +0x0f3:  mov    (%eax),%eax
085b9101 +0x0f5:  mov    %eax,-0x14(%ebp)
085b9104 +0x0f8:  jmp    085b910a <+0xfe>
085b9106 +0x0fa:  nop
085b9107 +0x0fb:  jmp    085b910a <+0xfe>
085b9109 +0x0fd:  nop
085b910a +0x0fe:  addl   $0x1,-0xc(%ebp)
085b910e +0x102:  cmpl   $0x3,-0xc(%ebp)
085b9112 +0x106:  setle  %al
085b9115 +0x109:  test   %al,%al
085b9117 +0x10b:  jne    085b9026 <+0x1a>
085b911d +0x111:  mov    -0x14(%ebp),%eax
085b9120 +0x114:  test   %eax,%eax
085b9122 +0x116:  je     085b9144 <+0x138>
085b9124 +0x118:  mov    -0x14(%ebp),%ebx
085b9127 +0x11b:  mov    0xc(%ebp),%eax
085b912a +0x11e:  mov    %eax,(%esp)
085b912d +0x121:  call   08645d52 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv>  ; CUserCharacInfo::get_charac_level_before_dungeon() const
085b9132 +0x126:  mov    %ebx,%edx
085b9134 +0x128:  sub    %eax,%edx
085b9136 +0x12a:  mov    %edx,%eax
085b9138 +0x12c:  cmp    $0x6,%eax
085b913b +0x12f:  jg     085b9144 <+0x138>
085b913d +0x131:  mov    $0x1,%eax
085b9142 +0x136:  jmp    085b9149 <+0x13d>
085b9144 +0x138:  mov    $0x0,%eax
085b9149 +0x13d:  test   %al,%al
085b914b +0x13f:  je     085b9154 <+0x148>
085b914d +0x141:  mov    $0x0,%eax
085b9152 +0x146:  jmp    085b9167 <+0x15b>
085b9154 +0x148:  mov    -0x14(%ebp),%eax
085b9157 +0x14b:  test   %eax,%eax
085b9159 +0x14d:  jne    085b9162 <+0x156>
085b915b +0x14f:  mov    $0x0,%eax
085b9160 +0x154:  jmp    085b9167 <+0x15b>
085b9162 +0x156:  mov    $0x1,%eax
085b9167 +0x15b:  add    $0x24,%esp
085b916a +0x15e:  pop    %ebx
085b916b +0x15f:  pop    %ebp
085b916c +0x160:  ret
085b916d +0x161:  nop
```

## 反编译 C

```c
// CParty::getMemberPassParty @ 0x85b900c

/* CParty::getMemberPassParty(CUser*) */

undefined4 __thiscall CParty::getMemberPassParty(CParty *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  local_10 = 0;
  do {
    iVar3 = local_18;
    if (3 < local_10) {
      if ((local_18 == 0) ||
         (iVar5 = CUserCharacInfo::get_charac_level_before_dungeon((CUserCharacInfo *)param_1),
         6 < iVar3 - iVar5)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar6 = 0;
      }
      else if (local_18 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      return uVar6;
    }
    cVar2 = _checkValidUser(this,local_10);
    if (cVar2 == '\x01') {
      iVar3 = CUserCharacInfo::get_connect_upper_member((CUserCharacInfo *)param_1);
      iVar5 = CUser::get_charac_no(*(CUser **)(this + local_10 * 0x18 + 0x78),-1);
      if (iVar3 == iVar5) {
LAB_085b90bb:
        bVar1 = true;
      }
      else {
        iVar3 = CUser::get_charac_no(param_1,-1);
        iVar5 = CUser::get_charac_no(*(CUser **)(this + local_10 * 0x18 + 0x78),-1);
        if (iVar3 == iVar5) goto LAB_085b90bb;
        bVar1 = false;
      }
      if (!bVar1) {
        local_14 = CUserCharacInfo::get_charac_level
                             (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
        piVar4 = std::max<int>(&local_18,&local_14);
        local_18 = *piVar4;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
