# checkskillSlotEmptyCount

`_ZN9SkillSlot24checkskillSlotEmptyCountERi`

`SkillSlot::checkskillSlotEmptyCount(int&)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086088e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086088e0  _ZN9SkillSlot24checkskillSlotEmptyCountERi
#           SkillSlot::checkskillSlotEmptyCount(int&)
# range [0x086088e0, 0x08608a1d]
086088e0 +0x000:  push   %ebp
086088e1 +0x001:  mov    %esp,%ebp
086088e3 +0x003:  sub    $0x38,%esp
086088e6 +0x006:  mov    0x8(%ebp),%eax
086088e9 +0x009:  mov    (%eax),%eax
086088eb +0x00b:  test   %eax,%eax
086088ed +0x00d:  jne    086088f9 <+0x19>
086088ef +0x00f:  mov    $0x0,%eax
086088f4 +0x014:  jmp    08608a1b <+0x13b>
086088f9 +0x019:  movl   $0x0,-0x20(%ebp)
08608900 +0x020:  mov    0x8(%ebp),%eax
08608903 +0x023:  mov    (%eax),%eax
08608905 +0x025:  mov    %eax,(%esp)
08608908 +0x028:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860890d +0x02d:  mov    %eax,-0x1c(%ebp)
08608910 +0x030:  mov    0x8(%ebp),%eax
08608913 +0x033:  mov    (%eax),%eax
08608915 +0x035:  mov    %eax,(%esp)
08608918 +0x038:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0860891d +0x03d:  mov    %eax,0x4(%esp)
08608921 +0x041:  mov    0x8(%ebp),%eax
08608924 +0x044:  mov    %eax,(%esp)
08608927 +0x047:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
0860892c +0x04c:  mov    %eax,-0x18(%ebp)
0860892f +0x04f:  cmpl   $0x0,-0x18(%ebp)
08608933 +0x053:  jne    0860893f <+0x5f>
08608935 +0x055:  mov    $0x0,%eax
0860893a +0x05a:  jmp    08608a1b <+0x13b>
0860893f +0x05f:  movl   $0x0,-0x14(%ebp)
08608946 +0x066:  movl   $0x0,-0x10(%ebp)
0860894d +0x06d:  jmp    08608966 <+0x86>
0860894f +0x06f:  mov    -0x10(%ebp),%eax
08608952 +0x072:  add    %eax,%eax
08608954 +0x074:  add    -0x18(%ebp),%eax
08608957 +0x077:  movzbl (%eax),%eax
0860895a +0x07a:  test   %al,%al
0860895c +0x07c:  jne    08608962 <+0x82>
0860895e +0x07e:  addl   $0x1,-0x14(%ebp)
08608962 +0x082:  addl   $0x1,-0x10(%ebp)
08608966 +0x086:  cmpl   $0x5,-0x10(%ebp)
0860896a +0x08a:  setle  %al
0860896d +0x08d:  test   %al,%al
0860896f +0x08f:  jne    0860894f <+0x6f>
08608971 +0x091:  cmpl   $0xf,-0x1c(%ebp)
08608975 +0x095:  jg     08608986 <+0xa6>
08608977 +0x097:  subl   $0x3,-0x14(%ebp)
0860897b +0x09b:  mov    0xc(%ebp),%eax
0860897e +0x09e:  movl   $0x1,(%eax)
08608984 +0x0a4:  jmp    086089a4 <+0xc4>
08608986 +0x0a6:  cmpl   $0x1e,-0x1c(%ebp)
0860898a +0x0aa:  jg     0860899b <+0xbb>
0860898c +0x0ac:  subl   $0x1,-0x14(%ebp)
08608990 +0x0b0:  mov    0xc(%ebp),%eax
08608993 +0x0b3:  movl   $0x2,(%eax)
08608999 +0x0b9:  jmp    086089a4 <+0xc4>
0860899b +0x0bb:  mov    0xc(%ebp),%eax
0860899e +0x0be:  movl   $0x3,(%eax)
086089a4 +0x0c4:  mov    -0x14(%ebp),%eax
086089a7 +0x0c7:  mov    %eax,-0x20(%ebp)
086089aa +0x0ca:  cmpl   $0x2d,-0x1c(%ebp)
086089ae +0x0ce:  jg     086089b5 <+0xd5>
086089b0 +0x0d0:  mov    -0x20(%ebp),%eax
086089b3 +0x0d3:  jmp    08608a1b <+0x13b>
086089b5 +0x0d5:  movl   $0x0,-0x14(%ebp)
086089bc +0x0dc:  movl   $0xc6,-0xc(%ebp)
086089c3 +0x0e3:  jmp    086089dc <+0xfc>
086089c5 +0x0e5:  mov    -0xc(%ebp),%eax
086089c8 +0x0e8:  add    %eax,%eax
086089ca +0x0ea:  add    -0x18(%ebp),%eax
086089cd +0x0ed:  movzbl (%eax),%eax
086089d0 +0x0f0:  test   %al,%al
086089d2 +0x0f2:  jne    086089d8 <+0xf8>
086089d4 +0x0f4:  addl   $0x1,-0x14(%ebp)
086089d8 +0x0f8:  addl   $0x1,-0xc(%ebp)
086089dc +0x0fc:  cmpl   $0xcb,-0xc(%ebp)
086089e3 +0x103:  setle  %al
086089e6 +0x106:  test   %al,%al
086089e8 +0x108:  jne    086089c5 <+0xe5>
086089ea +0x10a:  cmpl   $0x3c,-0x1c(%ebp)
086089ee +0x10e:  jg     086089ff <+0x11f>
086089f0 +0x110:  subl   $0x3,-0x14(%ebp)
086089f4 +0x114:  mov    0xc(%ebp),%eax
086089f7 +0x117:  movl   $0x4,(%eax)
086089fd +0x11d:  jmp    08608a0c <+0x12c>
086089ff +0x11f:  subl   $0x2,-0x14(%ebp)
08608a03 +0x123:  mov    0xc(%ebp),%eax
08608a06 +0x126:  movl   $0x5,(%eax)
08608a0c +0x12c:  cmpl   $0x0,-0x14(%ebp)
08608a10 +0x130:  jle    08608a18 <+0x138>
08608a12 +0x132:  mov    -0x14(%ebp),%eax
08608a15 +0x135:  add    %eax,-0x20(%ebp)
08608a18 +0x138:  mov    -0x20(%ebp),%eax
08608a1b +0x13b:  leave
08608a1c +0x13c:  ret
08608a1d +0x13d:  nop
```

