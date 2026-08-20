# GetExpectVal

`_ZN12PvpUserTable12GetExpectValEiiP5CUser`

`PvpUserTable::GetExpectVal(int, int, CUser*)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4ab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4ab8  _ZN12PvpUserTable12GetExpectValEiiP5CUser
#           PvpUserTable::GetExpectVal(int, int, CUser*)
# range [0x085d4ab8, 0x085d4bcf]
085d4ab8 +0x000:  push   %ebp
085d4ab9 +0x001:  mov    %esp,%ebp
085d4abb +0x003:  sub    $0x38,%esp
085d4abe +0x006:  mov    0xc(%ebp),%eax
085d4ac1 +0x009:  mov    %eax,-0x14(%ebp)
085d4ac4 +0x00c:  mov    0x10(%ebp),%eax
085d4ac7 +0x00f:  mov    %eax,-0x10(%ebp)
085d4aca +0x012:  mov    0xc(%ebp),%eax
085d4acd +0x015:  mov    %eax,0x4(%esp)
085d4ad1 +0x019:  mov    0x8(%ebp),%eax
085d4ad4 +0x01c:  mov    %eax,(%esp)
085d4ad7 +0x01f:  call   085d578a <_ZN12PvpUserTable11GradeFilterEi>  ; PvpUserTable::GradeFilter(int)
085d4adc +0x024:  mov    %eax,0xc(%ebp)
085d4adf +0x027:  mov    0x10(%ebp),%eax
085d4ae2 +0x02a:  mov    %eax,0x4(%esp)
085d4ae6 +0x02e:  mov    0x8(%ebp),%eax
085d4ae9 +0x031:  mov    %eax,(%esp)
085d4aec +0x034:  call   085d578a <_ZN12PvpUserTable11GradeFilterEi>  ; PvpUserTable::GradeFilter(int)
085d4af1 +0x039:  mov    %eax,0x10(%ebp)
085d4af4 +0x03c:  movb   $0x0,-0x9(%ebp)
085d4af8 +0x040:  cmpl   $0x1,0xc(%ebp)
085d4afc +0x044:  jne    085d4b04 <+0x4c>
085d4afe +0x046:  cmpl   $0x0,0x10(%ebp)
085d4b02 +0x04a:  je     085d4b10 <+0x58>
085d4b04 +0x04c:  cmpl   $0x0,0xc(%ebp)
085d4b08 +0x050:  jne    085d4b46 <+0x8e>
085d4b0a +0x052:  cmpl   $0x1,0x10(%ebp)
085d4b0e +0x056:  jne    085d4b46 <+0x8e>
085d4b10 +0x058:  cmpl   $0x0,0x14(%ebp)
085d4b14 +0x05c:  je     085d4b2d <+0x75>
085d4b16 +0x05e:  mov    0x14(%ebp),%eax
085d4b19 +0x061:  mov    %eax,(%esp)
085d4b1c +0x064:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085d4b21 +0x069:  cmp    $0x9,%eax
085d4b24 +0x06c:  jg     085d4b2d <+0x75>
085d4b26 +0x06e:  mov    $0x1,%eax
085d4b2b +0x073:  jmp    085d4b32 <+0x7a>
085d4b2d +0x075:  mov    $0x0,%eax
085d4b32 +0x07a:  test   %al,%al
085d4b34 +0x07c:  jne    085d4b46 <+0x8e>
085d4b36 +0x07e:  mov    -0x14(%ebp),%eax
085d4b39 +0x081:  mov    %eax,0xc(%ebp)
085d4b3c +0x084:  mov    -0x10(%ebp),%eax
085d4b3f +0x087:  mov    %eax,0x10(%ebp)
085d4b42 +0x08a:  movb   $0x1,-0x9(%ebp)
085d4b46 +0x08e:  mov    0xc(%ebp),%eax
085d4b49 +0x091:  mov    %eax,0x4(%esp)
085d4b4d +0x095:  mov    0x8(%ebp),%eax
085d4b50 +0x098:  mov    %eax,(%esp)
085d4b53 +0x09b:  call   085d4a32 <_ZN12PvpUserTable21IsValidConvertedGradeEi>  ; PvpUserTable::IsValidConvertedGrade(int)
085d4b58 +0x0a0:  xor    $0x1,%eax
085d4b5b +0x0a3:  test   %al,%al
085d4b5d +0x0a5:  je     085d4b65 <+0xad>
085d4b5f +0x0a7:  fld1
085d4b61 +0x0a9:  fchs
085d4b63 +0x0ab:  jmp    085d4bcd <+0x115>
085d4b65 +0x0ad:  mov    0x10(%ebp),%eax
085d4b68 +0x0b0:  mov    %eax,0x4(%esp)
085d4b6c +0x0b4:  mov    0x8(%ebp),%eax
085d4b6f +0x0b7:  mov    %eax,(%esp)
085d4b72 +0x0ba:  call   085d4a32 <_ZN12PvpUserTable21IsValidConvertedGradeEi>  ; PvpUserTable::IsValidConvertedGrade(int)
085d4b77 +0x0bf:  xor    $0x1,%eax
085d4b7a +0x0c2:  test   %al,%al
085d4b7c +0x0c4:  je     085d4b84 <+0xcc>
085d4b7e +0x0c6:  fld1
085d4b80 +0x0c8:  fchs
085d4b82 +0x0ca:  jmp    085d4bcd <+0x115>
085d4b84 +0x0cc:  mov    0xc(%ebp),%eax
085d4b87 +0x0cf:  cmp    0x10(%ebp),%eax
085d4b8a +0x0d2:  je     085d4bab <+0xf3>
085d4b8c +0x0d4:  movzbl -0x9(%ebp),%eax
085d4b90 +0x0d8:  xor    $0x1,%eax
085d4b93 +0x0db:  test   %al,%al
085d4b95 +0x0dd:  je     085d4bab <+0xf3>
085d4b97 +0x0df:  cmpl   $0x0,0xc(%ebp)
085d4b9b +0x0e3:  jne    085d4ba1 <+0xe9>
085d4b9d +0x0e5:  fldz
085d4b9f +0x0e7:  jmp    085d4bcd <+0x115>
085d4ba1 +0x0e9:  cmpl   $0x0,0x10(%ebp)
085d4ba5 +0x0ed:  jne    085d4bab <+0xf3>
085d4ba7 +0x0ef:  fld1
085d4ba9 +0x0f1:  jmp    085d4bcd <+0x115>
085d4bab +0x0f3:  mov    0x10(%ebp),%eax
085d4bae +0x0f6:  mov    0xc(%ebp),%edx
085d4bb1 +0x0f9:  mov    %edx,%ecx
085d4bb3 +0x0fb:  sub    %eax,%ecx
085d4bb5 +0x0fd:  mov    %ecx,%eax
085d4bb7 +0x0ff:  mov    %eax,-0x1c(%ebp)
085d4bba +0x102:  fildl  -0x1c(%ebp)
085d4bbd +0x105:  flds   &data#483995dd(.rodata)
085d4bc3 +0x10b:  fmulp  %st,%st(1)
085d4bc5 +0x10d:  flds   &data#24ae4901(.rodata)
085d4bcb +0x113:  faddp  %st,%st(1)
085d4bcd +0x115:  leave
085d4bce +0x116:  ret
085d4bcf +0x117:  nop
```

