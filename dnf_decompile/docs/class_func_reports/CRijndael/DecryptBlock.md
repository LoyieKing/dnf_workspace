# DecryptBlock

`_ZN9CRijndael12DecryptBlockEPKcPc`

`CRijndael::DecryptBlock(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b7a20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b7a20  _ZN9CRijndael12DecryptBlockEPKcPc
#           CRijndael::DecryptBlock(char const*, char*)
# range [0x080b7a20, 0x080b7dff]
080b7a20 +0x000:  push   %ebp
080b7a21 +0x001:  mov    %esp,%ebp
080b7a23 +0x003:  push   %esi
080b7a24 +0x004:  push   %ebx
080b7a25 +0x005:  sub    $0x40,%esp
080b7a28 +0x008:  mov    0x8(%ebp),%eax
080b7a2b +0x00b:  movzbl 0x4(%eax),%eax
080b7a2f +0x00f:  xor    $0x1,%eax
080b7a32 +0x012:  test   %al,%al
080b7a34 +0x014:  je     080b7a40 <+0x20>
080b7a36 +0x016:  mov    $0x70000005,%eax
080b7a3b +0x01b:  jmp    080b7df9 <+0x3d9>
080b7a40 +0x020:  mov    0x8(%ebp),%eax
080b7a43 +0x023:  mov    0x8(%eax),%eax
080b7a46 +0x026:  cmp    $0x10,%eax
080b7a49 +0x029:  jne    080b7a6e <+0x4e>
080b7a4b +0x02b:  mov    0x10(%ebp),%eax
080b7a4e +0x02e:  mov    %eax,0x8(%esp)
080b7a52 +0x032:  mov    0xc(%ebp),%eax
080b7a55 +0x035:  mov    %eax,0x4(%esp)
080b7a59 +0x039:  mov    0x8(%ebp),%eax
080b7a5c +0x03c:  mov    %eax,(%esp)
080b7a5f +0x03f:  call   080b70e8 <_ZN9CRijndael15DefDecryptBlockEPKcPc>  ; CRijndael::DefDecryptBlock(char const*, char*)
080b7a64 +0x044:  mov    $0x6fffffff,%eax
080b7a69 +0x049:  jmp    080b7df9 <+0x3d9>
080b7a6e +0x04e:  mov    0x8(%ebp),%eax
080b7a71 +0x051:  mov    0x8(%eax),%eax
080b7a74 +0x054:  mov    %eax,%edx
080b7a76 +0x056:  sar    $0x1f,%edx
080b7a79 +0x059:  shr    $0x1e,%edx
080b7a7c +0x05c:  lea    (%edx,%eax,1),%eax
080b7a7f +0x05f:  sar    $0x2,%eax
080b7a82 +0x062:  mov    %eax,-0x30(%ebp)
080b7a85 +0x065:  cmpl   $0x4,-0x30(%ebp)
080b7a89 +0x069:  je     080b7a9f <+0x7f>
080b7a8b +0x06b:  cmpl   $0x6,-0x30(%ebp)
080b7a8f +0x06f:  jne    080b7a98 <+0x78>
080b7a91 +0x071:  mov    $0x1,%eax
080b7a96 +0x076:  jmp    080b7a9d <+0x7d>
080b7a98 +0x078:  mov    $0x2,%eax
080b7a9d +0x07d:  jmp    080b7aa4 <+0x84>
080b7a9f +0x07f:  mov    $0x0,%eax
080b7aa4 +0x084:  mov    %eax,-0x2c(%ebp)
080b7aa7 +0x087:  mov    -0x2c(%ebp),%eax
080b7aaa +0x08a:  shl    $0x5,%eax
080b7aad +0x08d:  mov    &_ZN9CRijndael9sm_shiftsE+0xc(%eax),%eax
080b7ab3 +0x093:  mov    %eax,-0x28(%ebp)
080b7ab6 +0x096:  mov    -0x2c(%ebp),%eax
080b7ab9 +0x099:  shl    $0x5,%eax
080b7abc +0x09c:  mov    &_ZN9CRijndael9sm_shiftsE+0x14(%eax),%eax
080b7ac2 +0x0a2:  mov    %eax,-0x24(%ebp)
080b7ac5 +0x0a5:  mov    -0x2c(%ebp),%eax
080b7ac8 +0x0a8:  shl    $0x5,%eax
080b7acb +0x0ab:  mov    &_ZN9CRijndael9sm_shiftsE+0x1c(%eax),%eax
080b7ad1 +0x0b1:  mov    %eax,-0x20(%ebp)
080b7ad4 +0x0b4:  mov    0x8(%ebp),%eax
080b7ad7 +0x0b7:  add    $0x45c,%eax
080b7adc +0x0bc:  mov    %eax,-0x14(%ebp)
080b7adf +0x0bf:  movl   $0x0,-0x1c(%ebp)
080b7ae6 +0x0c6:  jmp    080b7b6b <+0x14b>
080b7aeb +0x0cb:  mov    0xc(%ebp),%eax
080b7aee +0x0ce:  movzbl (%eax),%eax
080b7af1 +0x0d1:  movzbl %al,%eax
080b7af4 +0x0d4:  mov    %eax,%edx
080b7af6 +0x0d6:  shl    $0x18,%edx
080b7af9 +0x0d9:  mov    -0x14(%ebp),%eax
080b7afc +0x0dc:  mov    %edx,(%eax)
080b7afe +0x0de:  addl   $0x1,0xc(%ebp)
080b7b02 +0x0e2:  mov    -0x14(%ebp),%eax
080b7b05 +0x0e5:  mov    (%eax),%edx
080b7b07 +0x0e7:  mov    0xc(%ebp),%eax
080b7b0a +0x0ea:  movzbl (%eax),%eax
080b7b0d +0x0ed:  movzbl %al,%eax
080b7b10 +0x0f0:  shl    $0x10,%eax
080b7b13 +0x0f3:  or     %eax,%edx
080b7b15 +0x0f5:  mov    -0x14(%ebp),%eax
080b7b18 +0x0f8:  mov    %edx,(%eax)
080b7b1a +0x0fa:  addl   $0x1,0xc(%ebp)
080b7b1e +0x0fe:  mov    -0x14(%ebp),%eax
080b7b21 +0x101:  mov    (%eax),%edx
080b7b23 +0x103:  mov    0xc(%ebp),%eax
080b7b26 +0x106:  movzbl (%eax),%eax
080b7b29 +0x109:  movzbl %al,%eax
080b7b2c +0x10c:  shl    $0x8,%eax
080b7b2f +0x10f:  or     %eax,%edx
080b7b31 +0x111:  mov    -0x14(%ebp),%eax
080b7b34 +0x114:  mov    %edx,(%eax)
080b7b36 +0x116:  addl   $0x1,0xc(%ebp)
080b7b3a +0x11a:  mov    -0x14(%ebp),%eax
080b7b3d +0x11d:  mov    (%eax),%ecx
080b7b3f +0x11f:  mov    0xc(%ebp),%edx
080b7b42 +0x122:  movzbl (%edx),%edx
080b7b45 +0x125:  movzbl %dl,%edx
080b7b48 +0x128:  or     %ecx,%edx
080b7b4a +0x12a:  mov    %edx,(%eax)
080b7b4c +0x12c:  addl   $0x4,-0x14(%ebp)
080b7b50 +0x130:  addl   $0x1,0xc(%ebp)
080b7b54 +0x134:  mov    (%eax),%ecx
080b7b56 +0x136:  mov    -0x1c(%ebp),%ebx
080b7b59 +0x139:  mov    0x8(%ebp),%edx
080b7b5c +0x13c:  add    $0x7c,%ebx
080b7b5f +0x13f:  mov    0x8(%edx,%ebx,4),%edx
080b7b63 +0x143:  xor    %ecx,%edx
080b7b65 +0x145:  mov    %edx,(%eax)
080b7b67 +0x147:  addl   $0x1,-0x1c(%ebp)
080b7b6b +0x14b:  mov    -0x1c(%ebp),%eax
080b7b6e +0x14e:  cmp    -0x30(%ebp),%eax
080b7b71 +0x151:  setl   %al
080b7b74 +0x154:  test   %al,%al
080b7b76 +0x156:  jne    080b7aeb <+0xcb>
080b7b7c +0x15c:  movl   $0x1,-0xc(%ebp)
080b7b83 +0x163:  jmp    080b7ca5 <+0x285>
080b7b88 +0x168:  movl   $0x0,-0x1c(%ebp)
080b7b8f +0x16f:  jmp    080b7c68 <+0x248>
080b7b94 +0x174:  mov    -0x1c(%ebp),%ebx
080b7b97 +0x177:  mov    -0x1c(%ebp),%edx
080b7b9a +0x17a:  mov    0x8(%ebp),%eax
080b7b9d +0x17d:  add    $0x114,%edx
080b7ba3 +0x183:  mov    0xc(%eax,%edx,4),%eax
080b7ba7 +0x187:  shr    $0x18,%eax
080b7baa +0x18a:  mov    &_ZN9CRijndael5sm_T5E(,%eax,4),%ecx
080b7bb1 +0x191:  mov    -0x28(%ebp),%eax
080b7bb4 +0x194:  mov    -0x1c(%ebp),%edx
080b7bb7 +0x197:  lea    (%edx,%eax,1),%eax
080b7bba +0x19a:  mov    %eax,%edx
080b7bbc +0x19c:  sar    $0x1f,%edx
080b7bbf +0x19f:  idivl  -0x30(%ebp)
080b7bc2 +0x1a2:  mov    0x8(%ebp),%eax
080b7bc5 +0x1a5:  add    $0x114,%edx
080b7bcb +0x1ab:  mov    0xc(%eax,%edx,4),%eax
080b7bcf +0x1af:  sar    $0x10,%eax
080b7bd2 +0x1b2:  and    $0xff,%eax
080b7bd7 +0x1b7:  mov    &_ZN9CRijndael5sm_T6E(,%eax,4),%eax
080b7bde +0x1be:  xor    %eax,%ecx
080b7be0 +0x1c0:  mov    -0x24(%ebp),%eax
080b7be3 +0x1c3:  mov    -0x1c(%ebp),%edx
080b7be6 +0x1c6:  lea    (%edx,%eax,1),%eax
080b7be9 +0x1c9:  mov    %eax,%edx
080b7beb +0x1cb:  sar    $0x1f,%edx
080b7bee +0x1ce:  idivl  -0x30(%ebp)
080b7bf1 +0x1d1:  mov    0x8(%ebp),%eax
080b7bf4 +0x1d4:  add    $0x114,%edx
080b7bfa +0x1da:  mov    0xc(%eax,%edx,4),%eax
080b7bfe +0x1de:  sar    $0x8,%eax
080b7c01 +0x1e1:  and    $0xff,%eax
080b7c06 +0x1e6:  mov    &_ZN9CRijndael5sm_T7E(,%eax,4),%eax
080b7c0d +0x1ed:  xor    %eax,%ecx
080b7c0f +0x1ef:  mov    -0x20(%ebp),%eax
080b7c12 +0x1f2:  mov    -0x1c(%ebp),%edx
080b7c15 +0x1f5:  lea    (%edx,%eax,1),%eax
080b7c18 +0x1f8:  mov    %eax,%edx
080b7c1a +0x1fa:  sar    $0x1f,%edx
080b7c1d +0x1fd:  idivl  -0x30(%ebp)
080b7c20 +0x200:  mov    0x8(%ebp),%eax
080b7c23 +0x203:  add    $0x114,%edx
080b7c29 +0x209:  mov    0xc(%eax,%edx,4),%eax
080b7c2d +0x20d:  and    $0xff,%eax
080b7c32 +0x212:  mov    &_ZN9CRijndael5sm_T8E(,%eax,4),%eax
080b7c39 +0x219:  mov    %ecx,%esi
080b7c3b +0x21b:  xor    %eax,%esi
080b7c3d +0x21d:  mov    -0xc(%ebp),%ecx
080b7c40 +0x220:  mov    -0x1c(%ebp),%edx
080b7c43 +0x223:  mov    0x8(%ebp),%eax
080b7c46 +0x226:  shl    $0x3,%ecx
080b7c49 +0x229:  lea    (%ecx,%edx,1),%edx
080b7c4c +0x22c:  add    $0x7c,%edx
080b7c4f +0x22f:  mov    0x8(%eax,%edx,4),%eax
080b7c53 +0x233:  mov    %esi,%ecx
080b7c55 +0x235:  xor    %eax,%ecx
080b7c57 +0x237:  mov    0x8(%ebp),%eax
080b7c5a +0x23a:  lea    0x10c(%ebx),%edx
080b7c60 +0x240:  mov    %ecx,0xc(%eax,%edx,4)
080b7c64 +0x244:  addl   $0x1,-0x1c(%ebp)
080b7c68 +0x248:  mov    -0x1c(%ebp),%eax
080b7c6b +0x24b:  cmp    -0x30(%ebp),%eax
080b7c6e +0x24e:  setl   %al
080b7c71 +0x251:  test   %al,%al
080b7c73 +0x253:  jne    080b7b94 <+0x174>
080b7c79 +0x259:  mov    -0x30(%ebp),%eax
080b7c7c +0x25c:  shl    $0x2,%eax
080b7c7f +0x25f:  mov    0x8(%ebp),%edx
080b7c82 +0x262:  lea    0x43c(%edx),%ecx
080b7c88 +0x268:  mov    0x8(%ebp),%edx
080b7c8b +0x26b:  add    $0x45c,%edx
080b7c91 +0x271:  mov    %eax,0x8(%esp)
080b7c95 +0x275:  mov    %ecx,0x4(%esp)
080b7c99 +0x279:  mov    %edx,(%esp)
080b7c9c +0x27c:  call   0807d8a0 <_init+0x198>
080b7ca1 +0x281:  addl   $0x1,-0xc(%ebp)
080b7ca5 +0x285:  mov    0x8(%ebp),%eax
080b7ca8 +0x288:  mov    0x3d8(%eax),%eax
080b7cae +0x28e:  cmp    -0xc(%ebp),%eax
080b7cb1 +0x291:  setg   %al
080b7cb4 +0x294:  test   %al,%al
080b7cb6 +0x296:  jne    080b7b88 <+0x168>
080b7cbc +0x29c:  movl   $0x0,-0x1c(%ebp)
080b7cc3 +0x2a3:  movl   $0x0,-0x10(%ebp)
080b7cca +0x2aa:  jmp    080b7de3 <+0x3c3>
080b7ccf +0x2af:  mov    0x8(%ebp),%eax
080b7cd2 +0x2b2:  mov    0x3d8(%eax),%ecx
080b7cd8 +0x2b8:  mov    -0x1c(%ebp),%edx
080b7cdb +0x2bb:  mov    0x8(%ebp),%eax
080b7cde +0x2be:  shl    $0x3,%ecx
080b7ce1 +0x2c1:  lea    (%ecx,%edx,1),%edx
080b7ce4 +0x2c4:  add    $0x7c,%edx
080b7ce7 +0x2c7:  mov    0x8(%eax,%edx,4),%eax
080b7ceb +0x2cb:  mov    %eax,-0x18(%ebp)
080b7cee +0x2ce:  mov    -0x10(%ebp),%eax
080b7cf1 +0x2d1:  add    0x10(%ebp),%eax
080b7cf4 +0x2d4:  mov    -0x1c(%ebp),%ecx
080b7cf7 +0x2d7:  mov    0x8(%ebp),%edx
080b7cfa +0x2da:  add    $0x114,%ecx
080b7d00 +0x2e0:  mov    0xc(%edx,%ecx,4),%edx
080b7d04 +0x2e4:  shr    $0x18,%edx
080b7d07 +0x2e7:  movzbl &_ZN9CRijndael5sm_SiE(%edx),%ecx
080b7d0e +0x2ee:  mov    -0x18(%ebp),%edx
080b7d11 +0x2f1:  sar    $0x18,%edx
080b7d14 +0x2f4:  xor    %ecx,%edx
080b7d16 +0x2f6:  mov    %dl,(%eax)
080b7d18 +0x2f8:  addl   $0x1,-0x10(%ebp)
080b7d1c +0x2fc:  mov    -0x10(%ebp),%eax
080b7d1f +0x2ff:  mov    %eax,%ecx
080b7d21 +0x301:  add    0x10(%ebp),%ecx
080b7d24 +0x304:  mov    -0x28(%ebp),%eax
080b7d27 +0x307:  mov    -0x1c(%ebp),%edx
080b7d2a +0x30a:  lea    (%edx,%eax,1),%eax
080b7d2d +0x30d:  mov    %eax,%edx
080b7d2f +0x30f:  sar    $0x1f,%edx
080b7d32 +0x312:  idivl  -0x30(%ebp)
080b7d35 +0x315:  mov    0x8(%ebp),%eax
080b7d38 +0x318:  add    $0x114,%edx
080b7d3e +0x31e:  mov    0xc(%eax,%edx,4),%eax
080b7d42 +0x322:  sar    $0x10,%eax
080b7d45 +0x325:  and    $0xff,%eax
080b7d4a +0x32a:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%edx
080b7d51 +0x331:  mov    -0x18(%ebp),%eax
080b7d54 +0x334:  sar    $0x10,%eax
080b7d57 +0x337:  xor    %edx,%eax
080b7d59 +0x339:  mov    %al,(%ecx)
080b7d5b +0x33b:  addl   $0x1,-0x10(%ebp)
080b7d5f +0x33f:  mov    -0x10(%ebp),%eax
080b7d62 +0x342:  mov    %eax,%ecx
080b7d64 +0x344:  add    0x10(%ebp),%ecx
080b7d67 +0x347:  mov    -0x24(%ebp),%eax
080b7d6a +0x34a:  mov    -0x1c(%ebp),%edx
080b7d6d +0x34d:  lea    (%edx,%eax,1),%eax
080b7d70 +0x350:  mov    %eax,%edx
080b7d72 +0x352:  sar    $0x1f,%edx
080b7d75 +0x355:  idivl  -0x30(%ebp)
080b7d78 +0x358:  mov    0x8(%ebp),%eax
080b7d7b +0x35b:  add    $0x114,%edx
080b7d81 +0x361:  mov    0xc(%eax,%edx,4),%eax
080b7d85 +0x365:  sar    $0x8,%eax
080b7d88 +0x368:  and    $0xff,%eax
080b7d8d +0x36d:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%edx
080b7d94 +0x374:  mov    -0x18(%ebp),%eax
080b7d97 +0x377:  sar    $0x8,%eax
080b7d9a +0x37a:  xor    %edx,%eax
080b7d9c +0x37c:  mov    %al,(%ecx)
080b7d9e +0x37e:  addl   $0x1,-0x10(%ebp)
080b7da2 +0x382:  mov    -0x10(%ebp),%eax
080b7da5 +0x385:  mov    %eax,%ecx
080b7da7 +0x387:  add    0x10(%ebp),%ecx
080b7daa +0x38a:  mov    -0x20(%ebp),%eax
080b7dad +0x38d:  mov    -0x1c(%ebp),%edx
080b7db0 +0x390:  lea    (%edx,%eax,1),%eax
080b7db3 +0x393:  mov    %eax,%edx
080b7db5 +0x395:  sar    $0x1f,%edx
080b7db8 +0x398:  idivl  -0x30(%ebp)
080b7dbb +0x39b:  mov    0x8(%ebp),%eax
080b7dbe +0x39e:  add    $0x114,%edx
080b7dc4 +0x3a4:  mov    0xc(%eax,%edx,4),%eax
080b7dc8 +0x3a8:  and    $0xff,%eax
080b7dcd +0x3ad:  movzbl &_ZN9CRijndael5sm_SiE(%eax),%edx
080b7dd4 +0x3b4:  mov    -0x18(%ebp),%eax
080b7dd7 +0x3b7:  xor    %edx,%eax
080b7dd9 +0x3b9:  mov    %al,(%ecx)
080b7ddb +0x3bb:  addl   $0x1,-0x10(%ebp)
080b7ddf +0x3bf:  addl   $0x1,-0x1c(%ebp)
080b7de3 +0x3c3:  mov    -0x1c(%ebp),%eax
080b7de6 +0x3c6:  cmp    -0x30(%ebp),%eax
080b7de9 +0x3c9:  setl   %al
080b7dec +0x3cc:  test   %al,%al
080b7dee +0x3ce:  jne    080b7ccf <+0x2af>
080b7df4 +0x3d4:  mov    $0x6fffffff,%eax
080b7df9 +0x3d9:  add    $0x40,%esp
080b7dfc +0x3dc:  pop    %ebx
080b7dfd +0x3dd:  pop    %esi
080b7dfe +0x3de:  pop    %ebp
080b7dff +0x3df:  ret
```

