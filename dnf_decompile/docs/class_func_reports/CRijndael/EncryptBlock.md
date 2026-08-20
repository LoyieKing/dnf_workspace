# EncryptBlock

`_ZN9CRijndael12EncryptBlockEPKcPc`

`CRijndael::EncryptBlock(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b7636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b7636  _ZN9CRijndael12EncryptBlockEPKcPc
#           CRijndael::EncryptBlock(char const*, char*)
# range [0x080b7636, 0x080b7a1f]
080b7636 +0x000:  push   %ebp
080b7637 +0x001:  mov    %esp,%ebp
080b7639 +0x003:  push   %esi
080b763a +0x004:  push   %ebx
080b763b +0x005:  sub    $0x40,%esp
080b763e +0x008:  mov    0x8(%ebp),%eax
080b7641 +0x00b:  movzbl 0x4(%eax),%eax
080b7645 +0x00f:  xor    $0x1,%eax
080b7648 +0x012:  test   %al,%al
080b764a +0x014:  je     080b7656 <+0x20>
080b764c +0x016:  mov    $0x70000005,%eax
080b7651 +0x01b:  jmp    080b7a18 <+0x3e2>
080b7656 +0x020:  mov    0x8(%ebp),%eax
080b7659 +0x023:  mov    0x8(%eax),%eax
080b765c +0x026:  cmp    $0x10,%eax
080b765f +0x029:  jne    080b7684 <+0x4e>
080b7661 +0x02b:  mov    0x10(%ebp),%eax
080b7664 +0x02e:  mov    %eax,0x8(%esp)
080b7668 +0x032:  mov    0xc(%ebp),%eax
080b766b +0x035:  mov    %eax,0x4(%esp)
080b766f +0x039:  mov    0x8(%ebp),%eax
080b7672 +0x03c:  mov    %eax,(%esp)
080b7675 +0x03f:  call   080b6ba0 <_ZN9CRijndael15DefEncryptBlockEPKcPc>  ; CRijndael::DefEncryptBlock(char const*, char*)
080b767a +0x044:  mov    $0x6fffffff,%eax
080b767f +0x049:  jmp    080b7a18 <+0x3e2>
080b7684 +0x04e:  mov    0x8(%ebp),%eax
080b7687 +0x051:  mov    0x8(%eax),%eax
080b768a +0x054:  mov    %eax,%edx
080b768c +0x056:  sar    $0x1f,%edx
080b768f +0x059:  shr    $0x1e,%edx
080b7692 +0x05c:  lea    (%edx,%eax,1),%eax
080b7695 +0x05f:  sar    $0x2,%eax
080b7698 +0x062:  mov    %eax,-0x30(%ebp)
080b769b +0x065:  cmpl   $0x4,-0x30(%ebp)
080b769f +0x069:  je     080b76b5 <+0x7f>
080b76a1 +0x06b:  cmpl   $0x6,-0x30(%ebp)
080b76a5 +0x06f:  jne    080b76ae <+0x78>
080b76a7 +0x071:  mov    $0x1,%eax
080b76ac +0x076:  jmp    080b76b3 <+0x7d>
080b76ae +0x078:  mov    $0x2,%eax
080b76b3 +0x07d:  jmp    080b76ba <+0x84>
080b76b5 +0x07f:  mov    $0x0,%eax
080b76ba +0x084:  mov    %eax,-0x2c(%ebp)
080b76bd +0x087:  mov    -0x2c(%ebp),%eax
080b76c0 +0x08a:  shl    $0x2,%eax
080b76c3 +0x08d:  add    $0x1,%eax
080b76c6 +0x090:  mov    &_ZN9CRijndael9sm_shiftsE(,%eax,8),%eax
080b76cd +0x097:  mov    %eax,-0x28(%ebp)
080b76d0 +0x09a:  mov    -0x2c(%ebp),%eax
080b76d3 +0x09d:  add    %eax,%eax
080b76d5 +0x09f:  add    $0x1,%eax
080b76d8 +0x0a2:  shl    $0x4,%eax
080b76db +0x0a5:  mov    &_ZN9CRijndael9sm_shiftsE(%eax),%eax
080b76e1 +0x0ab:  mov    %eax,-0x24(%ebp)
080b76e4 +0x0ae:  mov    -0x2c(%ebp),%eax
080b76e7 +0x0b1:  shl    $0x5,%eax
080b76ea +0x0b4:  mov    &_ZN9CRijndael9sm_shiftsE+0x18(%eax),%eax
080b76f0 +0x0ba:  mov    %eax,-0x20(%ebp)
080b76f3 +0x0bd:  mov    0x8(%ebp),%eax
080b76f6 +0x0c0:  add    $0x45c,%eax
080b76fb +0x0c5:  mov    %eax,-0x14(%ebp)
080b76fe +0x0c8:  movl   $0x0,-0x1c(%ebp)
080b7705 +0x0cf:  jmp    080b778a <+0x154>
080b770a +0x0d4:  mov    0xc(%ebp),%eax
080b770d +0x0d7:  movzbl (%eax),%eax
080b7710 +0x0da:  movzbl %al,%eax
080b7713 +0x0dd:  mov    %eax,%edx
080b7715 +0x0df:  shl    $0x18,%edx
080b7718 +0x0e2:  mov    -0x14(%ebp),%eax
080b771b +0x0e5:  mov    %edx,(%eax)
080b771d +0x0e7:  addl   $0x1,0xc(%ebp)
080b7721 +0x0eb:  mov    -0x14(%ebp),%eax
080b7724 +0x0ee:  mov    (%eax),%edx
080b7726 +0x0f0:  mov    0xc(%ebp),%eax
080b7729 +0x0f3:  movzbl (%eax),%eax
080b772c +0x0f6:  movzbl %al,%eax
080b772f +0x0f9:  shl    $0x10,%eax
080b7732 +0x0fc:  or     %eax,%edx
080b7734 +0x0fe:  mov    -0x14(%ebp),%eax
080b7737 +0x101:  mov    %edx,(%eax)
080b7739 +0x103:  addl   $0x1,0xc(%ebp)
080b773d +0x107:  mov    -0x14(%ebp),%eax
080b7740 +0x10a:  mov    (%eax),%edx
080b7742 +0x10c:  mov    0xc(%ebp),%eax
080b7745 +0x10f:  movzbl (%eax),%eax
080b7748 +0x112:  movzbl %al,%eax
080b774b +0x115:  shl    $0x8,%eax
080b774e +0x118:  or     %eax,%edx
080b7750 +0x11a:  mov    -0x14(%ebp),%eax
080b7753 +0x11d:  mov    %edx,(%eax)
080b7755 +0x11f:  addl   $0x1,0xc(%ebp)
080b7759 +0x123:  mov    -0x14(%ebp),%eax
080b775c +0x126:  mov    (%eax),%ecx
080b775e +0x128:  mov    0xc(%ebp),%edx
080b7761 +0x12b:  movzbl (%edx),%edx
080b7764 +0x12e:  movzbl %dl,%edx
080b7767 +0x131:  or     %ecx,%edx
080b7769 +0x133:  mov    %edx,(%eax)
080b776b +0x135:  addl   $0x4,-0x14(%ebp)
080b776f +0x139:  addl   $0x1,0xc(%ebp)
080b7773 +0x13d:  mov    (%eax),%ecx
080b7775 +0x13f:  mov    -0x1c(%ebp),%ebx
080b7778 +0x142:  mov    0x8(%ebp),%edx
080b777b +0x145:  add    $0xc,%ebx
080b777e +0x148:  mov    0x8(%edx,%ebx,4),%edx
080b7782 +0x14c:  xor    %ecx,%edx
080b7784 +0x14e:  mov    %edx,(%eax)
080b7786 +0x150:  addl   $0x1,-0x1c(%ebp)
080b778a +0x154:  mov    -0x1c(%ebp),%eax
080b778d +0x157:  cmp    -0x30(%ebp),%eax
080b7790 +0x15a:  setl   %al
080b7793 +0x15d:  test   %al,%al
080b7795 +0x15f:  jne    080b770a <+0xd4>
080b779b +0x165:  movl   $0x1,-0xc(%ebp)
080b77a2 +0x16c:  jmp    080b78c4 <+0x28e>
080b77a7 +0x171:  movl   $0x0,-0x1c(%ebp)
080b77ae +0x178:  jmp    080b7887 <+0x251>
080b77b3 +0x17d:  mov    -0x1c(%ebp),%ebx
080b77b6 +0x180:  mov    -0x1c(%ebp),%edx
080b77b9 +0x183:  mov    0x8(%ebp),%eax
080b77bc +0x186:  add    $0x114,%edx
080b77c2 +0x18c:  mov    0xc(%eax,%edx,4),%eax
080b77c6 +0x190:  shr    $0x18,%eax
080b77c9 +0x193:  mov    &_ZN9CRijndael5sm_T1E(,%eax,4),%ecx
080b77d0 +0x19a:  mov    -0x28(%ebp),%eax
080b77d3 +0x19d:  mov    -0x1c(%ebp),%edx
080b77d6 +0x1a0:  lea    (%edx,%eax,1),%eax
080b77d9 +0x1a3:  mov    %eax,%edx
080b77db +0x1a5:  sar    $0x1f,%edx
080b77de +0x1a8:  idivl  -0x30(%ebp)
080b77e1 +0x1ab:  mov    0x8(%ebp),%eax
080b77e4 +0x1ae:  add    $0x114,%edx
080b77ea +0x1b4:  mov    0xc(%eax,%edx,4),%eax
080b77ee +0x1b8:  sar    $0x10,%eax
080b77f1 +0x1bb:  and    $0xff,%eax
080b77f6 +0x1c0:  mov    &_ZN9CRijndael5sm_T2E(,%eax,4),%eax
080b77fd +0x1c7:  xor    %eax,%ecx
080b77ff +0x1c9:  mov    -0x24(%ebp),%eax
080b7802 +0x1cc:  mov    -0x1c(%ebp),%edx
080b7805 +0x1cf:  lea    (%edx,%eax,1),%eax
080b7808 +0x1d2:  mov    %eax,%edx
080b780a +0x1d4:  sar    $0x1f,%edx
080b780d +0x1d7:  idivl  -0x30(%ebp)
080b7810 +0x1da:  mov    0x8(%ebp),%eax
080b7813 +0x1dd:  add    $0x114,%edx
080b7819 +0x1e3:  mov    0xc(%eax,%edx,4),%eax
080b781d +0x1e7:  sar    $0x8,%eax
080b7820 +0x1ea:  and    $0xff,%eax
080b7825 +0x1ef:  mov    &_ZN9CRijndael5sm_T3E(,%eax,4),%eax
080b782c +0x1f6:  xor    %eax,%ecx
080b782e +0x1f8:  mov    -0x20(%ebp),%eax
080b7831 +0x1fb:  mov    -0x1c(%ebp),%edx
080b7834 +0x1fe:  lea    (%edx,%eax,1),%eax
080b7837 +0x201:  mov    %eax,%edx
080b7839 +0x203:  sar    $0x1f,%edx
080b783c +0x206:  idivl  -0x30(%ebp)
080b783f +0x209:  mov    0x8(%ebp),%eax
080b7842 +0x20c:  add    $0x114,%edx
080b7848 +0x212:  mov    0xc(%eax,%edx,4),%eax
080b784c +0x216:  and    $0xff,%eax
080b7851 +0x21b:  mov    &_ZN9CRijndael5sm_T4E(,%eax,4),%eax
080b7858 +0x222:  mov    %ecx,%esi
080b785a +0x224:  xor    %eax,%esi
080b785c +0x226:  mov    -0xc(%ebp),%ecx
080b785f +0x229:  mov    -0x1c(%ebp),%edx
080b7862 +0x22c:  mov    0x8(%ebp),%eax
080b7865 +0x22f:  shl    $0x3,%ecx
080b7868 +0x232:  lea    (%ecx,%edx,1),%edx
080b786b +0x235:  add    $0xc,%edx
080b786e +0x238:  mov    0x8(%eax,%edx,4),%eax
080b7872 +0x23c:  mov    %esi,%ecx
080b7874 +0x23e:  xor    %eax,%ecx
080b7876 +0x240:  mov    0x8(%ebp),%eax
080b7879 +0x243:  lea    0x10c(%ebx),%edx
080b787f +0x249:  mov    %ecx,0xc(%eax,%edx,4)
080b7883 +0x24d:  addl   $0x1,-0x1c(%ebp)
080b7887 +0x251:  mov    -0x1c(%ebp),%eax
080b788a +0x254:  cmp    -0x30(%ebp),%eax
080b788d +0x257:  setl   %al
080b7890 +0x25a:  test   %al,%al
080b7892 +0x25c:  jne    080b77b3 <+0x17d>
080b7898 +0x262:  mov    -0x30(%ebp),%eax
080b789b +0x265:  shl    $0x2,%eax
080b789e +0x268:  mov    0x8(%ebp),%edx
080b78a1 +0x26b:  lea    0x43c(%edx),%ecx
080b78a7 +0x271:  mov    0x8(%ebp),%edx
080b78aa +0x274:  add    $0x45c,%edx
080b78b0 +0x27a:  mov    %eax,0x8(%esp)
080b78b4 +0x27e:  mov    %ecx,0x4(%esp)
080b78b8 +0x282:  mov    %edx,(%esp)
080b78bb +0x285:  call   0807d8a0 <_init+0x198>
080b78c0 +0x28a:  addl   $0x1,-0xc(%ebp)
080b78c4 +0x28e:  mov    0x8(%ebp),%eax
080b78c7 +0x291:  mov    0x3d8(%eax),%eax
080b78cd +0x297:  cmp    -0xc(%ebp),%eax
080b78d0 +0x29a:  setg   %al
080b78d3 +0x29d:  test   %al,%al
080b78d5 +0x29f:  jne    080b77a7 <+0x171>
080b78db +0x2a5:  movl   $0x0,-0x1c(%ebp)
080b78e2 +0x2ac:  movl   $0x0,-0x10(%ebp)
080b78e9 +0x2b3:  jmp    080b7a02 <+0x3cc>
080b78ee +0x2b8:  mov    0x8(%ebp),%eax
080b78f1 +0x2bb:  mov    0x3d8(%eax),%ecx
080b78f7 +0x2c1:  mov    -0x1c(%ebp),%edx
080b78fa +0x2c4:  mov    0x8(%ebp),%eax
080b78fd +0x2c7:  shl    $0x3,%ecx
080b7900 +0x2ca:  lea    (%ecx,%edx,1),%edx
080b7903 +0x2cd:  add    $0xc,%edx
080b7906 +0x2d0:  mov    0x8(%eax,%edx,4),%eax
080b790a +0x2d4:  mov    %eax,-0x18(%ebp)
080b790d +0x2d7:  mov    -0x10(%ebp),%eax
080b7910 +0x2da:  add    0x10(%ebp),%eax
080b7913 +0x2dd:  mov    -0x1c(%ebp),%ecx
080b7916 +0x2e0:  mov    0x8(%ebp),%edx
080b7919 +0x2e3:  add    $0x114,%ecx
080b791f +0x2e9:  mov    0xc(%edx,%ecx,4),%edx
080b7923 +0x2ed:  shr    $0x18,%edx
080b7926 +0x2f0:  movzbl &_ZN9CRijndael4sm_SE(%edx),%ecx
080b792d +0x2f7:  mov    -0x18(%ebp),%edx
080b7930 +0x2fa:  sar    $0x18,%edx
080b7933 +0x2fd:  xor    %ecx,%edx
080b7935 +0x2ff:  mov    %dl,(%eax)
080b7937 +0x301:  addl   $0x1,-0x10(%ebp)
080b793b +0x305:  mov    -0x10(%ebp),%eax
080b793e +0x308:  mov    %eax,%ecx
080b7940 +0x30a:  add    0x10(%ebp),%ecx
080b7943 +0x30d:  mov    -0x28(%ebp),%eax
080b7946 +0x310:  mov    -0x1c(%ebp),%edx
080b7949 +0x313:  lea    (%edx,%eax,1),%eax
080b794c +0x316:  mov    %eax,%edx
080b794e +0x318:  sar    $0x1f,%edx
080b7951 +0x31b:  idivl  -0x30(%ebp)
080b7954 +0x31e:  mov    0x8(%ebp),%eax
080b7957 +0x321:  add    $0x114,%edx
080b795d +0x327:  mov    0xc(%eax,%edx,4),%eax
080b7961 +0x32b:  sar    $0x10,%eax
080b7964 +0x32e:  and    $0xff,%eax
080b7969 +0x333:  movzbl &_ZN9CRijndael4sm_SE(%eax),%edx
080b7970 +0x33a:  mov    -0x18(%ebp),%eax
080b7973 +0x33d:  sar    $0x10,%eax
080b7976 +0x340:  xor    %edx,%eax
080b7978 +0x342:  mov    %al,(%ecx)
080b797a +0x344:  addl   $0x1,-0x10(%ebp)
080b797e +0x348:  mov    -0x10(%ebp),%eax
080b7981 +0x34b:  mov    %eax,%ecx
080b7983 +0x34d:  add    0x10(%ebp),%ecx
080b7986 +0x350:  mov    -0x24(%ebp),%eax
080b7989 +0x353:  mov    -0x1c(%ebp),%edx
080b798c +0x356:  lea    (%edx,%eax,1),%eax
080b798f +0x359:  mov    %eax,%edx
080b7991 +0x35b:  sar    $0x1f,%edx
080b7994 +0x35e:  idivl  -0x30(%ebp)
080b7997 +0x361:  mov    0x8(%ebp),%eax
080b799a +0x364:  add    $0x114,%edx
080b79a0 +0x36a:  mov    0xc(%eax,%edx,4),%eax
080b79a4 +0x36e:  sar    $0x8,%eax
080b79a7 +0x371:  and    $0xff,%eax
080b79ac +0x376:  movzbl &_ZN9CRijndael4sm_SE(%eax),%edx
080b79b3 +0x37d:  mov    -0x18(%ebp),%eax
080b79b6 +0x380:  sar    $0x8,%eax
080b79b9 +0x383:  xor    %edx,%eax
080b79bb +0x385:  mov    %al,(%ecx)
080b79bd +0x387:  addl   $0x1,-0x10(%ebp)
080b79c1 +0x38b:  mov    -0x10(%ebp),%eax
080b79c4 +0x38e:  mov    %eax,%ecx
080b79c6 +0x390:  add    0x10(%ebp),%ecx
080b79c9 +0x393:  mov    -0x20(%ebp),%eax
080b79cc +0x396:  mov    -0x1c(%ebp),%edx
080b79cf +0x399:  lea    (%edx,%eax,1),%eax
080b79d2 +0x39c:  mov    %eax,%edx
080b79d4 +0x39e:  sar    $0x1f,%edx
080b79d7 +0x3a1:  idivl  -0x30(%ebp)
080b79da +0x3a4:  mov    0x8(%ebp),%eax
080b79dd +0x3a7:  add    $0x114,%edx
080b79e3 +0x3ad:  mov    0xc(%eax,%edx,4),%eax
080b79e7 +0x3b1:  and    $0xff,%eax
080b79ec +0x3b6:  movzbl &_ZN9CRijndael4sm_SE(%eax),%edx
080b79f3 +0x3bd:  mov    -0x18(%ebp),%eax
080b79f6 +0x3c0:  xor    %edx,%eax
080b79f8 +0x3c2:  mov    %al,(%ecx)
080b79fa +0x3c4:  addl   $0x1,-0x10(%ebp)
080b79fe +0x3c8:  addl   $0x1,-0x1c(%ebp)
080b7a02 +0x3cc:  mov    -0x1c(%ebp),%eax
080b7a05 +0x3cf:  cmp    -0x30(%ebp),%eax
080b7a08 +0x3d2:  setl   %al
080b7a0b +0x3d5:  test   %al,%al
080b7a0d +0x3d7:  jne    080b78ee <+0x2b8>
080b7a13 +0x3dd:  mov    $0x6fffffff,%eax
080b7a18 +0x3e2:  add    $0x40,%esp
080b7a1b +0x3e5:  pop    %ebx
080b7a1c +0x3e6:  pop    %esi
080b7a1d +0x3e7:  pop    %ebp
080b7a1e +0x3e8:  ret
080b7a1f +0x3e9:  nop
```

