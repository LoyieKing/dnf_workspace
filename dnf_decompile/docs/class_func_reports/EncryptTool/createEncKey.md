# createEncKey

`_ZN11EncryptTool12createEncKeyEv`

`EncryptTool::createEncKey()`

| 类 | 地址 |
|---|---|
| `EncryptTool` | `0x0848d5b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d5b0  _ZN11EncryptTool12createEncKeyEv
#           EncryptTool::createEncKey()
# range [0x0848d5b0, 0x0848d949]
0848d5b0 +0x000:  push   %ebp
0848d5b1 +0x001:  mov    %esp,%ebp
0848d5b3 +0x003:  sub    $0x38,%esp
0848d5b6 +0x006:  movl   $0x0,(%esp)
0848d5bd +0x00d:  call   0807d750 <_init+0x48>
0848d5c2 +0x012:  mov    %eax,-0xc(%ebp)
0848d5c5 +0x015:  mov    -0xc(%ebp),%eax
0848d5c8 +0x018:  mov    %eax,-0x10(%ebp)
0848d5cb +0x01b:  mov    -0x10(%ebp),%eax
0848d5ce +0x01e:  mov    %eax,%edx
0848d5d0 +0x020:  and    $0xf,%edx
0848d5d3 +0x023:  mov    0x8(%ebp),%eax
0848d5d6 +0x026:  mov    %edx,0x200(%eax)
0848d5dc +0x02c:  mov    0x8(%ebp),%eax
0848d5df +0x02f:  mov    0x200(%eax),%eax
0848d5e5 +0x035:  mov    %eax,-0x10(%ebp)
0848d5e8 +0x038:  lea    -0x10(%ebp),%eax
0848d5eb +0x03b:  mov    %eax,(%esp)
0848d5ee +0x03e:  call   0848d51a <_ZN10Encryption8SeedRandERj>  ; Encryption::SeedRand(unsigned int&)
0848d5f3 +0x043:  mov    0x8(%ebp),%eax
0848d5f6 +0x046:  mov    0x200(%eax),%ecx
0848d5fc +0x04c:  mov    0x8(%ebp),%eax
0848d5ff +0x04f:  movzbl 0x9(%eax),%eax
0848d603 +0x053:  mov    %eax,%edx
0848d605 +0x055:  mov    0x8(%ebp),%eax
0848d608 +0x058:  mov    0x200(%eax),%eax
0848d60e +0x05e:  lea    (%edx,%eax,1),%eax
0848d611 +0x061:  add    $0x5,%eax
0848d614 +0x064:  mov    %eax,%edx
0848d616 +0x066:  mov    0x8(%ebp),%eax
0848d619 +0x069:  shl    $0x5,%ecx
0848d61c +0x06c:  mov    %dl,(%ecx,%eax,1)
0848d61f +0x06f:  mov    0x8(%ebp),%eax
0848d622 +0x072:  mov    0x200(%eax),%ecx
0848d628 +0x078:  mov    0x8(%ebp),%eax
0848d62b +0x07b:  movzbl 0x28(%eax),%eax
0848d62f +0x07f:  mov    %eax,%edx
0848d631 +0x081:  mov    0x8(%ebp),%eax
0848d634 +0x084:  mov    0x200(%eax),%eax
0848d63a +0x08a:  lea    (%edx,%eax,1),%eax
0848d63d +0x08d:  add    $0x2,%eax
0848d640 +0x090:  mov    0x8(%ebp),%edx
0848d643 +0x093:  shl    $0x5,%ecx
0848d646 +0x096:  add    %ecx,%edx
0848d648 +0x098:  add    $0x1,%edx
0848d64b +0x09b:  mov    %al,(%edx)
0848d64d +0x09d:  mov    0x8(%ebp),%eax
0848d650 +0x0a0:  mov    0x200(%eax),%ecx
0848d656 +0x0a6:  mov    0x8(%ebp),%eax
0848d659 +0x0a9:  movzbl 0x47(%eax),%eax
0848d65d +0x0ad:  mov    %eax,%edx
0848d65f +0x0af:  mov    0x8(%ebp),%eax
0848d662 +0x0b2:  mov    0x200(%eax),%eax
0848d668 +0x0b8:  lea    (%edx,%eax,1),%eax
0848d66b +0x0bb:  add    $0x4,%eax
0848d66e +0x0be:  mov    %eax,%edx
0848d670 +0x0c0:  mov    0x8(%ebp),%eax
0848d673 +0x0c3:  shl    $0x4,%ecx
0848d676 +0x0c6:  add    $0x1,%ecx
0848d679 +0x0c9:  mov    %dl,(%eax,%ecx,2)
0848d67c +0x0cc:  mov    0x8(%ebp),%eax
0848d67f +0x0cf:  mov    0x200(%eax),%ecx
0848d685 +0x0d5:  mov    0x8(%ebp),%eax
0848d688 +0x0d8:  movzbl 0x66(%eax),%eax
0848d68c +0x0dc:  mov    %eax,%edx
0848d68e +0x0de:  mov    0x8(%ebp),%eax
0848d691 +0x0e1:  mov    0x200(%eax),%eax
0848d697 +0x0e7:  lea    (%edx,%eax,1),%eax
0848d69a +0x0ea:  add    $0x2,%eax
0848d69d +0x0ed:  mov    0x8(%ebp),%edx
0848d6a0 +0x0f0:  shl    $0x5,%ecx
0848d6a3 +0x0f3:  add    %ecx,%edx
0848d6a5 +0x0f5:  add    $0x3,%edx
0848d6a8 +0x0f8:  mov    %al,(%edx)
0848d6aa +0x0fa:  mov    0x8(%ebp),%eax
0848d6ad +0x0fd:  mov    0x200(%eax),%ecx
0848d6b3 +0x103:  mov    0x8(%ebp),%eax
0848d6b6 +0x106:  movzbl 0x85(%eax),%eax
0848d6bd +0x10d:  mov    %eax,%edx
0848d6bf +0x10f:  mov    0x8(%ebp),%eax
0848d6c2 +0x112:  mov    0x200(%eax),%eax
0848d6c8 +0x118:  lea    (%edx,%eax,1),%eax
0848d6cb +0x11b:  mov    %eax,%edx
0848d6cd +0x11d:  mov    0x8(%ebp),%eax
0848d6d0 +0x120:  shl    $0x3,%ecx
0848d6d3 +0x123:  add    $0x1,%ecx
0848d6d6 +0x126:  mov    %dl,(%eax,%ecx,4)
0848d6d9 +0x129:  mov    0x8(%ebp),%eax
0848d6dc +0x12c:  mov    0x200(%eax),%ecx
0848d6e2 +0x132:  mov    0x8(%ebp),%eax
0848d6e5 +0x135:  movzbl 0xa4(%eax),%eax
0848d6ec +0x13c:  mov    %eax,%edx
0848d6ee +0x13e:  mov    0x8(%ebp),%eax
0848d6f1 +0x141:  mov    0x200(%eax),%eax
0848d6f7 +0x147:  lea    (%edx,%eax,1),%eax
0848d6fa +0x14a:  add    $0x7,%eax
0848d6fd +0x14d:  mov    0x8(%ebp),%edx
0848d700 +0x150:  shl    $0x5,%ecx
0848d703 +0x153:  add    %ecx,%edx
0848d705 +0x155:  add    $0x5,%edx
0848d708 +0x158:  mov    %al,(%edx)
0848d70a +0x15a:  mov    0x8(%ebp),%eax
0848d70d +0x15d:  mov    0x200(%eax),%ecx
0848d713 +0x163:  mov    0x8(%ebp),%eax
0848d716 +0x166:  movzbl 0xc3(%eax),%eax
0848d71d +0x16d:  mov    %eax,%edx
0848d71f +0x16f:  mov    0x8(%ebp),%eax
0848d722 +0x172:  mov    0x200(%eax),%eax
0848d728 +0x178:  lea    (%edx,%eax,1),%eax
0848d72b +0x17b:  add    $0x2,%eax
0848d72e +0x17e:  mov    0x8(%ebp),%edx
0848d731 +0x181:  shl    $0x5,%ecx
0848d734 +0x184:  add    %ecx,%edx
0848d736 +0x186:  add    $0x6,%edx
0848d739 +0x189:  mov    %al,(%edx)
0848d73b +0x18b:  mov    0x8(%ebp),%eax
0848d73e +0x18e:  mov    0x200(%eax),%ecx
0848d744 +0x194:  mov    0x8(%ebp),%eax
0848d747 +0x197:  movzbl 0xe2(%eax),%eax
0848d74e +0x19e:  mov    %eax,%edx
0848d750 +0x1a0:  mov    0x8(%ebp),%eax
0848d753 +0x1a3:  mov    0x200(%eax),%eax
0848d759 +0x1a9:  lea    (%edx,%eax,1),%eax
0848d75c +0x1ac:  add    $0x6,%eax
0848d75f +0x1af:  mov    0x8(%ebp),%edx
0848d762 +0x1b2:  shl    $0x5,%ecx
0848d765 +0x1b5:  add    %ecx,%edx
0848d767 +0x1b7:  add    $0x7,%edx
0848d76a +0x1ba:  mov    %al,(%edx)
0848d76c +0x1bc:  mov    0x8(%ebp),%eax
0848d76f +0x1bf:  mov    0x200(%eax),%ecx
0848d775 +0x1c5:  mov    0x8(%ebp),%eax
0848d778 +0x1c8:  movzbl 0x101(%eax),%eax
0848d77f +0x1cf:  mov    %eax,%edx
0848d781 +0x1d1:  mov    0x8(%ebp),%eax
0848d784 +0x1d4:  mov    0x200(%eax),%eax
0848d78a +0x1da:  lea    (%edx,%eax,1),%eax
0848d78d +0x1dd:  add    $0x3,%eax
0848d790 +0x1e0:  mov    %eax,%edx
0848d792 +0x1e2:  mov    0x8(%ebp),%eax
0848d795 +0x1e5:  shl    $0x2,%ecx
0848d798 +0x1e8:  add    $0x1,%ecx
0848d79b +0x1eb:  mov    %dl,(%eax,%ecx,8)
0848d79e +0x1ee:  mov    0x8(%ebp),%eax
0848d7a1 +0x1f1:  mov    0x200(%eax),%ecx
0848d7a7 +0x1f7:  mov    0x8(%ebp),%eax
0848d7aa +0x1fa:  movzbl 0x120(%eax),%eax
0848d7b1 +0x201:  mov    %eax,%edx
0848d7b3 +0x203:  mov    0x8(%ebp),%eax
0848d7b6 +0x206:  mov    0x200(%eax),%eax
0848d7bc +0x20c:  lea    (%edx,%eax,1),%eax
0848d7bf +0x20f:  add    $0x2,%eax
0848d7c2 +0x212:  mov    0x8(%ebp),%edx
0848d7c5 +0x215:  shl    $0x5,%ecx
0848d7c8 +0x218:  add    %ecx,%edx
0848d7ca +0x21a:  add    $0x9,%edx
0848d7cd +0x21d:  mov    %al,(%edx)
0848d7cf +0x21f:  mov    0x8(%ebp),%eax
0848d7d2 +0x222:  mov    0x200(%eax),%ecx
0848d7d8 +0x228:  mov    0x8(%ebp),%eax
0848d7db +0x22b:  movzbl 0x145(%eax),%eax
0848d7e2 +0x232:  mov    %eax,%edx
0848d7e4 +0x234:  mov    0x8(%ebp),%eax
0848d7e7 +0x237:  mov    0x200(%eax),%eax
0848d7ed +0x23d:  lea    (%edx,%eax,1),%eax
0848d7f0 +0x240:  add    $0x2,%eax
0848d7f3 +0x243:  mov    0x8(%ebp),%edx
0848d7f6 +0x246:  shl    $0x5,%ecx
0848d7f9 +0x249:  add    %ecx,%edx
0848d7fb +0x24b:  add    $0xa,%edx
0848d7fe +0x24e:  mov    %al,(%edx)
0848d800 +0x250:  mov    0x8(%ebp),%eax
0848d803 +0x253:  mov    0x200(%eax),%ecx
0848d809 +0x259:  mov    0x8(%ebp),%eax
0848d80c +0x25c:  movzbl 0x164(%eax),%eax
0848d813 +0x263:  mov    %eax,%edx
0848d815 +0x265:  mov    0x8(%ebp),%eax
0848d818 +0x268:  mov    0x200(%eax),%eax
0848d81e +0x26e:  lea    (%edx,%eax,1),%eax
0848d821 +0x271:  mov    0x8(%ebp),%edx
0848d824 +0x274:  shl    $0x5,%ecx
0848d827 +0x277:  add    %ecx,%edx
0848d829 +0x279:  add    $0xb,%edx
0848d82c +0x27c:  mov    %al,(%edx)
0848d82e +0x27e:  mov    0x8(%ebp),%eax
0848d831 +0x281:  mov    0x200(%eax),%ecx
0848d837 +0x287:  mov    0x8(%ebp),%eax
0848d83a +0x28a:  movzbl 0x183(%eax),%eax
0848d841 +0x291:  mov    %eax,%edx
0848d843 +0x293:  mov    0x8(%ebp),%eax
0848d846 +0x296:  mov    0x200(%eax),%eax
0848d84c +0x29c:  lea    (%edx,%eax,1),%eax
0848d84f +0x29f:  add    $0x7,%eax
0848d852 +0x2a2:  mov    0x8(%ebp),%edx
0848d855 +0x2a5:  shl    $0x5,%ecx
0848d858 +0x2a8:  add    %ecx,%edx
0848d85a +0x2aa:  add    $0xc,%edx
0848d85d +0x2ad:  mov    %al,(%edx)
0848d85f +0x2af:  mov    0x8(%ebp),%eax
0848d862 +0x2b2:  mov    0x200(%eax),%ecx
0848d868 +0x2b8:  mov    0x8(%ebp),%eax
0848d86b +0x2bb:  movzbl 0x1a2(%eax),%eax
0848d872 +0x2c2:  mov    %eax,%edx
0848d874 +0x2c4:  mov    0x8(%ebp),%eax
0848d877 +0x2c7:  mov    0x200(%eax),%eax
0848d87d +0x2cd:  lea    (%edx,%eax,1),%eax
0848d880 +0x2d0:  add    $0x2,%eax
0848d883 +0x2d3:  mov    0x8(%ebp),%edx
0848d886 +0x2d6:  shl    $0x5,%ecx
0848d889 +0x2d9:  add    %ecx,%edx
0848d88b +0x2db:  add    $0xd,%edx
0848d88e +0x2de:  mov    %al,(%edx)
0848d890 +0x2e0:  mov    0x8(%ebp),%eax
0848d893 +0x2e3:  mov    0x200(%eax),%ecx
0848d899 +0x2e9:  mov    0x8(%ebp),%eax
0848d89c +0x2ec:  movzbl 0x1c1(%eax),%eax
0848d8a3 +0x2f3:  mov    %eax,%edx
0848d8a5 +0x2f5:  mov    0x8(%ebp),%eax
0848d8a8 +0x2f8:  mov    0x200(%eax),%eax
0848d8ae +0x2fe:  lea    (%edx,%eax,1),%eax
0848d8b1 +0x301:  add    $0x6,%eax
0848d8b4 +0x304:  mov    0x8(%ebp),%edx
0848d8b7 +0x307:  shl    $0x5,%ecx
0848d8ba +0x30a:  add    %ecx,%edx
0848d8bc +0x30c:  add    $0xe,%edx
0848d8bf +0x30f:  mov    %al,(%edx)
0848d8c1 +0x311:  mov    0x8(%ebp),%eax
0848d8c4 +0x314:  mov    0x200(%eax),%ecx
0848d8ca +0x31a:  mov    0x8(%ebp),%eax
0848d8cd +0x31d:  movzbl 0x1e0(%eax),%eax
0848d8d4 +0x324:  mov    %eax,%edx
0848d8d6 +0x326:  mov    0x8(%ebp),%eax
0848d8d9 +0x329:  mov    0x200(%eax),%eax
0848d8df +0x32f:  lea    (%edx,%eax,1),%eax
0848d8e2 +0x332:  add    $0x3,%eax
0848d8e5 +0x335:  mov    0x8(%ebp),%edx
0848d8e8 +0x338:  shl    $0x5,%ecx
0848d8eb +0x33b:  add    %ecx,%edx
0848d8ed +0x33d:  add    $0xf,%edx
0848d8f0 +0x340:  mov    %al,(%edx)
0848d8f2 +0x342:  mov    0x8(%ebp),%eax
0848d8f5 +0x345:  mov    0x200(%eax),%eax
0848d8fb +0x34b:  shl    $0x5,%eax
0848d8fe +0x34e:  add    0x8(%ebp),%eax
0848d901 +0x351:  mov    %eax,%edx
0848d903 +0x353:  mov    0x8(%ebp),%eax
0848d906 +0x356:  mov    0x204(%eax),%eax
0848d90c +0x35c:  movl   $0x0,0x1c(%esp)
0848d914 +0x364:  movl   $0x0,0x18(%esp)
0848d91c +0x36c:  movl   $0x10,0x14(%esp)
0848d924 +0x374:  movl   $0x10,0x10(%esp)
0848d92c +0x37c:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0848d934 +0x384:  movl   $0x20,0x8(%esp)
0848d93c +0x38c:  mov    %edx,0x4(%esp)
0848d940 +0x390:  mov    %eax,(%esp)
0848d943 +0x393:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0848d948 +0x398:  leave
0848d949 +0x399:  ret
```

