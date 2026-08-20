# Initialize

`_ZN14CNCryptoAnubis10InitializeEPKhi`

`CNCryptoAnubis::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x080993bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080993bc  _ZN14CNCryptoAnubis10InitializeEPKhi
#           CNCryptoAnubis::Initialize(unsigned char const*, int)
# range [0x080993bc, 0x08099463]
080993bc +0x00:  push   %ebp
080993bd +0x01:  mov    %esp,%ebp
080993bf +0x03:  sub    $0x28,%esp
080993c2 +0x06:  mov    0x8(%ebp),%eax
080993c5 +0x09:  mov    0x8(%eax),%eax
080993c8 +0x0c:  test   %eax,%eax
080993ca +0x0e:  jne    080993d6 <+0x1a>
080993cc +0x10:  mov    $0x7000000c,%eax
080993d1 +0x15:  jmp    08099461 <+0xa5>
080993d6 +0x1a:  mov    0x8(%ebp),%eax
080993d9 +0x1d:  mov    (%eax),%eax
080993db +0x1f:  add    $0x20,%eax
080993de +0x22:  mov    (%eax),%edx
080993e0 +0x24:  mov    0x8(%ebp),%eax
080993e3 +0x27:  mov    %eax,(%esp)
080993e6 +0x2a:  call   *%edx
080993e8 +0x2c:  cmp    0x10(%ebp),%eax
080993eb +0x2f:  setg   %al
080993ee +0x32:  test   %al,%al
080993f0 +0x34:  je     080993f9 <+0x3d>
080993f2 +0x36:  mov    $0x70000002,%eax
080993f7 +0x3b:  jmp    08099461 <+0xa5>
080993f9 +0x3d:  mov    0x8(%ebp),%eax
080993fc +0x40:  mov    0x8(%eax),%eax
080993ff +0x43:  mov    %eax,-0x10(%ebp)
08099402 +0x46:  mov    0x8(%ebp),%eax
08099405 +0x49:  mov    (%eax),%eax
08099407 +0x4b:  add    $0x20,%eax
0809940a +0x4e:  mov    (%eax),%edx
0809940c +0x50:  mov    0x8(%ebp),%eax
0809940f +0x53:  mov    %eax,(%esp)
08099412 +0x56:  call   *%edx
08099414 +0x58:  mov    -0x10(%ebp),%edx
08099417 +0x5b:  mov    %edx,0xc(%esp)
0809941b +0x5f:  movl   $0xc,0x8(%esp)
08099423 +0x67:  mov    %eax,0x4(%esp)
08099427 +0x6b:  mov    0xc(%ebp),%eax
0809942a +0x6e:  mov    %eax,(%esp)
0809942d +0x71:  call   080a4e71 <_Z12anubis_setupPKhiiP13symmetric_key>  ; anubis_setup(unsigned char const*, int, int, symmetric_key*)
08099432 +0x76:  mov    %eax,-0xc(%ebp)
08099435 +0x79:  cmpl   $0x0,-0xc(%ebp)
08099439 +0x7d:  jne    08099442 <+0x86>
0809943b +0x7f:  mov    $0x6fffffff,%eax
08099440 +0x84:  jmp    08099461 <+0xa5>
08099442 +0x86:  cmpl   $0x4,-0xc(%ebp)
08099446 +0x8a:  jne    0809944f <+0x93>
08099448 +0x8c:  mov    $0x7000001a,%eax
0809944d +0x91:  jmp    08099461 <+0xa5>
0809944f +0x93:  cmpl   $0x3,-0xc(%ebp)
08099453 +0x97:  jne    0809945c <+0xa0>
08099455 +0x99:  mov    $0x70000002,%eax
0809945a +0x9e:  jmp    08099461 <+0xa5>
0809945c +0xa0:  mov    $0x70000000,%eax
08099461 +0xa5:  leave
08099462 +0xa6:  ret
08099463 +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoAnubis::Initialize @ 0x80993bc

/* CNCryptoAnubis::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoAnubis::Initialize(CNCryptoAnubis *this,uchar *param_1,int param_2)

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
      uVar2 = 0x70000002;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = anubis_setup(param_1,iVar3,0xc,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}
```
