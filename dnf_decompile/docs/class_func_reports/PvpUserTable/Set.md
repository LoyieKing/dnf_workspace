# Set

`_ZN12PvpUserTable3SetEiP5CUser`

`PvpUserTable::Set(int, CUser*)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4980  _ZN12PvpUserTable3SetEiP5CUser
#           PvpUserTable::Set(int, CUser*)
# range [0x085d4980, 0x085d4a13]
085d4980 +0x00:  push   %ebp
085d4981 +0x01:  mov    %esp,%ebp
085d4983 +0x03:  push   %ebx
085d4984 +0x04:  sub    $0x24,%esp
085d4987 +0x07:  mov    0xc(%ebp),%eax
085d498a +0x0a:  mov    %eax,0x4(%esp)
085d498e +0x0e:  mov    0x8(%ebp),%eax
085d4991 +0x11:  mov    %eax,(%esp)
085d4994 +0x14:  call   085d4a14 <_ZN12PvpUserTable11IsValidTeamEi>  ; PvpUserTable::IsValidTeam(int)
085d4999 +0x19:  xor    $0x1,%eax
085d499c +0x1c:  test   %al,%al
085d499e +0x1e:  jne    085d49a6 <+0x26>
085d49a0 +0x20:  cmpl   $0x0,0x10(%ebp)
085d49a4 +0x24:  jne    085d49ad <+0x2d>
085d49a6 +0x26:  mov    $0x1,%eax
085d49ab +0x2b:  jmp    085d49b2 <+0x32>
085d49ad +0x2d:  mov    $0x0,%eax
085d49b2 +0x32:  test   %al,%al
085d49b4 +0x34:  je     085d49bd <+0x3d>
085d49b6 +0x36:  mov    $0x0,%eax
085d49bb +0x3b:  jmp    085d4a0d <+0x8d>
085d49bd +0x3d:  mov    0xc(%ebp),%eax
085d49c0 +0x40:  mov    %eax,0x4(%esp)
085d49c4 +0x44:  mov    0x8(%ebp),%eax
085d49c7 +0x47:  mov    %eax,(%esp)
085d49ca +0x4a:  call   085d4a50 <_ZN12PvpUserTable16GetTeamUserCountEi>  ; PvpUserTable::GetTeamUserCount(int)
085d49cf +0x4f:  mov    %eax,-0xc(%ebp)
085d49d2 +0x52:  cmpl   $0x7,-0xc(%ebp)
085d49d6 +0x56:  jle    085d49df <+0x5f>
085d49d8 +0x58:  mov    $0x0,%eax
085d49dd +0x5d:  jmp    085d4a0d <+0x8d>
085d49df +0x5f:  mov    0x10(%ebp),%eax
085d49e2 +0x62:  mov    %eax,-0x14(%ebp)
085d49e5 +0x65:  movb   $0x0,-0x10(%ebp)
085d49e9 +0x69:  mov    0xc(%ebp),%edx
085d49ec +0x6c:  mov    -0xc(%ebp),%eax
085d49ef +0x6f:  mov    0x8(%ebp),%ecx
085d49f2 +0x72:  shl    $0x3,%edx
085d49f5 +0x75:  lea    (%edx,%eax,1),%eax
085d49f8 +0x78:  lea    0x24(%eax),%ebx
085d49fb +0x7b:  mov    -0x14(%ebp),%eax
085d49fe +0x7e:  mov    -0x10(%ebp),%edx
085d4a01 +0x81:  mov    %eax,(%ecx,%ebx,8)
085d4a04 +0x84:  mov    %edx,0x4(%ecx,%ebx,8)
085d4a08 +0x88:  mov    $0x1,%eax
085d4a0d +0x8d:  add    $0x24,%esp
085d4a10 +0x90:  pop    %ebx
085d4a11 +0x91:  pop    %ebp
085d4a12 +0x92:  ret
085d4a13 +0x93:  nop
```

## 反编译 C

```c
// PvpUserTable::Set @ 0x85d4980

/* PvpUserTable::Set(int, CUser*) */

undefined4 __thiscall PvpUserTable::Set(PvpUserTable *this,int param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_14;
  
  cVar2 = IsValidTeam(this,param_1);
  if ((cVar2 == '\x01') && (param_2 != (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = GetTeamUserCount(this,param_1);
    if (iVar4 < 8) {
      local_14 = local_14 & 0xffffff00;
      iVar4 = param_1 * 8 + iVar4 + 0x24;
      *(CUser **)(this + iVar4 * 8) = param_2;
      *(uint *)(this + iVar4 * 8 + 4) = local_14;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
