# Initialize

`_ZN14CNCryptoMulti210InitializeEPKhi`

`CNCryptoMulti2::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b14c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b14c  _ZN14CNCryptoMulti210InitializeEPKhi
#           CNCryptoMulti2::Initialize(unsigned char const*, int)
# range [0x0809b14c, 0x0809b1f3]
0809b14c +0x00:  push   %ebp
0809b14d +0x01:  mov    %esp,%ebp
0809b14f +0x03:  sub    $0x28,%esp
0809b152 +0x06:  mov    0x8(%ebp),%eax
0809b155 +0x09:  mov    0x8(%eax),%eax
0809b158 +0x0c:  test   %eax,%eax
0809b15a +0x0e:  jne    0809b166 <+0x1a>
0809b15c +0x10:  mov    $0x7000000c,%eax
0809b161 +0x15:  jmp    0809b1f1 <+0xa5>
0809b166 +0x1a:  mov    0x8(%ebp),%eax
0809b169 +0x1d:  mov    (%eax),%eax
0809b16b +0x1f:  add    $0x20,%eax
0809b16e +0x22:  mov    (%eax),%edx
0809b170 +0x24:  mov    0x8(%ebp),%eax
0809b173 +0x27:  mov    %eax,(%esp)
0809b176 +0x2a:  call   *%edx
0809b178 +0x2c:  cmp    0x10(%ebp),%eax
0809b17b +0x2f:  setg   %al
0809b17e +0x32:  test   %al,%al
0809b180 +0x34:  je     0809b189 <+0x3d>
0809b182 +0x36:  mov    $0x7000000a,%eax
0809b187 +0x3b:  jmp    0809b1f1 <+0xa5>
0809b189 +0x3d:  mov    0x8(%ebp),%eax
0809b18c +0x40:  mov    0x8(%eax),%eax
0809b18f +0x43:  mov    %eax,-0x10(%ebp)
0809b192 +0x46:  mov    0x8(%ebp),%eax
0809b195 +0x49:  mov    (%eax),%eax
0809b197 +0x4b:  add    $0x20,%eax
0809b19a +0x4e:  mov    (%eax),%edx
0809b19c +0x50:  mov    0x8(%ebp),%eax
0809b19f +0x53:  mov    %eax,(%esp)
0809b1a2 +0x56:  call   *%edx
0809b1a4 +0x58:  mov    -0x10(%ebp),%edx
0809b1a7 +0x5b:  mov    %edx,0xc(%esp)
0809b1ab +0x5f:  movl   $0x80,0x8(%esp)
0809b1b3 +0x67:  mov    %eax,0x4(%esp)
0809b1b7 +0x6b:  mov    0xc(%ebp),%eax
0809b1ba +0x6e:  mov    %eax,(%esp)
0809b1bd +0x71:  call   080b4afe <_Z12multi2_setupPKhiiP13symmetric_key>  ; multi2_setup(unsigned char const*, int, int, symmetric_key*)
0809b1c2 +0x76:  mov    %eax,-0xc(%ebp)
0809b1c5 +0x79:  cmpl   $0x0,-0xc(%ebp)
0809b1c9 +0x7d:  jne    0809b1d2 <+0x86>
0809b1cb +0x7f:  mov    $0x6fffffff,%eax
0809b1d0 +0x84:  jmp    0809b1f1 <+0xa5>
0809b1d2 +0x86:  cmpl   $0x3,-0xc(%ebp)
0809b1d6 +0x8a:  jne    0809b1df <+0x93>
0809b1d8 +0x8c:  mov    $0x70000002,%eax
0809b1dd +0x91:  jmp    0809b1f1 <+0xa5>
0809b1df +0x93:  cmpl   $0x4,-0xc(%ebp)
0809b1e3 +0x97:  jne    0809b1ec <+0xa0>
0809b1e5 +0x99:  mov    $0x7000001a,%eax
0809b1ea +0x9e:  jmp    0809b1f1 <+0xa5>
0809b1ec +0xa0:  mov    $0x70000000,%eax
0809b1f1 +0xa5:  leave
0809b1f2 +0xa6:  ret
0809b1f3 +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoMulti2::Initialize @ 0x809b14c

/* CNCryptoMulti2::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoMulti2::Initialize(CNCryptoMulti2 *this,uchar *param_1,int param_2)

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
      iVar3 = multi2_setup(param_1,iVar3,0x80,psVar1);
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
