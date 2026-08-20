# SetPVPResult

`_ZN8PvP_Room12SetPVPResultEiRK13PvpResultType`

`PvP_Room::SetPVPResult(int, PvpResultType const&)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc034` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc034  _ZN8PvP_Room12SetPVPResultEiRK13PvpResultType
#           PvP_Room::SetPVPResult(int, PvpResultType const&)
# range [0x085dc034, 0x085dc07d]
085dc034 +0x00:  push   %ebp
085dc035 +0x01:  mov    %esp,%ebp
085dc037 +0x03:  push   %ebx
085dc038 +0x04:  sub    $0x4,%esp
085dc03b +0x07:  cmpl   $0x0,0xc(%ebp)
085dc03f +0x0b:  js     085dc074 <+0x40>
085dc041 +0x0d:  cmpl   $0x7,0xc(%ebp)
085dc045 +0x11:  jg     085dc077 <+0x43>
085dc047 +0x13:  mov    0xc(%ebp),%ebx
085dc04a +0x16:  mov    0x10(%ebp),%eax
085dc04d +0x19:  mov    %eax,(%esp)
085dc050 +0x1c:  call   085d5efe <_ZNK13PvpResultType13GetTotalScoreEv>  ; PvpResultType::GetTotalScore() const
085dc055 +0x21:  mov    0x8(%ebp),%edx
085dc058 +0x24:  lea    0x1c(%ebx),%ecx
085dc05b +0x27:  mov    %eax,0x8(%edx,%ecx,4)
085dc05f +0x2b:  mov    0xc(%ebp),%ecx
085dc062 +0x2e:  mov    0x10(%ebp),%eax
085dc065 +0x31:  mov    0x18(%eax),%edx
085dc068 +0x34:  mov    0x8(%ebp),%eax
085dc06b +0x37:  add    $0x24,%ecx
085dc06e +0x3a:  mov    %edx,0x8(%eax,%ecx,4)
085dc072 +0x3e:  jmp    085dc078 <+0x44>
085dc074 +0x40:  nop
085dc075 +0x41:  jmp    085dc078 <+0x44>
085dc077 +0x43:  nop
085dc078 +0x44:  add    $0x4,%esp
085dc07b +0x47:  pop    %ebx
085dc07c +0x48:  pop    %ebp
085dc07d +0x49:  ret
```

## 反编译 C

```c
// PvP_Room::SetPVPResult @ 0x85dc034

/* PvP_Room::SetPVPResult(int, PvpResultType const&) */

void __thiscall PvP_Room::SetPVPResult(PvP_Room *this,int param_1,PvpResultType *param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar1 = PvpResultType::GetTotalScore(param_2);
    *(undefined4 *)(this + (param_1 + 0x1c) * 4 + 8) = uVar1;
    *(undefined4 *)(this + (param_1 + 0x24) * 4 + 8) = *(undefined4 *)(param_2 + 0x18);
  }
  return;
}
```
