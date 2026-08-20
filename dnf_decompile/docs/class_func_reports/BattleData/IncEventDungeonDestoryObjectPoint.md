# IncEventDungeonDestoryObjectPoint

`_ZN10BattleData33IncEventDungeonDestoryObjectPointEiRKN15CMDPacketStruct31_STReqEventDungeonDestoryObjectE`

`BattleData::IncEventDungeonDestoryObjectPoint(int, CMDPacketStruct::_STReqEventDungeonDestoryObject const&)`

| 类 | 地址 |
|---|---|
| `BattleData` | `0x085be6e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be6e2  _ZN10BattleData33IncEventDungeonDestoryObjectPointEiRKN15CMDPacketStruct31_STReqEventDungeonDestoryObjectE
#           BattleData::IncEventDungeonDestoryObjectPoint(int, CMDPacketStruct::_STReqEventDungeonDestoryObject const&)
# range [0x085be6e2, 0x085be7a9]
085be6e2 +0x00:  push   %ebp
085be6e3 +0x01:  mov    %esp,%ebp
085be6e5 +0x03:  push   %edi
085be6e6 +0x04:  push   %esi
085be6e7 +0x05:  push   %ebx
085be6e8 +0x06:  mov    0x10(%ebp),%eax
085be6eb +0x09:  movzwl 0xe(%eax),%eax
085be6ef +0x0d:  cmp    $0x2,%ax
085be6f3 +0x11:  ja     085be7a4 <+0xc2>
085be6f9 +0x17:  mov    0x10(%ebp),%eax
085be6fc +0x1a:  mov    0x10(%eax),%eax
085be6ff +0x1d:  cmp    $0x1,%eax
085be702 +0x20:  je     085be754 <+0x72>
085be704 +0x22:  mov    0xc(%ebp),%edx
085be707 +0x25:  mov    0x10(%ebp),%eax
085be70a +0x28:  movzwl 0xe(%eax),%eax
085be70e +0x2c:  movzwl %ax,%esi
085be711 +0x2f:  mov    0xc(%ebp),%ecx
085be714 +0x32:  mov    0x10(%ebp),%eax
085be717 +0x35:  movzwl 0xe(%eax),%eax
085be71b +0x39:  movzwl %ax,%edi
085be71e +0x3c:  mov    0x8(%ebp),%ebx
085be721 +0x3f:  mov    %ecx,%eax
085be723 +0x41:  add    %eax,%eax
085be725 +0x43:  add    %ecx,%eax
085be727 +0x45:  add    %edi,%eax
085be729 +0x47:  add    $0xc4,%eax
085be72e +0x4c:  movzwl 0xe(%ebx,%eax,8),%ecx
085be733 +0x51:  mov    0x10(%ebp),%eax
085be736 +0x54:  movzwl 0x14(%eax),%eax
085be73a +0x58:  lea    (%ecx,%eax,1),%ebx
085be73d +0x5b:  mov    0x8(%ebp),%ecx
085be740 +0x5e:  mov    %edx,%eax
085be742 +0x60:  add    %eax,%eax
085be744 +0x62:  add    %edx,%eax
085be746 +0x64:  add    %esi,%eax
085be748 +0x66:  add    $0xc4,%eax
085be74d +0x6b:  mov    %bx,0xe(%ecx,%eax,8)
085be752 +0x70:  jmp    085be7a5 <+0xc3>
085be754 +0x72:  mov    0xc(%ebp),%edx
085be757 +0x75:  mov    0x10(%ebp),%eax
085be75a +0x78:  movzwl 0xe(%eax),%eax
085be75e +0x7c:  movzwl %ax,%esi
085be761 +0x7f:  mov    0xc(%ebp),%ecx
085be764 +0x82:  mov    0x10(%ebp),%eax
085be767 +0x85:  movzwl 0xe(%eax),%eax
085be76b +0x89:  movzwl %ax,%edi
085be76e +0x8c:  mov    0x8(%ebp),%ebx
085be771 +0x8f:  mov    %ecx,%eax
085be773 +0x91:  add    %eax,%eax
085be775 +0x93:  add    %ecx,%eax
085be777 +0x95:  add    %edi,%eax
085be779 +0x97:  add    $0xc4,%eax
085be77e +0x9c:  movzwl 0x10(%ebx,%eax,8),%ecx
085be783 +0xa1:  mov    0x10(%ebp),%eax
085be786 +0xa4:  movzwl 0x14(%eax),%eax
085be78a +0xa8:  lea    (%ecx,%eax,1),%ebx
085be78d +0xab:  mov    0x8(%ebp),%ecx
085be790 +0xae:  mov    %edx,%eax
085be792 +0xb0:  add    %eax,%eax
085be794 +0xb2:  add    %edx,%eax
085be796 +0xb4:  add    %esi,%eax
085be798 +0xb6:  add    $0xc4,%eax
085be79d +0xbb:  mov    %bx,0x10(%ecx,%eax,8)
085be7a2 +0xc0:  jmp    085be7a5 <+0xc3>
085be7a4 +0xc2:  nop
085be7a5 +0xc3:  pop    %ebx
085be7a6 +0xc4:  pop    %esi
085be7a7 +0xc5:  pop    %edi
085be7a8 +0xc6:  pop    %ebp
085be7a9 +0xc7:  ret
```

## 反编译 C

```c
// BattleData::IncEventDungeonDestoryObjectPoint @ 0x85be6e2

/* BattleData::IncEventDungeonDestoryObjectPoint(int,
   CMDPacketStruct::_STReqEventDungeonDestoryObject const&) */

void __thiscall
BattleData::IncEventDungeonDestoryObjectPoint
          (BattleData *this,int param_1,_STReqEventDungeonDestoryObject *param_2)

{
  if (*(ushort *)(param_2 + 0xe) < 3) {
    if (*(int *)(param_2 + 0x10) == 1) {
      *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0x10) =
           *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0x10) +
           *(short *)(param_2 + 0x14);
    }
    else {
      *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0xe) =
           *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0xe) +
           *(short *)(param_2 + 0x14);
    }
  }
  return;
}
```
