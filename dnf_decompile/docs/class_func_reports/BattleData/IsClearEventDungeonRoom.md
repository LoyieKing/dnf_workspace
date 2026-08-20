# IsClearEventDungeonRoom

`_ZNK10BattleData23IsClearEventDungeonRoomEit`

`BattleData::IsClearEventDungeonRoom(int, unsigned short) const`

| 类 | 地址 |
|---|---|
| `BattleData` | `0x085be862` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be862  _ZNK10BattleData23IsClearEventDungeonRoomEit
#           BattleData::IsClearEventDungeonRoom(int, unsigned short) const
# range [0x085be862, 0x085be89f]
085be862 +0x00:  push   %ebp
085be863 +0x01:  mov    %esp,%ebp
085be865 +0x03:  push   %ebx
085be866 +0x04:  sub    $0x4,%esp
085be869 +0x07:  mov    0x10(%ebp),%eax
085be86c +0x0a:  mov    %ax,-0x8(%ebp)
085be870 +0x0e:  cmpw   $0x2,-0x8(%ebp)
085be875 +0x13:  jbe    085be87e <+0x1c>
085be877 +0x15:  mov    $0x0,%eax
085be87c +0x1a:  jmp    085be89a <+0x38>
085be87e +0x1c:  mov    0xc(%ebp),%edx
085be881 +0x1f:  movzwl -0x8(%ebp),%ebx
085be885 +0x23:  mov    0x8(%ebp),%ecx
085be888 +0x26:  mov    %edx,%eax
085be88a +0x28:  add    %eax,%eax
085be88c +0x2a:  add    %edx,%eax
085be88e +0x2c:  add    %ebx,%eax
085be890 +0x2e:  add    $0xc4,%eax
085be895 +0x33:  movzbl 0x12(%ecx,%eax,8),%eax
085be89a +0x38:  add    $0x4,%esp
085be89d +0x3b:  pop    %ebx
085be89e +0x3c:  pop    %ebp
085be89f +0x3d:  ret
```

## 反编译 C

```c
// BattleData::IsClearEventDungeonRoom @ 0x85be862

/* BattleData::IsClearEventDungeonRoom(int, unsigned short) const */

BattleData __thiscall
BattleData::IsClearEventDungeonRoom(BattleData *this,int param_1,ushort param_2)

{
  BattleData BVar1;
  
  if (param_2 < 3) {
    BVar1 = this[(param_1 * 3 + (uint)param_2 + 0xc4) * 8 + 0x12];
  }
  else {
    BVar1 = (BattleData)0x0;
  }
  return BVar1;
}
```
