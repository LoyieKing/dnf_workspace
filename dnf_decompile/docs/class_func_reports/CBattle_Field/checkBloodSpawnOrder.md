# checkBloodSpawnOrder

`_ZN13CBattle_Field20checkBloodSpawnOrderEs`

`CBattle_Field::checkBloodSpawnOrder(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306e32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306e32  _ZN13CBattle_Field20checkBloodSpawnOrderEs
#           CBattle_Field::checkBloodSpawnOrder(short)
# range [0x08306e32, 0x08306edf]
08306e32 +0x00:  push   %ebp
08306e33 +0x01:  mov    %esp,%ebp
08306e35 +0x03:  sub    $0x38,%esp
08306e38 +0x06:  mov    0xc(%ebp),%eax
08306e3b +0x09:  mov    %ax,-0x1c(%ebp)
08306e3f +0x0d:  mov    0x8(%ebp),%eax
08306e42 +0x10:  add    $0x264,%eax
08306e47 +0x15:  mov    %eax,(%esp)
08306e4a +0x18:  call   0814b622 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x13c1>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x13c1
08306e4f +0x1d:  cmp    -0x1c(%ebp),%ax
08306e53 +0x21:  setl   %al
08306e56 +0x24:  test   %al,%al
08306e58 +0x26:  je     08306e61 <+0x2f>
08306e5a +0x28:  mov    $0x0,%eax
08306e5f +0x2d:  jmp    08306edd <+0xab>
08306e61 +0x2f:  mov    0x8(%ebp),%eax
08306e64 +0x32:  add    $0x264,%eax
08306e69 +0x37:  mov    %eax,(%esp)
08306e6c +0x3a:  call   083119c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x35ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x35ab
08306e71 +0x3f:  test   %al,%al
08306e73 +0x41:  je     08306e7c <+0x4a>
08306e75 +0x43:  mov    $0x0,%eax
08306e7a +0x48:  jmp    08306edd <+0xab>
08306e7c +0x4a:  movswl -0x1c(%ebp),%eax
08306e80 +0x4e:  mov    %eax,-0x10(%ebp)
08306e83 +0x51:  movl   $0x0,-0xc(%ebp)
08306e8a +0x58:  jmp    08306ecb <+0x99>
08306e8c +0x5a:  mov    -0xc(%ebp),%edx
08306e8f +0x5d:  mov    0x8(%ebp),%eax
08306e92 +0x60:  lea    0x264(%eax),%ecx
08306e98 +0x66:  lea    -0x18(%ebp),%eax
08306e9b +0x69:  mov    %edx,0x8(%esp)
08306e9f +0x6d:  mov    %ecx,0x4(%esp)
08306ea3 +0x71:  mov    %eax,(%esp)
08306ea6 +0x74:  call   083118f6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34db>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34db
08306eab +0x79:  sub    $0x4,%esp
08306eae +0x7c:  lea    -0x18(%ebp),%eax
08306eb1 +0x7f:  mov    %eax,(%esp)
08306eb4 +0x82:  call   0814a294 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x33>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x33
08306eb9 +0x87:  xor    $0x1,%eax
08306ebc +0x8a:  test   %al,%al
08306ebe +0x8c:  je     08306ec7 <+0x95>
08306ec0 +0x8e:  mov    $0x0,%eax
08306ec5 +0x93:  jmp    08306edd <+0xab>
08306ec7 +0x95:  addl   $0x1,-0xc(%ebp)
08306ecb +0x99:  mov    -0xc(%ebp),%eax
08306ece +0x9c:  cmp    -0x10(%ebp),%eax
08306ed1 +0x9f:  setl   %al
08306ed4 +0xa2:  test   %al,%al
08306ed6 +0xa4:  jne    08306e8c <+0x5a>
08306ed8 +0xa6:  mov    $0x1,%eax
08306edd +0xab:  leave
08306ede +0xac:  ret
08306edf +0xad:  nop
```

## 反编译 C

```c
// CBattle_Field::checkBloodSpawnOrder @ 0x8306e32

/* CBattle_Field::checkBloodSpawnOrder(short) */

undefined4 __thiscall CBattle_Field::checkBloodSpawnOrder(CBattle_Field *this,short param_1)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  _Bit_reference local_1c [8];
  int local_14;
  int local_10;
  
  sVar3 = std::vector<bool,std::allocator<bool>>::size();
  if (sVar3 < param_1) {
    uVar4 = 0;
  }
  else {
    cVar1 = std::vector<bool,std::allocator<bool>>::empty();
    if (cVar1 == '\0') {
      local_14 = (int)param_1;
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        std::vector<bool,std::allocator<bool>>::operator[]((uint)local_1c);
        bVar2 = std::_Bit_reference::operator_cast_to_bool(local_1c);
        if (!bVar2) {
          return 0;
        }
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