## 反编译 C

```c
// SkillSlot::checkskillSlotEmptyCount @ 0x86088e0

/* SkillSlot::checkskillSlotEmptyCount(int&) */

int __thiscall SkillSlot::checkskillSlotEmptyCount(SkillSlot *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
    iVar4 = get_skillslot_buf(this,uVar3);
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      local_18 = 0;
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
        if (*(char *)(local_14 * 2 + iVar4) == '\0') {
          local_18 = local_18 + 1;
        }
      }
      if (iVar2 < 0x10) {
        local_18 = local_18 + -3;
        *param_1 = 1;
      }
      else if (iVar2 < 0x1f) {
        local_18 = local_18 + -1;
        *param_1 = 2;
      }
      else {
        *param_1 = 3;
      }
      iVar1 = local_18;
      if (0x2d < iVar2) {
        local_18 = 0;
        for (local_10 = 0xc6; local_10 < 0xcc; local_10 = local_10 + 1) {
          if (*(char *)(local_10 * 2 + iVar4) == '\0') {
            local_18 = local_18 + 1;
          }
        }
        if (iVar2 < 0x3d) {
          local_18 = local_18 + -3;
          *param_1 = 4;
        }
        else {
          local_18 = local_18 + -2;
          *param_1 = 5;
        }
        if (0 < local_18) {
          iVar1 = iVar1 + local_18;
        }
      }
    }
  }
  return iVar1;
}
```