## 反编译 C

```c
// CRijndael::DecryptBlock @ 0x80b7a20

/* CRijndael::DecryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::DecryptBlock(CRijndael *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_20;
  CRijndael *local_18;
  int local_14;
  int local_10;
  
  if (this[4] == (CRijndael)0x1) {
    if (*(int *)(this + 8) == 0x10) {
      DefDecryptBlock(this,param_1,param_2);
      uVar3 = 0x6fffffff;
    }
    else {
      iVar4 = (int)(((uint)(*(int *)(this + 8) >> 0x1f) >> 0x1e) + *(int *)(this + 8)) >> 2;
      if (iVar4 == 4) {
        iVar5 = 0;
      }
      else if (iVar4 == 6) {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
      iVar1 = *(int *)(sm_shifts + iVar5 * 0x20 + 0xc);
      iVar2 = *(int *)(sm_shifts + iVar5 * 0x20 + 0x14);
      iVar5 = *(int *)(sm_shifts + iVar5 * 0x20 + 0x1c);
      local_18 = this + 0x45c;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        *(uint *)local_18 = (uint)(byte)*param_1 << 0x18;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[1] << 0x10;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[2] << 8;
        *(uint *)local_18 = (uint)(byte)param_1[3] | *(uint *)local_18;
        param_1 = param_1 + 4;
        *(uint *)local_18 = *(uint *)(this + (local_20 + 0x7c) * 4 + 8) ^ *(uint *)local_18;
        local_18 = local_18 + 4;
      }
      for (local_10 = 1; local_10 < *(int *)(this + 0x3d8); local_10 = local_10 + 1) {
        for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
          *(uint *)(this + (local_20 + 0x10c) * 4 + 0xc) =
               *(uint *)(sm_T5 + (*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18) * 4) ^
               *(uint *)(sm_T6 + (*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >>
                                  0x10 & 0xffU) * 4) ^
               *(uint *)(sm_T7 + (*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >>
                                  8 & 0xffU) * 4) ^
               *(uint *)(sm_T8 + (*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) &
                                 0xff) * 4) ^
               *(uint *)(this + (local_10 * 8 + local_20 + 0x7c) * 4 + 8);
        }
        memcpy(this + 0x45c,this + 0x43c,iVar4 << 2);
      }
      local_14 = 0;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        uVar3 = *(undefined4 *)(this + (*(int *)(this + 0x3d8) * 8 + local_20 + 0x7c) * 4 + 8);
        param_2[local_14] =
             (byte)((uint)uVar3 >> 0x18) ^
             sm_Si[*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18];
        param_2[local_14 + 1] =
             (byte)((uint)uVar3 >> 0x10) ^
             sm_Si[*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >> 0x10 & 0xff];
        param_2[local_14 + 2] =
             (byte)((uint)uVar3 >> 8) ^
             sm_Si[*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >> 8 & 0xff];
        param_2[local_14 + 3] =
             (byte)uVar3 ^
             sm_Si[*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) & 0xff];
        local_14 = local_14 + 4;
      }
      uVar3 = 0x6fffffff;
    }
  }
  else {
    uVar3 = 0x70000005;
  }
  return uVar3;
}
```
