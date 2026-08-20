# dispatch_sig

`_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci`

`Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SetARSInfo` | `0x084e09ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e09ce  _ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci
#           Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e09ce, 0x084e0dc5]
084e09ce +0x000:  push   %ebp
084e09cf +0x001:  mov    %esp,%ebp
084e09d1 +0x003:  push   %edi
084e09d2 +0x004:  push   %esi
084e09d3 +0x005:  push   %ebx
084e09d4 +0x006:  sub    $0xac,%esp
084e09da +0x00c:  mov    0x10(%ebp),%eax
084e09dd +0x00f:  mov    %eax,-0x20(%ebp)
084e09e0 +0x012:  mov    -0x20(%ebp),%eax
084e09e3 +0x015:  movzbl 0xe(%eax),%eax
084e09e7 +0x019:  test   %al,%al
084e09e9 +0x01b:  jne    084e0a2e <+0x60>
084e09eb +0x01d:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084e09f0 +0x022:  mov    %eax,(%esp)
084e09f3 +0x025:  call   082a5a9c <_GLOBAL__I__ZN4CLog5this_E+0x1ec3>  ; global constructors keyed to CLog::this_+0x1ec3
084e09f8 +0x02a:  movl   $0x0,0xc(%esp)
084e0a00 +0x032:  movl   $0x4f5e,0x8(%esp)
084e0a08 +0x03a:  movl   $&_ZZN16Inter_SetARSInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e0a10 +0x042:  lea    -0x70(%ebp),%eax
084e0a13 +0x045:  mov    %eax,(%esp)
084e0a16 +0x048:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0a1b +0x04d:  movl   $"[ARS_INFO] Reset",0x4(%esp)
084e0a23 +0x055:  lea    -0x70(%ebp),%eax
084e0a26 +0x058:  mov    %eax,(%esp)
084e0a29 +0x05b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0a2e +0x060:  mov    -0x20(%ebp),%eax
084e0a31 +0x063:  movzbl 0xe(%eax),%eax
084e0a35 +0x067:  movsbl %al,%esi
084e0a38 +0x06a:  mov    -0x20(%ebp),%eax
084e0a3b +0x06d:  mov    0xa(%eax),%ebx
084e0a3e +0x070:  movl   $0x0,0xc(%esp)
084e0a46 +0x078:  movl   $0x4f64,0x8(%esp)
084e0a4e +0x080:  movl   $&_ZZN16Inter_SetARSInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e0a56 +0x088:  lea    -0x60(%ebp),%eax
084e0a59 +0x08b:  mov    %eax,(%esp)
084e0a5c +0x08e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0a61 +0x093:  mov    %esi,0xc(%esp)
084e0a65 +0x097:  mov    %ebx,0x8(%esp)
084e0a69 +0x09b:  movl   $"[ARS_INFO] Cnt : %d, State : %d",0x4(%esp)
084e0a71 +0x0a3:  lea    -0x60(%ebp),%eax
084e0a74 +0x0a6:  mov    %eax,(%esp)
084e0a77 +0x0a9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0a7c +0x0ae:  mov    -0x20(%ebp),%eax
084e0a7f +0x0b1:  mov    0xa(%eax),%eax
084e0a82 +0x0b4:  cmp    $0x64,%eax
084e0a85 +0x0b7:  jle    084e0ac7 <+0xf9>
084e0a87 +0x0b9:  movl   $0x0,0xc(%esp)
084e0a8f +0x0c1:  movl   $0x4f6b,0x8(%esp)
084e0a97 +0x0c9:  movl   $&_ZZN16Inter_SetARSInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e0a9f +0x0d1:  lea    -0x50(%ebp),%eax
084e0aa2 +0x0d4:  mov    %eax,(%esp)
084e0aa5 +0x0d7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0aaa +0x0dc:  movl   $"[ARS_INFO] Cnt OverFlag(100)",0x4(%esp)
084e0ab2 +0x0e4:  lea    -0x50(%ebp),%eax
084e0ab5 +0x0e7:  mov    %eax,(%esp)
084e0ab8 +0x0ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0abd +0x0ef:  mov    $0x0,%eax
084e0ac2 +0x0f4:  jmp    084e0dba <+0x3ec>
084e0ac7 +0x0f9:  movl   $0x0,-0x1c(%ebp)
084e0ace +0x100:  jmp    084e0da1 <+0x3d3>
084e0ad3 +0x105:  mov    -0x1c(%ebp),%edx
084e0ad6 +0x108:  mov    -0x20(%ebp),%ecx
084e0ad9 +0x10b:  mov    %edx,%eax
084e0adb +0x10d:  add    %eax,%eax
084e0add +0x10f:  add    %edx,%eax
084e0adf +0x111:  shl    $0x2,%eax
084e0ae2 +0x114:  movzwl 0xf(%eax,%ecx,1),%eax
084e0ae7 +0x119:  test   %ax,%ax
084e0aea +0x11c:  jne    084e0baf <+0x1e1>
084e0af0 +0x122:  mov    -0x1c(%ebp),%edx
084e0af3 +0x125:  mov    -0x20(%ebp),%ecx
084e0af6 +0x128:  mov    %edx,%eax
084e0af8 +0x12a:  add    %eax,%eax
084e0afa +0x12c:  add    %edx,%eax
084e0afc +0x12e:  shl    $0x2,%eax
084e0aff +0x131:  movzwl 0x19(%eax,%ecx,1),%eax
084e0b04 +0x136:  movzwl %ax,%eax
084e0b07 +0x139:  mov    %eax,%edx
084e0b09 +0x13b:  mov    $0x0,%ecx
084e0b0e +0x140:  mov    -0x1c(%ebp),%ebx
084e0b11 +0x143:  mov    -0x20(%ebp),%esi
084e0b14 +0x146:  mov    %ebx,%eax
084e0b16 +0x148:  add    %eax,%eax
084e0b18 +0x14a:  add    %ebx,%eax
084e0b1a +0x14c:  shl    $0x2,%eax
084e0b1d +0x14f:  movzwl 0x11(%eax,%esi,1),%eax
084e0b22 +0x154:  movzwl %ax,%ebx
084e0b25 +0x157:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084e0b2a +0x15c:  mov    %edx,0x8(%esp)
084e0b2e +0x160:  mov    %ecx,0xc(%esp)
084e0b32 +0x164:  mov    %ebx,0x4(%esp)
084e0b36 +0x168:  mov    %eax,(%esp)
084e0b39 +0x16b:  call   084eb9d4 <_GLOBAL__I__Z7getUserj+0x2986>  ; global constructors keyed to getUser(unsigned int)+0x2986
084e0b3e +0x170:  mov    -0x1c(%ebp),%edx
084e0b41 +0x173:  mov    -0x20(%ebp),%ecx
084e0b44 +0x176:  mov    %edx,%eax
084e0b46 +0x178:  add    %eax,%eax
084e0b48 +0x17a:  add    %edx,%eax
084e0b4a +0x17c:  shl    $0x2,%eax
084e0b4d +0x17f:  movzwl 0x11(%eax,%ecx,1),%eax
084e0b52 +0x184:  movzwl %ax,%esi
084e0b55 +0x187:  mov    -0x1c(%ebp),%edx
084e0b58 +0x18a:  mov    -0x20(%ebp),%ecx
084e0b5b +0x18d:  mov    %edx,%eax
084e0b5d +0x18f:  add    %eax,%eax
084e0b5f +0x191:  add    %edx,%eax
084e0b61 +0x193:  shl    $0x2,%eax
084e0b64 +0x196:  movzwl 0x19(%eax,%ecx,1),%eax
084e0b69 +0x19b:  movzwl %ax,%ebx
084e0b6c +0x19e:  movl   $0x0,0xc(%esp)
084e0b74 +0x1a6:  movl   $0x4f82,0x8(%esp)
084e0b7c +0x1ae:  movl   $&_ZZN16Inter_SetARSInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e0b84 +0x1b6:  lea    -0x40(%ebp),%eax
084e0b87 +0x1b9:  mov    %eax,(%esp)
084e0b8a +0x1bc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0b8f +0x1c1:  mov    %esi,0xc(%esp)
084e0b93 +0x1c5:  mov    %ebx,0x8(%esp)
084e0b97 +0x1c9:  movl   $"[ARS_INFO] TotalGold: %llu, TotalCount: %d",0x4(%esp)
084e0b9f +0x1d1:  lea    -0x40(%ebp),%eax
084e0ba2 +0x1d4:  mov    %eax,(%esp)
084e0ba5 +0x1d7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0baa +0x1dc:  jmp    084e0d9d <+0x3cf>
084e0baf +0x1e1:  mov    -0x1c(%ebp),%edx
084e0bb2 +0x1e4:  mov    -0x20(%ebp),%ecx
084e0bb5 +0x1e7:  mov    %edx,%eax
084e0bb7 +0x1e9:  add    %eax,%eax
084e0bb9 +0x1eb:  add    %edx,%eax
084e0bbb +0x1ed:  shl    $0x2,%eax
084e0bbe +0x1f0:  movzwl 0x19(%eax,%ecx,1),%eax
084e0bc3 +0x1f5:  movzwl %ax,%edi
084e0bc6 +0x1f8:  mov    -0x1c(%ebp),%edx
084e0bc9 +0x1fb:  mov    -0x20(%ebp),%ecx
084e0bcc +0x1fe:  mov    %edx,%eax
084e0bce +0x200:  add    %eax,%eax
084e0bd0 +0x202:  add    %edx,%eax
084e0bd2 +0x204:  shl    $0x2,%eax
084e0bd5 +0x207:  lea    (%ecx,%eax,1),%eax
084e0bd8 +0x20a:  add    $0x18,%eax
084e0bdb +0x20d:  movzbl (%eax),%eax
084e0bde +0x210:  movzbl %al,%eax
084e0be1 +0x213:  mov    %eax,-0x90(%ebp)
084e0be7 +0x219:  mov    -0x1c(%ebp),%edx
084e0bea +0x21c:  mov    -0x20(%ebp),%ecx
084e0bed +0x21f:  mov    %edx,%eax
084e0bef +0x221:  add    %eax,%eax
084e0bf1 +0x223:  add    %edx,%eax
084e0bf3 +0x225:  shl    $0x2,%eax
084e0bf6 +0x228:  lea    (%ecx,%eax,1),%eax
084e0bf9 +0x22b:  add    $0x17,%eax
084e0bfc +0x22e:  movzbl (%eax),%eax
084e0bff +0x231:  movzbl %al,%eax
084e0c02 +0x234:  mov    %eax,-0x8c(%ebp)
084e0c08 +0x23a:  mov    -0x1c(%ebp),%edx
084e0c0b +0x23d:  mov    -0x20(%ebp),%ecx
084e0c0e +0x240:  mov    %edx,%eax
084e0c10 +0x242:  add    %eax,%eax
084e0c12 +0x244:  add    %edx,%eax
084e0c14 +0x246:  shl    $0x2,%eax
084e0c17 +0x249:  movzwl 0x15(%eax,%ecx,1),%eax
084e0c1c +0x24e:  movzwl %ax,%eax
084e0c1f +0x251:  mov    %eax,-0x88(%ebp)
084e0c25 +0x257:  mov    -0x1c(%ebp),%edx
084e0c28 +0x25a:  mov    -0x20(%ebp),%ecx
084e0c2b +0x25d:  mov    %edx,%eax
084e0c2d +0x25f:  add    %eax,%eax
084e0c2f +0x261:  add    %edx,%eax
084e0c31 +0x263:  shl    $0x2,%eax
084e0c34 +0x266:  movzwl 0x13(%eax,%ecx,1),%eax
084e0c39 +0x26b:  movzwl %ax,%esi
084e0c3c +0x26e:  mov    -0x1c(%ebp),%edx
084e0c3f +0x271:  mov    -0x20(%ebp),%ecx
084e0c42 +0x274:  mov    %edx,%eax
084e0c44 +0x276:  add    %eax,%eax
084e0c46 +0x278:  add    %edx,%eax
084e0c48 +0x27a:  shl    $0x2,%eax
084e0c4b +0x27d:  movzwl 0x11(%eax,%ecx,1),%eax
084e0c50 +0x282:  movzwl %ax,%ebx
084e0c53 +0x285:  mov    -0x1c(%ebp),%edx
084e0c56 +0x288:  mov    -0x20(%ebp),%ecx
084e0c59 +0x28b:  mov    %edx,%eax
084e0c5b +0x28d:  add    %eax,%eax
084e0c5d +0x28f:  add    %edx,%eax
084e0c5f +0x291:  shl    $0x2,%eax
084e0c62 +0x294:  movzwl 0xf(%eax,%ecx,1),%eax
084e0c67 +0x299:  movzwl %ax,%edx
084e0c6a +0x29c:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084e0c6f +0x2a1:  mov    %edi,0x1c(%esp)
084e0c73 +0x2a5:  mov    -0x90(%ebp),%ecx
084e0c79 +0x2ab:  mov    %ecx,0x18(%esp)
084e0c7d +0x2af:  mov    -0x8c(%ebp),%ecx
084e0c83 +0x2b5:  mov    %ecx,0x14(%esp)
084e0c87 +0x2b9:  mov    -0x88(%ebp),%ecx
084e0c8d +0x2bf:  mov    %ecx,0x10(%esp)
084e0c91 +0x2c3:  mov    %esi,0xc(%esp)
084e0c95 +0x2c7:  mov    %ebx,0x8(%esp)
084e0c99 +0x2cb:  mov    %edx,0x4(%esp)
084e0c9d +0x2cf:  mov    %eax,(%esp)
084e0ca0 +0x2d2:  call   084eb854 <_GLOBAL__I__Z7getUserj+0x2806>  ; global constructors keyed to getUser(unsigned int)+0x2806
084e0ca5 +0x2d7:  mov    -0x1c(%ebp),%edx
084e0ca8 +0x2da:  mov    -0x20(%ebp),%ecx
084e0cab +0x2dd:  mov    %edx,%eax
084e0cad +0x2df:  add    %eax,%eax
084e0caf +0x2e1:  add    %edx,%eax
084e0cb1 +0x2e3:  shl    $0x2,%eax
084e0cb4 +0x2e6:  lea    (%ecx,%eax,1),%eax
084e0cb7 +0x2e9:  add    $0x18,%eax
084e0cba +0x2ec:  movzbl (%eax),%eax
084e0cbd +0x2ef:  movzbl %al,%eax
084e0cc0 +0x2f2:  mov    %eax,-0x84(%ebp)
084e0cc6 +0x2f8:  mov    -0x1c(%ebp),%edx
084e0cc9 +0x2fb:  mov    -0x20(%ebp),%ecx
084e0ccc +0x2fe:  mov    %edx,%eax
084e0cce +0x300:  add    %eax,%eax
084e0cd0 +0x302:  add    %edx,%eax
084e0cd2 +0x304:  shl    $0x2,%eax
084e0cd5 +0x307:  lea    (%ecx,%eax,1),%eax
084e0cd8 +0x30a:  add    $0x17,%eax
084e0cdb +0x30d:  movzbl (%eax),%eax
084e0cde +0x310:  movzbl %al,%eax
084e0ce1 +0x313:  mov    %eax,-0x80(%ebp)
084e0ce4 +0x316:  mov    -0x1c(%ebp),%edx
084e0ce7 +0x319:  mov    -0x20(%ebp),%ecx
084e0cea +0x31c:  mov    %edx,%eax
084e0cec +0x31e:  add    %eax,%eax
084e0cee +0x320:  add    %edx,%eax
084e0cf0 +0x322:  shl    $0x2,%eax
084e0cf3 +0x325:  movzwl 0x15(%eax,%ecx,1),%eax
084e0cf8 +0x32a:  movzwl %ax,%eax
084e0cfb +0x32d:  mov    %eax,-0x7c(%ebp)
084e0cfe +0x330:  mov    -0x1c(%ebp),%edx
084e0d01 +0x333:  mov    -0x20(%ebp),%ecx
084e0d04 +0x336:  mov    %edx,%eax
084e0d06 +0x338:  add    %eax,%eax
084e0d08 +0x33a:  add    %edx,%eax
084e0d0a +0x33c:  shl    $0x2,%eax
084e0d0d +0x33f:  movzwl 0x13(%eax,%ecx,1),%eax
084e0d12 +0x344:  movzwl %ax,%edi
084e0d15 +0x347:  mov    -0x1c(%ebp),%edx
084e0d18 +0x34a:  mov    -0x20(%ebp),%ecx
084e0d1b +0x34d:  mov    %edx,%eax
084e0d1d +0x34f:  add    %eax,%eax
084e0d1f +0x351:  add    %edx,%eax
084e0d21 +0x353:  shl    $0x2,%eax
084e0d24 +0x356:  movzwl 0x11(%eax,%ecx,1),%eax
084e0d29 +0x35b:  movzwl %ax,%esi
084e0d2c +0x35e:  mov    -0x1c(%ebp),%edx
084e0d2f +0x361:  mov    -0x20(%ebp),%ecx
084e0d32 +0x364:  mov    %edx,%eax
084e0d34 +0x366:  add    %eax,%eax
084e0d36 +0x368:  add    %edx,%eax
084e0d38 +0x36a:  shl    $0x2,%eax
084e0d3b +0x36d:  movzwl 0xf(%eax,%ecx,1),%eax
084e0d40 +0x372:  movzwl %ax,%ebx
084e0d43 +0x375:  movl   $0x0,0xc(%esp)
084e0d4b +0x37d:  movl   $0x4f8e,0x8(%esp)
084e0d53 +0x385:  movl   $&_ZZN16Inter_SetARSInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e0d5b +0x38d:  lea    -0x30(%ebp),%eax
084e0d5e +0x390:  mov    %eax,(%esp)
084e0d61 +0x393:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0d66 +0x398:  mov    -0x84(%ebp),%eax
084e0d6c +0x39e:  mov    %eax,0x1c(%esp)
084e0d70 +0x3a2:  mov    -0x80(%ebp),%ecx
084e0d73 +0x3a5:  mov    %ecx,0x18(%esp)
084e0d77 +0x3a9:  mov    -0x7c(%ebp),%eax
084e0d7a +0x3ac:  mov    %eax,0x14(%esp)
084e0d7e +0x3b0:  mov    %edi,0x10(%esp)
084e0d82 +0x3b4:  mov    %esi,0xc(%esp)
084e0d86 +0x3b8:  mov    %ebx,0x8(%esp)
084e0d8a +0x3bc:  movl   $"[ARS_INFO] MainType : %d (%d), SubType : %d(%d), ApplyFlag %d, IpCnt : %d",0x4(%esp)
084e0d92 +0x3c4:  lea    -0x30(%ebp),%eax
084e0d95 +0x3c7:  mov    %eax,(%esp)
084e0d98 +0x3ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0d9d +0x3cf:  addl   $0x1,-0x1c(%ebp)
084e0da1 +0x3d3:  mov    -0x20(%ebp),%eax
084e0da4 +0x3d6:  mov    0xa(%eax),%eax
084e0da7 +0x3d9:  cmp    -0x1c(%ebp),%eax
084e0daa +0x3dc:  setg   %al
084e0dad +0x3df:  test   %al,%al
084e0daf +0x3e1:  jne    084e0ad3 <+0x105>
084e0db5 +0x3e7:  mov    $0x0,%eax
084e0dba +0x3ec:  add    $0xac,%esp
084e0dc0 +0x3f2:  pop    %ebx
084e0dc1 +0x3f3:  pop    %esi
084e0dc2 +0x3f4:  pop    %edi
084e0dc3 +0x3f5:  pop    %ebp
084e0dc4 +0x3f6:  ret
084e0dc5 +0x3f7:  nop
```

