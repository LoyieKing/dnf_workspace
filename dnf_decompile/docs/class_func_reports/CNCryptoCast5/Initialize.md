# Initialize

`_ZN13CNCryptoCast510InitializeEPKhi`

`CNCryptoCast5::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a060  _ZN13CNCryptoCast510InitializeEPKhi
#           CNCryptoCast5::Initialize(unsigned char const*, int)
# range [0x0809a060, 0x0809a107]
0809a060 +0x00:  push   %ebp
0809a061 +0x01:  mov    %esp,%ebp
0809a063 +0x03:  sub    $0x28,%esp
0809a066 +0x06:  mov    0x8(%ebp),%eax
0809a069 +0x09:  mov    0x8(%eax),%eax
0809a06c +0x0c:  test   %eax,%eax
0809a06e +0x0e:  jne    0809a07a <+0x1a>
0809a070 +0x10:  mov    $0x7000000c,%eax
0809a075 +0x15:  jmp    0809a105 <+0xa5>
0809a07a +0x1a:  mov    0x8(%ebp),%eax
0809a07d +0x1d:  mov    (%eax),%eax
0809a07f +0x1f:  add    $0x20,%eax
0809a082 +0x22:  mov    (%eax),%edx
0809a084 +0x24:  mov    0x8(%ebp),%eax
0809a087 +0x27:  mov    %eax,(%esp)
0809a08a +0x2a:  call   *%edx
0809a08c +0x2c:  cmp    0x10(%ebp),%eax
0809a08f +0x2f:  setg   %al
0809a092 +0x32:  test   %al,%al
0809a094 +0x34:  je     0809a09d <+0x3d>
0809a096 +0x36:  mov    $0x7000000a,%eax
0809a09b +0x3b:  jmp    0809a105 <+0xa5>
0809a09d +0x3d:  mov    0x8(%ebp),%eax
0809a0a0 +0x40:  mov    0x8(%eax),%eax
0809a0a3 +0x43:  mov    %eax,-0x10(%ebp)
0809a0a6 +0x46:  mov    0x8(%ebp),%eax
0809a0a9 +0x49:  mov    (%eax),%eax
0809a0ab +0x4b:  add    $0x20,%eax
0809a0ae +0x4e:  mov    (%eax),%edx
0809a0b0 +0x50:  mov    0x8(%ebp),%eax
0809a0b3 +0x53:  mov    %eax,(%esp)
0809a0b6 +0x56:  call   *%edx
0809a0b8 +0x58:  mov    -0x10(%ebp),%edx
0809a0bb +0x5b:  mov    %edx,0xc(%esp)
0809a0bf +0x5f:  movl   $0x10,0x8(%esp)
0809a0c7 +0x67:  mov    %eax,0x4(%esp)
0809a0cb +0x6b:  mov    0xc(%ebp),%eax
0809a0ce +0x6e:  mov    %eax,(%esp)
0809a0d1 +0x71:  call   080ab439 <_Z11cast5_setupPKhiiP13symmetric_key>  ; cast5_setup(unsigned char const*, int, int, symmetric_key*)
0809a0d6 +0x76:  mov    %eax,-0xc(%ebp)
0809a0d9 +0x79:  cmpl   $0x0,-0xc(%ebp)
0809a0dd +0x7d:  jne    0809a0e6 <+0x86>
0809a0df +0x7f:  mov    $0x6fffffff,%eax
0809a0e4 +0x84:  jmp    0809a105 <+0xa5>
0809a0e6 +0x86:  cmpl   $0x3,-0xc(%ebp)
0809a0ea +0x8a:  jne    0809a0f3 <+0x93>
0809a0ec +0x8c:  mov    $0x70000002,%eax
0809a0f1 +0x91:  jmp    0809a105 <+0xa5>
0809a0f3 +0x93:  cmpl   $0x4,-0xc(%ebp)
0809a0f7 +0x97:  jne    0809a100 <+0xa0>
0809a0f9 +0x99:  mov    $0x7000001a,%eax
0809a0fe +0x9e:  jmp    0809a105 <+0xa5>
0809a100 +0xa0:  mov    $0x70000000,%eax
0809a105 +0xa5:  leave
0809a106 +0xa6:  ret
0809a107 +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoCast5::Initialize @ 0x809a060

/* CNCryptoCast5::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoCast5::Initialize(CNCryptoCast5 *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar3) {
      uVar2 = 0x7000000a;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = cast5_setup(param_1,iVar3,0x10,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}
```
