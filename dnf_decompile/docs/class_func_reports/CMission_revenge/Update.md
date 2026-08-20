# Update

`_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_revenge::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_revenge` | `0x085e3a60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3a60  _ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_revenge::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3a60, 0x085e3b1b]
085e3a60 +0x00:  push   %ebp
085e3a61 +0x01:  mov    %esp,%ebp
085e3a63 +0x03:  push   %ebx
085e3a64 +0x04:  sub    $0x24,%esp
085e3a67 +0x07:  mov    0xc(%ebp),%eax
085e3a6a +0x0a:  movzwl 0x6(%eax),%eax
085e3a6e +0x0e:  cwtl
085e3a6f +0x0f:  cmp    $0x1,%eax
085e3a72 +0x12:  je     085e3a9e <+0x3e>
085e3a74 +0x14:  cmp    $0x2,%eax
085e3a77 +0x17:  je     085e3aae <+0x4e>
085e3a79 +0x19:  test   %eax,%eax
085e3a7b +0x1b:  jne    085e3ae2 <+0x82>
085e3a7d +0x1d:  mov    0x10(%ebp),%eax
085e3a80 +0x20:  movzwl 0x1(%eax),%eax
085e3a84 +0x24:  movzwl %ax,%eax
085e3a87 +0x27:  and    $0x1,%eax
085e3a8a +0x2a:  test   %eax,%eax
085e3a8c +0x2c:  jne    085e3a97 <+0x37>
085e3a8e +0x2e:  mov    0xc(%ebp),%eax
085e3a91 +0x31:  movw   $0x1,0x6(%eax)
085e3a97 +0x37:  mov    $0x0,%eax
085e3a9c +0x3c:  jmp    085e3b16 <+0xb6>
085e3a9e +0x3e:  mov    0xc(%ebp),%eax
085e3aa1 +0x41:  movw   $0x2,0x6(%eax)
085e3aa7 +0x47:  mov    $0x0,%eax
085e3aac +0x4c:  jmp    085e3b16 <+0xb6>
085e3aae +0x4e:  mov    0x10(%ebp),%eax
085e3ab1 +0x51:  movzwl 0x1(%eax),%eax
085e3ab5 +0x55:  movzwl %ax,%eax
085e3ab8 +0x58:  and    $0x1,%eax
085e3abb +0x5b:  test   %al,%al
085e3abd +0x5d:  je     085e3b10 <+0xb0>
085e3abf +0x5f:  mov    0xc(%ebp),%eax
085e3ac2 +0x62:  movw   $0x0,0x6(%eax)
085e3ac8 +0x68:  mov    0xc(%ebp),%eax
085e3acb +0x6b:  movzwl 0x4(%eax),%eax
085e3acf +0x6f:  add    $0x1,%eax
085e3ad2 +0x72:  mov    %eax,%edx
085e3ad4 +0x74:  mov    0xc(%ebp),%eax
085e3ad7 +0x77:  mov    %dx,0x4(%eax)
085e3adb +0x7b:  mov    $0x1,%eax
085e3ae0 +0x80:  jmp    085e3b16 <+0xb6>
085e3ae2 +0x82:  mov    0xc(%ebp),%eax
085e3ae5 +0x85:  movzwl 0x6(%eax),%eax
085e3ae9 +0x89:  movswl %ax,%ebx
085e3aec +0x8c:  lea    -0x9(%ebp),%eax
085e3aef +0x8f:  mov    %eax,(%esp)
085e3af2 +0x92:  call   0822ad5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x404>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x404
085e3af7 +0x97:  mov    %ebx,0x8(%esp)
085e3afb +0x9b:  movl   $"[@missionSystem] : revenge ??? : %d",0x4(%esp)
085e3b03 +0xa3:  lea    -0x9(%ebp),%eax
085e3b06 +0xa6:  mov    %eax,(%esp)
085e3b09 +0xa9:  call   0822ad60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40a
085e3b0e +0xae:  jmp    085e3b11 <+0xb1>
085e3b10 +0xb0:  nop
085e3b11 +0xb1:  mov    $0x0,%eax
085e3b16 +0xb6:  add    $0x24,%esp
085e3b19 +0xb9:  pop    %ebx
085e3b1a +0xba:  pop    %ebp
085e3b1b +0xbb:  ret
```

## 反编译 C

```c
// CMission_revenge::Update @ 0x85e3a60

/* CMission_revenge::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_revenge::Update
          (CMission_revenge *this,MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  short sVar1;
  cMyTraceNoop local_d [5];
  
  sVar1 = *(short *)(param_1 + 6);
  if (sVar1 == 1) {
    *(undefined2 *)(param_1 + 6) = 2;
  }
  else if (sVar1 == 2) {
    if ((*(ushort *)(param_2 + 1) & 1) != 0) {
      *(undefined2 *)(param_1 + 6) = 0;
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
      return 1;
    }
  }
  else {
    if (sVar1 == 0) {
      if ((*(ushort *)(param_2 + 1) & 1) == 0) {
        *(undefined2 *)(param_1 + 6) = 1;
      }
      return 0;
    }
    sVar1 = *(short *)(param_1 + 6);
    cMyTraceNoop::cMyTraceNoop(local_d);
    cMyTraceNoop::operator()((char *)local_d,"[@missionSystem] : revenge ??? : %d",(int)sVar1);
  }
  return 0;
}
```
