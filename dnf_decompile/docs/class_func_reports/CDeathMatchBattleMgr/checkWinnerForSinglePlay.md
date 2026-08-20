# checkWinnerForSinglePlay

`_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable`

`CDeathMatchBattleMgr::checkWinnerForSinglePlay(CUser**, bool*, PvpUserTable&)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085df48a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085df48a  _ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable
#           CDeathMatchBattleMgr::checkWinnerForSinglePlay(CUser**, bool*, PvpUserTable&)
# range [0x085df48a, 0x085df523]
085df48a +0x00:  push   %ebp
085df48b +0x01:  mov    %esp,%ebp
085df48d +0x03:  sub    $0x28,%esp
085df490 +0x06:  movl   $0x0,-0xc(%ebp)
085df497 +0x0d:  jmp    085df4c3 <+0x39>
085df499 +0x0f:  mov    -0xc(%ebp),%eax
085df49c +0x12:  shl    $0x2,%eax
085df49f +0x15:  add    0xc(%ebp),%eax
085df4a2 +0x18:  mov    (%eax),%eax
085df4a4 +0x1a:  test   %eax,%eax
085df4a6 +0x1c:  jne    085df4b6 <+0x2c>
085df4a8 +0x1e:  mov    -0xc(%ebp),%edx
085df4ab +0x21:  mov    0x8(%ebp),%eax
085df4ae +0x24:  movl   $0x0,0x4(%eax,%edx,4)
085df4b6 +0x2c:  mov    -0xc(%ebp),%eax
085df4b9 +0x2f:  add    0x10(%ebp),%eax
085df4bc +0x32:  movb   $0x0,(%eax)
085df4bf +0x35:  addl   $0x1,-0xc(%ebp)
085df4c3 +0x39:  cmpl   $0x7,-0xc(%ebp)
085df4c7 +0x3d:  setle  %al
085df4ca +0x40:  test   %al,%al
085df4cc +0x42:  jne    085df499 <+0xf>
085df4ce +0x44:  mov    0x8(%ebp),%eax
085df4d1 +0x47:  add    $0x4,%eax
085df4d4 +0x4a:  lea    0x20(%eax),%edx
085df4d7 +0x4d:  mov    0x8(%ebp),%eax
085df4da +0x50:  add    $0x4,%eax
085df4dd +0x53:  mov    %edx,0x4(%esp)
085df4e1 +0x57:  mov    %eax,(%esp)
085df4e4 +0x5a:  call   085e01da <_GLOBAL__I__Z15IsDeathMatchMapiRb+0xa61>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0xa61
085df4e9 +0x5f:  mov    %eax,-0x14(%ebp)
085df4ec +0x62:  mov    -0x14(%ebp),%edx
085df4ef +0x65:  mov    0x8(%ebp),%eax
085df4f2 +0x68:  add    $0x4,%eax
085df4f5 +0x6b:  mov    %edx,%ecx
085df4f7 +0x6d:  sub    %eax,%ecx
085df4f9 +0x6f:  mov    %ecx,%eax
085df4fb +0x71:  shr    $0x2,%eax
085df4fe +0x74:  mov    %eax,-0x10(%ebp)
085df501 +0x77:  cmpl   $0x7,-0x10(%ebp)
085df505 +0x7b:  jg     085df510 <+0x86>
085df507 +0x7d:  mov    -0x10(%ebp),%eax
085df50a +0x80:  add    0x10(%ebp),%eax
085df50d +0x83:  movb   $0x1,(%eax)
085df510 +0x86:  mov    -0x10(%ebp),%eax
085df513 +0x89:  mov    %eax,0x4(%esp)
085df517 +0x8d:  mov    0x14(%ebp),%eax
085df51a +0x90:  mov    %eax,(%esp)
085df51d +0x93:  call   085d585e <_ZN12PvpUserTable10SetWinTeamEi>  ; PvpUserTable::SetWinTeam(int)
085df522 +0x98:  leave
085df523 +0x99:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::checkWinnerForSinglePlay @ 0x85df48a

/* CDeathMatchBattleMgr::checkWinnerForSinglePlay(CUser**, bool*, PvpUserTable&) */

void __thiscall
CDeathMatchBattleMgr::checkWinnerForSinglePlay
          (CDeathMatchBattleMgr *this,CUser **param_1,bool *param_2,PvpUserTable *param_3)

{
  int *piVar1;
  uint uVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (param_1[local_10] == (CUser *)0x0) {
      *(undefined4 *)(this + local_10 * 4 + 4) = 0;
    }
    param_2[local_10] = false;
  }
  piVar1 = std::max_element<int*>((int *)(this + 4),(int *)(this + 0x24));
  uVar2 = (uint)((int)piVar1 - (int)(this + 4)) >> 2;
  if (uVar2 < 8) {
    param_2[uVar2] = true;
  }
  PvpUserTable::SetWinTeam(param_3,uVar2);
  return;
}
```
