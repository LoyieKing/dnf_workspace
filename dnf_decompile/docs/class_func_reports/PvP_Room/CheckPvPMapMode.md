# CheckPvPMapMode

`_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb`

`PvP_Room::CheckPvPMapMode(CUser*, int, bool&)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dd936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dd936  _ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb
#           PvP_Room::CheckPvPMapMode(CUser*, int, bool&)
# range [0x085dd936, 0x085dda45]
085dd936 +0x000:  push   %ebp
085dd937 +0x001:  mov    %esp,%ebp
085dd939 +0x003:  sub    $0x28,%esp
085dd93c +0x006:  mov    0x8(%ebp),%eax
085dd93f +0x009:  mov    0x4(%eax),%eax
085dd942 +0x00c:  cmp    $0x6,%eax
085dd945 +0x00f:  jne    085dd951 <+0x1b>
085dd947 +0x011:  mov    $0x1,%eax
085dd94c +0x016:  jmp    085dda44 <+0x10e>
085dd951 +0x01b:  mov    0x14(%ebp),%eax
085dd954 +0x01e:  mov    %eax,0x4(%esp)
085dd958 +0x022:  mov    0x10(%ebp),%eax
085dd95b +0x025:  mov    %eax,(%esp)
085dd95e +0x028:  call   085d4690 <_Z15IsDeathMatchMapiRb>  ; IsDeathMatchMap(int, bool&)
085dd963 +0x02d:  mov    %al,-0x9(%ebp)
085dd966 +0x030:  cmpb   $0x0,-0x9(%ebp)
085dd96a +0x034:  je     085dd98e <+0x58>
085dd96c +0x036:  mov    0x14(%ebp),%eax
085dd96f +0x039:  movzbl (%eax),%eax
085dd972 +0x03c:  xor    $0x1,%eax
085dd975 +0x03f:  test   %al,%al
085dd977 +0x041:  je     085dd98e <+0x58>
085dd979 +0x043:  mov    0x8(%ebp),%eax
085dd97c +0x046:  mov    0x4(%eax),%eax
085dd97f +0x049:  cmp    $0x4,%eax
085dd982 +0x04c:  jne    085dd98e <+0x58>
085dd984 +0x04e:  mov    $0x1,%eax
085dd989 +0x053:  jmp    085dda44 <+0x10e>
085dd98e +0x058:  cmpb   $0x0,-0x9(%ebp)
085dd992 +0x05c:  je     085dd9a9 <+0x73>
085dd994 +0x05e:  mov    0x8(%ebp),%eax
085dd997 +0x061:  mov    0x4(%eax),%eax
085dd99a +0x064:  cmp    $0x3,%eax
085dd99d +0x067:  jne    085dd9a9 <+0x73>
085dd99f +0x069:  mov    0x8(%ebp),%eax
085dd9a2 +0x06c:  movl   $0x4,0x4(%eax)
085dd9a9 +0x073:  cmpb   $0x0,-0x9(%ebp)
085dd9ad +0x077:  je     085dd9d4 <+0x9e>
085dd9af +0x079:  mov    0x8(%ebp),%eax
085dd9b2 +0x07c:  mov    0x4(%eax),%eax
085dd9b5 +0x07f:  cmp    $0x1,%eax
085dd9b8 +0x082:  jne    085dd9d4 <+0x9e>
085dd9ba +0x084:  movl   $0x4,0x8(%esp)
085dd9c2 +0x08c:  mov    0xc(%ebp),%eax
085dd9c5 +0x08f:  mov    %eax,0x4(%esp)
085dd9c9 +0x093:  mov    0x8(%ebp),%eax
085dd9cc +0x096:  mov    %eax,(%esp)
085dd9cf +0x099:  call   085d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>  ; PvP_Room::set_pvp_mode(CUser*, int)
085dd9d4 +0x09e:  cmpb   $0x0,-0x9(%ebp)
085dd9d8 +0x0a2:  je     085dd9ef <+0xb9>
085dd9da +0x0a4:  mov    0x8(%ebp),%eax
085dd9dd +0x0a7:  mov    0x4(%eax),%eax
085dd9e0 +0x0aa:  cmp    $0x2,%eax
085dd9e3 +0x0ad:  jne    085dd9ef <+0xb9>
085dd9e5 +0x0af:  mov    0x8(%ebp),%eax
085dd9e8 +0x0b2:  movl   $0x5,0x4(%eax)
085dd9ef +0x0b9:  movzbl -0x9(%ebp),%eax
085dd9f3 +0x0bd:  xor    $0x1,%eax
085dd9f6 +0x0c0:  test   %al,%al
085dd9f8 +0x0c2:  je     085dda1f <+0xe9>
085dd9fa +0x0c4:  mov    0x8(%ebp),%eax
085dd9fd +0x0c7:  mov    0x4(%eax),%eax
085dda00 +0x0ca:  cmp    $0x4,%eax
085dda03 +0x0cd:  jne    085dda1f <+0xe9>
085dda05 +0x0cf:  movl   $0x1,0x8(%esp)
085dda0d +0x0d7:  mov    0xc(%ebp),%eax
085dda10 +0x0da:  mov    %eax,0x4(%esp)
085dda14 +0x0de:  mov    0x8(%ebp),%eax
085dda17 +0x0e1:  mov    %eax,(%esp)
085dda1a +0x0e4:  call   085d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>  ; PvP_Room::set_pvp_mode(CUser*, int)
085dda1f +0x0e9:  movzbl -0x9(%ebp),%eax
085dda23 +0x0ed:  xor    $0x1,%eax
085dda26 +0x0f0:  test   %al,%al
085dda28 +0x0f2:  je     085dda3f <+0x109>
085dda2a +0x0f4:  mov    0x8(%ebp),%eax
085dda2d +0x0f7:  mov    0x4(%eax),%eax
085dda30 +0x0fa:  cmp    $0x5,%eax
085dda33 +0x0fd:  jne    085dda3f <+0x109>
085dda35 +0x0ff:  mov    0x8(%ebp),%eax
085dda38 +0x102:  movl   $0x2,0x4(%eax)
085dda3f +0x109:  mov    $0x1,%eax
085dda44 +0x10e:  leave
085dda45 +0x10f:  ret
```

## 反编译 C

```c
// PvP_Room::CheckPvPMapMode @ 0x85dd936

/* PvP_Room::CheckPvPMapMode(CUser*, int, bool&) */

undefined4 __thiscall
PvP_Room::CheckPvPMapMode(PvP_Room *this,CUser *param_1,int param_2,bool *param_3)

{
  char cVar1;
  
  if ((*(int *)(this + 4) != 6) &&
     (((cVar1 = IsDeathMatchMap(param_2,param_3), cVar1 == '\0' || (*param_3 == true)) ||
      (*(int *)(this + 4) != 4)))) {
    if ((cVar1 != '\0') && (*(int *)(this + 4) == 3)) {
      *(undefined4 *)(this + 4) = 4;
    }
    if ((cVar1 != '\0') && (*(int *)(this + 4) == 1)) {
      set_pvp_mode(this,param_1,4);
    }
    if ((cVar1 != '\0') && (*(int *)(this + 4) == 2)) {
      *(undefined4 *)(this + 4) = 5;
    }
    if ((cVar1 != '\x01') && (*(int *)(this + 4) == 4)) {
      set_pvp_mode(this,param_1,1);
    }
    if ((cVar1 != '\x01') && (*(int *)(this + 4) == 5)) {
      *(undefined4 *)(this + 4) = 2;
    }
  }
  return 1;
}
```