## 反编译 C

```c
// PvpUserTable::GetExpectVal @ 0x85d4ab8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpUserTable::GetExpectVal(int, int, CUser*) */

longdouble __thiscall
PvpUserTable::GetExpectVal(PvpUserTable *this,int param_1,int param_2,CUser *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longdouble lVar7;
  
  iVar4 = GradeFilter(this,param_1);
  iVar5 = GradeFilter(this,param_2);
  bVar2 = false;
  if (((iVar4 == 1) && (iVar5 == 0)) || ((iVar4 == 0 && (iVar5 == 1)))) {
    if ((param_3 == (CUser *)0x0) ||
       (iVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_3), 9 < iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar2 = true;
      iVar4 = param_1;
      iVar5 = param_2;
    }
  }
  param_2 = iVar5;
  param_1 = iVar4;
  cVar3 = IsValidConvertedGrade(this,param_1);
  if (cVar3 == '\x01') {
    cVar3 = IsValidConvertedGrade(this,param_2);
    if (cVar3 == '\x01') {
      if ((param_1 != param_2) && (!bVar2)) {
        if (param_1 == 0) {
          return (longdouble)0;
        }
        if (param_2 == 0) {
          return (longdouble)1;
        }
      }
      lVar7 = (longdouble)_DAT_08cc27d4 +
              (longdouble)_DAT_08cc27d0 * (longdouble)(param_1 - param_2);
    }
    else {
      lVar7 = -(longdouble)1;
    }
  }
  else {
    lVar7 = -(longdouble)1;
  }
  return lVar7;
}
```