## 反编译 C

```c
// Inter_SetARSInfo::dispatch_sig @ 0x84e09ce

/* Inter_SetARSInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetARSInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  int local_20;
  
  local_24 = param_3;
  if (*(char *)(param_3 + 0xe) == '\0') {
    WongWork::CAutoPunishRuleHackTypeMgr::reset(GlobalData::g_autoPunishRuleHackTypeMgr);
    cMyTrace::cMyTrace(local_74,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)",
                       0x4f5e,0);
    cMyTrace::operator()(local_74,"[ARS_INFO] Reset");
  }
  cVar1 = *(char *)(local_24 + 0xe);
  uVar8 = *(undefined4 *)(local_24 + 10);
  cMyTrace::cMyTrace(local_64,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)",
                     0x4f64,0);
  cMyTrace::operator()(local_64,"[ARS_INFO] Cnt : %d, State : %d",uVar8,(int)cVar1);
  if (*(int *)(local_24 + 10) < 0x65) {
    for (local_20 = 0; local_20 < *(int *)(local_24 + 10); local_20 = local_20 + 1) {
      if (*(short *)(local_20 * 0xc + 0xf + local_24) == 0) {
        WongWork::CAutoPunishRuleHackTypeMgr::setTotalTrade
                  ((uint)GlobalData::g_autoPunishRuleHackTypeMgr,
                   (ulonglong)
                   CONCAT24(*(undefined2 *)(local_20 * 0xc + 0x19 + local_24),
                            (uint)*(ushort *)(local_20 * 0xc + 0x11 + local_24)));
        uVar4 = *(ushort *)(local_20 * 0xc + 0x11 + local_24);
        uVar5 = *(ushort *)(local_20 * 0xc + 0x19 + local_24);
        cMyTrace::cMyTrace(local_44,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)"
                           ,0x4f82,0);
        cMyTrace::operator()
                  (local_44,"[ARS_INFO] TotalGold: %llu, TotalCount: %d",(uint)uVar5,(uint)uVar4);
      }
      else {
        WongWork::CAutoPunishRuleHackTypeMgr::setHackCnt
                  (GlobalData::g_autoPunishRuleHackTypeMgr,
                   *(undefined2 *)(local_20 * 0xc + 0xf + local_24),
                   *(undefined2 *)(local_20 * 0xc + 0x11 + local_24),
                   *(undefined2 *)(local_20 * 0xc + 0x13 + local_24),
                   *(undefined2 *)(local_20 * 0xc + 0x15 + local_24),
                   *(undefined1 *)(local_24 + local_20 * 0xc + 0x17),
                   *(undefined1 *)(local_24 + local_20 * 0xc + 0x18),
                   *(undefined2 *)(local_20 * 0xc + 0x19 + local_24));
        bVar2 = *(byte *)(local_24 + local_20 * 0xc + 0x18);
        bVar3 = *(byte *)(local_24 + local_20 * 0xc + 0x17);
        uVar4 = *(ushort *)(local_20 * 0xc + 0x15 + local_24);
        uVar5 = *(ushort *)(local_20 * 0xc + 0x13 + local_24);
        uVar6 = *(ushort *)(local_20 * 0xc + 0x11 + local_24);
        uVar7 = *(ushort *)(local_20 * 0xc + 0xf + local_24);
        cMyTrace::cMyTrace(local_34,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)"
                           ,0x4f8e,0);
        cMyTrace::operator()
                  (local_34,
                   "[ARS_INFO] MainType : %d (%d), SubType : %d(%d), ApplyFlag %d, IpCnt : %d",
                   (uint)uVar7,(uint)uVar6,(uint)uVar5,(uint)uVar4,(uint)bVar3,(uint)bVar2);
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_54,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)",
                       0x4f6b,0);
    cMyTrace::operator()(local_54,"[ARS_INFO] Cnt OverFlag(100)");
  }
  return 0;
}
```
