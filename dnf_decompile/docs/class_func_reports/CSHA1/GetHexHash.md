# GetHexHash

`_ZN5CSHA110GetHexHashEPc`

`CSHA1::GetHexHash(char*)`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x0808a410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a410  _ZN5CSHA110GetHexHashEPc
#           CSHA1::GetHexHash(char*)
# range [0x0808a410, 0x0808a487]
0808a410 +0x00:  push   %ebp
0808a411 +0x01:  mov    %esp,%ebp
0808a413 +0x03:  sub    $0x28,%esp
0808a416 +0x06:  cmpl   $0x0,0xc(%ebp)
0808a41a +0x0a:  jne    0808a423 <+0x13>
0808a41c +0x0c:  mov    $0x0,%eax
0808a421 +0x11:  jmp    0808a484 <+0x74>
0808a423 +0x13:  movl   $0x0,-0xc(%ebp)
0808a42a +0x1a:  jmp    0808a474 <+0x64>
0808a42c +0x1c:  mov    -0xc(%ebp),%eax
0808a42f +0x1f:  mov    0x8(%ebp),%edx
0808a432 +0x22:  movzbl 0x60(%edx,%eax,1),%eax
0808a437 +0x27:  movzbl %al,%eax
0808a43a +0x2a:  mov    %eax,0x8(%esp)
0808a43e +0x2e:  movl   $"%02X",0x4(%esp)
0808a446 +0x36:  lea    -0xf(%ebp),%eax
0808a449 +0x39:  mov    %eax,(%esp)
0808a44c +0x3c:  call   0807e440 <_init+0xd38>
0808a451 +0x41:  mov    -0xc(%ebp),%eax
0808a454 +0x44:  add    %eax,%eax
0808a456 +0x46:  add    0xc(%ebp),%eax
0808a459 +0x49:  movl   $0x2,0x8(%esp)
0808a461 +0x51:  lea    -0xf(%ebp),%edx
0808a464 +0x54:  mov    %edx,0x4(%esp)
0808a468 +0x58:  mov    %eax,(%esp)
0808a46b +0x5b:  call   0807d8a0 <_init+0x198>
0808a470 +0x60:  addl   $0x1,-0xc(%ebp)
0808a474 +0x64:  cmpl   $0x13,-0xc(%ebp)
0808a478 +0x68:  setle  %al
0808a47b +0x6b:  test   %al,%al
0808a47d +0x6d:  jne    0808a42c <+0x1c>
0808a47f +0x6f:  mov    $0x1,%eax
0808a484 +0x74:  leave
0808a485 +0x75:  ret
0808a486 +0x76:  nop
0808a487 +0x77:  nop
```

## 反编译 C

```c
// CSHA1::GetHexHash @ 0x808a410

/* CSHA1::GetHexHash(char*) */

undefined4 __thiscall CSHA1::GetHexHash(CSHA1 *this,char *param_1)

{
  undefined4 uVar1;
  char local_13 [3];
  int local_10;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
      sprintf(local_13,"%02X",(uint)(byte)this[local_10 + 0x60]);
      memcpy(param_1 + local_10 * 2,local_13,2);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```
