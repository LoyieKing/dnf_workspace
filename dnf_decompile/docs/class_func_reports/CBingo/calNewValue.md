# calNewValue

`_ZN6CBingo11calNewValueERji`

`CBingo::calNewValue(unsigned int&, int)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080cad4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cad4c  _ZN6CBingo11calNewValueERji
#           CBingo::calNewValue(unsigned int&, int)
# range [0x080cad4c, 0x080cadd3]
080cad4c +0x00:  push   %ebp
080cad4d +0x01:  mov    %esp,%ebp
080cad4f +0x03:  sub    $0x28,%esp
080cad52 +0x06:  mov    0x10(%ebp),%eax
080cad55 +0x09:  mov    %eax,0x4(%esp)
080cad59 +0x0d:  mov    0x8(%ebp),%eax
080cad5c +0x10:  mov    %eax,(%esp)
080cad5f +0x13:  call   080caafa <_ZN6CBingo18getIndexTodayBoardEi>  ; CBingo::getIndexTodayBoard(int)
080cad64 +0x18:  mov    %eax,-0xc(%ebp)
080cad67 +0x1b:  cmpl   $0xffffffff,-0xc(%ebp)
080cad6b +0x1f:  jne    080cad74 <+0x28>
080cad6d +0x21:  mov    $0x0,%eax
080cad72 +0x26:  jmp    080cadd1 <+0x85>
080cad74 +0x28:  cmpl   $0x18,-0xc(%ebp)
080cad78 +0x2c:  jle    080cad81 <+0x35>
080cad7a +0x2e:  mov    $0xffffffff,%eax
080cad7f +0x33:  jmp    080cadd1 <+0x85>
080cad81 +0x35:  mov    0xc(%ebp),%eax
080cad84 +0x38:  mov    (%eax),%eax
080cad86 +0x3a:  mov    -0xc(%ebp),%edx
080cad89 +0x3d:  mov    %edx,0x4(%esp)
080cad8d +0x41:  mov    %eax,(%esp)
080cad90 +0x44:  call   0889232e <_Z13isSetBit_Uintji>  ; isSetBit_Uint(unsigned int, int)
080cad95 +0x49:  xor    $0x1,%eax
080cad98 +0x4c:  test   %al,%al
080cad9a +0x4e:  je     080cadcc <+0x80>
080cad9c +0x50:  mov    -0xc(%ebp),%eax
080cad9f +0x53:  mov    %eax,0x8(%esp)
080cada3 +0x57:  movl   $0x1,0x4(%esp)
080cadab +0x5f:  mov    0xc(%ebp),%eax
080cadae +0x62:  mov    %eax,(%esp)
080cadb1 +0x65:  call   088922d7 <_Z11setBit_UintRjbi>  ; setBit_Uint(unsigned int&, bool, int)
080cadb6 +0x6a:  mov    0xc(%ebp),%eax
080cadb9 +0x6d:  mov    (%eax),%eax
080cadbb +0x6f:  mov    %eax,0x4(%esp)
080cadbf +0x73:  mov    0x8(%ebp),%eax
080cadc2 +0x76:  mov    %eax,(%esp)
080cadc5 +0x79:  call   080cab5a <_ZN6CBingo17calBoradMatchLineEi>  ; CBingo::calBoradMatchLine(int)
080cadca +0x7e:  jmp    080cadd1 <+0x85>
080cadcc +0x80:  mov    $0x0,%eax
080cadd1 +0x85:  leave
080cadd2 +0x86:  ret
080cadd3 +0x87:  nop
```

## 反编译 C

```c
// CBingo::calNewValue @ 0x80cad4c

/* CBingo::calNewValue(unsigned int&, int) */

undefined4 __thiscall CBingo::calNewValue(CBingo *this,uint *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = getIndexTodayBoard(this,param_2);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else if (iVar2 < 0x19) {
    cVar1 = isSetBit_Uint(*param_1,iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 0;
    }
    else {
      setBit_Uint(param_1,true,iVar2);
      uVar3 = calBoradMatchLine(this,*param_1);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