## 反编译 C

```c
// EncryptTool::createEncKey @ 0x848d5b0

/* EncryptTool::createEncKey() */

void __thiscall EncryptTool::createEncKey(EncryptTool *this)

{
  uint local_14;
  uint local_10;
  
  local_10 = time((time_t *)0x0);
  *(uint *)(this + 0x200) = local_10 & 0xf;
  local_14 = *(uint *)(this + 0x200);
  Encryption::SeedRand(&local_14);
  this[*(int *)(this + 0x200) * 0x20] =
       (EncryptTool)((char)this[9] + (char)*(undefined4 *)(this + 0x200) + '\x05');
  this[*(int *)(this + 0x200) * 0x20 + 1] =
       (EncryptTool)((char)this[0x28] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[(*(int *)(this + 0x200) * 0x10 + 1) * 2] =
       (EncryptTool)((char)this[0x47] + (char)*(undefined4 *)(this + 0x200) + '\x04');
  this[*(int *)(this + 0x200) * 0x20 + 3] =
       (EncryptTool)((char)this[0x66] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[(*(int *)(this + 0x200) * 8 + 1) * 4] =
       (EncryptTool)((char)this[0x85] + (char)*(undefined4 *)(this + 0x200));
  this[*(int *)(this + 0x200) * 0x20 + 5] =
       (EncryptTool)((char)this[0xa4] + (char)*(undefined4 *)(this + 0x200) + '\a');
  this[*(int *)(this + 0x200) * 0x20 + 6] =
       (EncryptTool)((char)this[0xc3] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 7] =
       (EncryptTool)((char)this[0xe2] + (char)*(undefined4 *)(this + 0x200) + '\x06');
  this[(*(int *)(this + 0x200) * 4 + 1) * 8] =
       (EncryptTool)((char)this[0x101] + (char)*(undefined4 *)(this + 0x200) + '\x03');
  this[*(int *)(this + 0x200) * 0x20 + 9] =
       (EncryptTool)((char)this[0x120] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 10] =
       (EncryptTool)((char)this[0x145] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 0xb] =
       (EncryptTool)((char)this[0x164] + (char)*(undefined4 *)(this + 0x200));
  this[*(int *)(this + 0x200) * 0x20 + 0xc] =
       (EncryptTool)((char)this[0x183] + (char)*(undefined4 *)(this + 0x200) + '\a');
  this[*(int *)(this + 0x200) * 0x20 + 0xd] =
       (EncryptTool)((char)this[0x1a2] + (char)*(undefined4 *)(this + 0x200) + '\x02');
  this[*(int *)(this + 0x200) * 0x20 + 0xe] =
       (EncryptTool)((char)this[0x1c1] + (char)*(undefined4 *)(this + 0x200) + '\x06');
  this[*(int *)(this + 0x200) * 0x20 + 0xf] =
       (EncryptTool)((char)this[0x1e0] + (char)*(undefined4 *)(this + 0x200) + '\x03');
  CRijndael::Initialize
            (*(CRijndael **)(this + 0x204),(char *)(this + *(int *)(this + 0x200) * 0x20),0x20,
             CRijndael::sm_chain0,0x10,0x10,0,0);
  return;
}
```
