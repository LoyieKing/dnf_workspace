# ClearEventDungeonRoom

`_ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE`

`BattleData::ClearEventDungeonRoom(int, int, CMDPacketStruct::_STReqEventDungeonClearRoom const&)`

| 类 | 地址 |
|---|---|
| `BattleData` | `0x085be7aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be7aa  _ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE
#           BattleData::ClearEventDungeonRoom(int, int, CMDPacketStruct::_STReqEventDungeonClearRoom const&)
# range [0x085be7aa, 0x085be861]
085be7aa +0x00:  push   %ebp
085be7ab +0x01:  mov    %esp,%ebp
085be7ad +0x03:  push   %ebx
085be7ae +0x04:  mov    0x14(%ebp),%eax
085be7b1 +0x07:  movzwl 0xe(%eax),%eax
085be7b5 +0x0b:  cmp    $0x2,%ax
085be7b9 +0x0f:  jbe    085be7c5 <+0x1b>
085be7bb +0x11:  mov    $0x0,%eax
085be7c0 +0x16:  jmp    085be85e <+0xb4>
085be7c5 +0x1b:  mov    0xc(%ebp),%edx
085be7c8 +0x1e:  mov    0x14(%ebp),%eax
085be7cb +0x21:  movzwl 0xe(%eax),%eax
085be7cf +0x25:  movzwl %ax,%ebx
085be7d2 +0x28:  mov    0x8(%ebp),%ecx
085be7d5 +0x2b:  mov    %edx,%eax
085be7d7 +0x2d:  add    %eax,%eax
085be7d9 +0x2f:  add    %edx,%eax
085be7db +0x31:  add    %ebx,%eax
085be7dd +0x33:  add    $0xc4,%eax
085be7e2 +0x38:  movzwl 0x10(%ecx,%eax,8),%edx
085be7e7 +0x3d:  mov    0x14(%ebp),%eax
085be7ea +0x40:  movzwl 0x10(%eax),%eax
085be7ee +0x44:  cmp    %ax,%dx
085be7f1 +0x47:  jne    085be859 <+0xaf>
085be7f3 +0x49:  mov    0xc(%ebp),%edx
085be7f6 +0x4c:  mov    0x14(%ebp),%eax
085be7f9 +0x4f:  movzwl 0xe(%eax),%eax
085be7fd +0x53:  movzwl %ax,%ebx
085be800 +0x56:  mov    0x8(%ebp),%ecx
085be803 +0x59:  mov    %edx,%eax
085be805 +0x5b:  add    %eax,%eax
085be807 +0x5d:  add    %edx,%eax
085be809 +0x5f:  add    %ebx,%eax
085be80b +0x61:  add    $0xc4,%eax
085be810 +0x66:  movzwl 0xe(%ecx,%eax,8),%edx
085be815 +0x6b:  mov    0x14(%ebp),%eax
085be818 +0x6e:  movzwl 0x12(%eax),%eax
085be81c +0x72:  cmp    %ax,%dx
085be81f +0x75:  jne    085be859 <+0xaf>
085be821 +0x77:  mov    0x14(%ebp),%eax
085be824 +0x7a:  movzwl 0x10(%eax),%eax
085be828 +0x7e:  movzwl %ax,%eax
085be82b +0x81:  cmp    0x10(%ebp),%eax
085be82e +0x84:  jl     085be859 <+0xaf>
085be830 +0x86:  mov    0xc(%ebp),%edx
085be833 +0x89:  mov    0x14(%ebp),%eax
085be836 +0x8c:  movzwl 0xe(%eax),%eax
085be83a +0x90:  movzwl %ax,%ebx
085be83d +0x93:  mov    0x8(%ebp),%ecx
085be840 +0x96:  mov    %edx,%eax
085be842 +0x98:  add    %eax,%eax
085be844 +0x9a:  add    %edx,%eax
085be846 +0x9c:  add    %ebx,%eax
085be848 +0x9e:  add    $0xc4,%eax
085be84d +0xa3:  movb   $0x1,0x12(%ecx,%eax,8)
085be852 +0xa8:  mov    $0x1,%eax
085be857 +0xad:  jmp    085be85e <+0xb4>
085be859 +0xaf:  mov    $0x0,%eax
085be85e +0xb4:  pop    %ebx
085be85f +0xb5:  pop    %ebp
085be860 +0xb6:  ret
085be861 +0xb7:  nop
```

## 反编译 C

```c
// BattleData::ClearEventDungeonRoom @ 0x85be7aa

/* BattleData::ClearEventDungeonRoom(int, int, CMDPacketStruct::_STReqEventDungeonClearRoom const&)
    */

undefined4 __thiscall
BattleData::ClearEventDungeonRoom
          (BattleData *this,int param_1,int param_2,_STReqEventDungeonClearRoom *param_3)

{
  undefined4 uVar1;
  
  if (*(ushort *)(param_3 + 0xe) < 3) {
    if (((*(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_3 + 0xe) + 0xc4) * 8 + 0x10) ==
          *(short *)(param_3 + 0x10)) &&
        (*(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_3 + 0xe) + 0xc4) * 8 + 0xe) ==
         *(short *)(param_3 + 0x12))) && (param_2 <= (int)(uint)*(ushort *)(param_3 + 0x10))) {
      this[(param_1 * 3 + (uint)*(ushort *)(param_3 + 0xe) + 0xc4) * 8 + 0x12] = (BattleData)0x1;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