## 反编译 C

```c
// CRijndael::EncryptBlock @ 0x80b7636

/* CRijndael::EncryptBlock(char const*, char*) */

undefined4 __thiscall CRijndael::EncryptBlock(CRijndael *this,char *param_1,char *param_2)

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
      DefEncryptBlock(this,param_1,param_2);
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
      iVar1 = *(int *)(sm_shifts + (iVar5 * 4 + 1) * 8);
      iVar2 = *(int *)(sm_shifts + (iVar5 * 2 + 1) * 0x10);
      iVar5 = *(int *)(sm_shifts + iVar5 * 0x20 + 0x18);
      local_18 = this + 0x45c;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        *(uint *)local_18 = (uint)(byte)*param_1 << 0x18;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[1] << 0x10;
        *(uint *)local_18 = *(uint *)local_18 | (uint)(byte)param_1[2] << 8;
        *(uint *)local_18 = (uint)(byte)param_1[3] | *(uint *)local_18;
        param_1 = param_1 + 4;
        *(uint *)local_18 = *(uint *)(this + (local_20 + 0xc) * 4 + 8) ^ *(uint *)local_18;
        local_18 = local_18 + 4;
      }
      for (local_10 = 1; local_10 < *(int *)(this + 0x3d8); local_10 = local_10 + 1) {
        for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
          *(uint *)(this + (local_20 + 0x10c) * 4 + 0xc) =
               *(uint *)(sm_T1 + (*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18) * 4) ^
               *(uint *)(sm_T2 + (*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >>
                                  0x10 & 0xffU) * 4) ^
               *(uint *)(sm_T3 + (*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >>
                                  8 & 0xffU) * 4) ^
               *(uint *)(sm_T4 + (*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) &
                                 0xff) * 4) ^
               *(uint *)(this + (local_10 * 8 + local_20 + 0xc) * 4 + 8);
        }
        memcpy(this + 0x45c,this + 0x43c,iVar4 << 2);
      }
      local_14 = 0;
      for (local_20 = 0; local_20 < iVar4; local_20 = local_20 + 1) {
        uVar3 = *(undefined4 *)(this + (*(int *)(this + 0x3d8) * 8 + local_20 + 0xc) * 4 + 8);
        param_2[local_14] =
             (byte)((uint)uVar3 >> 0x18) ^
             sm_S[*(uint *)(this + (local_20 + 0x114) * 4 + 0xc) >> 0x18];
        param_2[local_14 + 1] =
             (byte)((uint)uVar3 >> 0x10) ^
             sm_S[*(int *)(this + ((local_20 + iVar1) % iVar4 + 0x114) * 4 + 0xc) >> 0x10 & 0xff];
        param_2[local_14 + 2] =
             (byte)((uint)uVar3 >> 8) ^
             sm_S[*(int *)(this + ((local_20 + iVar2) % iVar4 + 0x114) * 4 + 0xc) >> 8 & 0xff];
        param_2[local_14 + 3] =
             (byte)uVar3 ^
             sm_S[*(uint *)(this + ((local_20 + iVar5) % iVar4 + 0x114) * 4 + 0xc) & 0xff];
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
