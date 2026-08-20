# Initialize

`_ZN14CRijndael_fake10InitializeEPKciS1_iiii`

`CRijndael_fake::Initialize(char const*, int, char const*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b8340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b8340  _ZN14CRijndael_fake10InitializeEPKciS1_iiii
#           CRijndael_fake::Initialize(char const*, int, char const*, int, int, int, int)
# range [0x080b8340, 0x080b83c5]
080b8340 +0x00:  push   %ebp
080b8341 +0x01:  mov    %esp,%ebp
080b8343 +0x03:  sub    $0x28,%esp
080b8346 +0x06:  cmpl   $0xf,0x10(%ebp)
080b834a +0x0a:  jg     080b8353 <+0x13>
080b834c +0x0c:  mov    $0x70000002,%eax
080b8351 +0x11:  jmp    080b83c3 <+0x83>
080b8353 +0x13:  mov    0x8(%ebp),%eax
080b8356 +0x16:  mov    0x4(%eax),%eax
080b8359 +0x19:  mov    %eax,-0x14(%ebp)
080b835c +0x1c:  mov    0x8(%ebp),%eax
080b835f +0x1f:  mov    0x8(%eax),%edx
080b8362 +0x22:  mov    -0x14(%ebp),%eax
080b8365 +0x25:  xor    %edx,%eax
080b8367 +0x27:  mov    %eax,-0x14(%ebp)
080b836a +0x2a:  lea    -0x14(%ebp),%eax
080b836d +0x2d:  mov    (%eax),%eax
080b836f +0x2f:  mov    %eax,-0x10(%ebp)
080b8372 +0x32:  mov    0xc(%ebp),%eax
080b8375 +0x35:  mov    -0x10(%ebp),%edx
080b8378 +0x38:  mov    %edx,0xc(%esp)
080b837c +0x3c:  movl   $0xc,0x8(%esp)
080b8384 +0x44:  movl   $0x10,0x4(%esp)
080b838c +0x4c:  mov    %eax,(%esp)
080b838f +0x4f:  call   080a4e71 <_Z12anubis_setupPKhiiP13symmetric_key>  ; anubis_setup(unsigned char const*, int, int, symmetric_key*)
080b8394 +0x54:  mov    %eax,-0xc(%ebp)
080b8397 +0x57:  cmpl   $0x0,-0xc(%ebp)
080b839b +0x5b:  jne    080b83a4 <+0x64>
080b839d +0x5d:  mov    $0x6fffffff,%eax
080b83a2 +0x62:  jmp    080b83c3 <+0x83>
080b83a4 +0x64:  cmpl   $0x4,-0xc(%ebp)
080b83a8 +0x68:  jne    080b83b1 <+0x71>
080b83aa +0x6a:  mov    $0x7000001a,%eax
080b83af +0x6f:  jmp    080b83c3 <+0x83>
080b83b1 +0x71:  cmpl   $0x3,-0xc(%ebp)
080b83b5 +0x75:  jne    080b83be <+0x7e>
080b83b7 +0x77:  mov    $0x70000002,%eax
080b83bc +0x7c:  jmp    080b83c3 <+0x83>
080b83be +0x7e:  mov    $0x70000000,%eax
080b83c3 +0x83:  leave
080b83c4 +0x84:  ret
080b83c5 +0x85:  nop
```

## 反编译 C

```c
// CRijndael_fake::Initialize @ 0x80b8340

/* CRijndael_fake::Initialize(char const*, int, char const*, int, int, int, int) */

undefined4
CRijndael_fake::Initialize
          (char *param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((int)param_3 < 0x10) {
    uVar1 = 0x70000002;
  }
  else {
    iVar2 = anubis_setup((uchar *)param_2,0x10,0xc,
                         (symmetric_key *)(*(uint *)(param_1 + 4) ^ *(uint *)(param_1 + 8)));
    if (iVar2 == 0) {
      uVar1 = 0x6fffffff;
    }
    else if (iVar2 == 4) {
      uVar1 = 0x7000001a;
    }
    else if (iVar2 == 3) {
      uVar1 = 0x70000002;
    }
    else {
      uVar1 = 0x70000000;
    }
  }
  return uVar1;
}
```
