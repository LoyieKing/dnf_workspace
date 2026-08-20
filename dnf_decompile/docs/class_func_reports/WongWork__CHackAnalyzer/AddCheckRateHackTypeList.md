# AddCheckRateHackTypeList

`_ZN8WongWork13CHackAnalyzer24AddCheckRateHackTypeListEv`

`WongWork::CHackAnalyzer::AddCheckRateHackTypeList()`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f8550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8550  _ZN8WongWork13CHackAnalyzer24AddCheckRateHackTypeListEv
#           WongWork::CHackAnalyzer::AddCheckRateHackTypeList()
# range [0x080f8550, 0x080f8ab9]
080f8550 +0x000:  push   %ebp
080f8551 +0x001:  mov    %esp,%ebp
080f8553 +0x003:  sub    $0xc8,%esp
080f8559 +0x009:  movl   $0x84,-0xb0(%ebp)
080f8563 +0x013:  mov    0x8(%ebp),%eax
080f8566 +0x016:  lea    0x7a24(%eax),%edx
080f856c +0x01c:  lea    -0xb0(%ebp),%eax
080f8572 +0x022:  mov    %eax,0x4(%esp)
080f8576 +0x026:  mov    %edx,(%esp)
080f8579 +0x029:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f857e +0x02e:  movl   $0xdc,-0xac(%ebp)
080f8588 +0x038:  mov    0x8(%ebp),%eax
080f858b +0x03b:  lea    0x7a24(%eax),%edx
080f8591 +0x041:  lea    -0xac(%ebp),%eax
080f8597 +0x047:  mov    %eax,0x4(%esp)
080f859b +0x04b:  mov    %edx,(%esp)
080f859e +0x04e:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f85a3 +0x053:  movl   $0x138,-0xa8(%ebp)
080f85ad +0x05d:  mov    0x8(%ebp),%eax
080f85b0 +0x060:  lea    0x7a24(%eax),%edx
080f85b6 +0x066:  lea    -0xa8(%ebp),%eax
080f85bc +0x06c:  mov    %eax,0x4(%esp)
080f85c0 +0x070:  mov    %edx,(%esp)
080f85c3 +0x073:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f85c8 +0x078:  movl   $0x139,-0xa4(%ebp)
080f85d2 +0x082:  mov    0x8(%ebp),%eax
080f85d5 +0x085:  lea    0x7a24(%eax),%edx
080f85db +0x08b:  lea    -0xa4(%ebp),%eax
080f85e1 +0x091:  mov    %eax,0x4(%esp)
080f85e5 +0x095:  mov    %edx,(%esp)
080f85e8 +0x098:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f85ed +0x09d:  movl   $0x86,-0xa0(%ebp)
080f85f7 +0x0a7:  mov    0x8(%ebp),%eax
080f85fa +0x0aa:  lea    0x7a24(%eax),%edx
080f8600 +0x0b0:  lea    -0xa0(%ebp),%eax
080f8606 +0x0b6:  mov    %eax,0x4(%esp)
080f860a +0x0ba:  mov    %edx,(%esp)
080f860d +0x0bd:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8612 +0x0c2:  movl   $0xde,-0x9c(%ebp)
080f861c +0x0cc:  mov    0x8(%ebp),%eax
080f861f +0x0cf:  lea    0x7a24(%eax),%edx
080f8625 +0x0d5:  lea    -0x9c(%ebp),%eax
080f862b +0x0db:  mov    %eax,0x4(%esp)
080f862f +0x0df:  mov    %edx,(%esp)
080f8632 +0x0e2:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8637 +0x0e7:  movl   $0x1a4,-0x98(%ebp)
080f8641 +0x0f1:  mov    0x8(%ebp),%eax
080f8644 +0x0f4:  lea    0x7a24(%eax),%edx
080f864a +0x0fa:  lea    -0x98(%ebp),%eax
080f8650 +0x100:  mov    %eax,0x4(%esp)
080f8654 +0x104:  mov    %edx,(%esp)
080f8657 +0x107:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f865c +0x10c:  movl   $0x1a5,-0x94(%ebp)
080f8666 +0x116:  mov    0x8(%ebp),%eax
080f8669 +0x119:  lea    0x7a24(%eax),%edx
080f866f +0x11f:  lea    -0x94(%ebp),%eax
080f8675 +0x125:  mov    %eax,0x4(%esp)
080f8679 +0x129:  mov    %edx,(%esp)
080f867c +0x12c:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8681 +0x131:  movl   $0x1a7,-0x90(%ebp)
080f868b +0x13b:  mov    0x8(%ebp),%eax
080f868e +0x13e:  lea    0x7a24(%eax),%edx
080f8694 +0x144:  lea    -0x90(%ebp),%eax
080f869a +0x14a:  mov    %eax,0x4(%esp)
080f869e +0x14e:  mov    %edx,(%esp)
080f86a1 +0x151:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f86a6 +0x156:  movl   $0xdf,-0x8c(%ebp)
080f86b0 +0x160:  mov    0x8(%ebp),%eax
080f86b3 +0x163:  lea    0x7a24(%eax),%edx
080f86b9 +0x169:  lea    -0x8c(%ebp),%eax
080f86bf +0x16f:  mov    %eax,0x4(%esp)
080f86c3 +0x173:  mov    %edx,(%esp)
080f86c6 +0x176:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f86cb +0x17b:  movl   $0xe0,-0x88(%ebp)
080f86d5 +0x185:  mov    0x8(%ebp),%eax
080f86d8 +0x188:  lea    0x7a24(%eax),%edx
080f86de +0x18e:  lea    -0x88(%ebp),%eax
080f86e4 +0x194:  mov    %eax,0x4(%esp)
080f86e8 +0x198:  mov    %edx,(%esp)
080f86eb +0x19b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f86f0 +0x1a0:  movl   $0xe1,-0x84(%ebp)
080f86fa +0x1aa:  mov    0x8(%ebp),%eax
080f86fd +0x1ad:  lea    0x7a24(%eax),%edx
080f8703 +0x1b3:  lea    -0x84(%ebp),%eax
080f8709 +0x1b9:  mov    %eax,0x4(%esp)
080f870d +0x1bd:  mov    %edx,(%esp)
080f8710 +0x1c0:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8715 +0x1c5:  movl   $0x1a4,-0x80(%ebp)
080f871c +0x1cc:  mov    0x8(%ebp),%eax
080f871f +0x1cf:  lea    0x7a24(%eax),%edx
080f8725 +0x1d5:  lea    -0x80(%ebp),%eax
080f8728 +0x1d8:  mov    %eax,0x4(%esp)
080f872c +0x1dc:  mov    %edx,(%esp)
080f872f +0x1df:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8734 +0x1e4:  movl   $0x1a5,-0x7c(%ebp)
080f873b +0x1eb:  mov    0x8(%ebp),%eax
080f873e +0x1ee:  lea    0x7a24(%eax),%edx
080f8744 +0x1f4:  lea    -0x7c(%ebp),%eax
080f8747 +0x1f7:  mov    %eax,0x4(%esp)
080f874b +0x1fb:  mov    %edx,(%esp)
080f874e +0x1fe:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8753 +0x203:  movl   $0x1a7,-0x78(%ebp)
080f875a +0x20a:  mov    0x8(%ebp),%eax
080f875d +0x20d:  lea    0x7a24(%eax),%edx
080f8763 +0x213:  lea    -0x78(%ebp),%eax
080f8766 +0x216:  mov    %eax,0x4(%esp)
080f876a +0x21a:  mov    %edx,(%esp)
080f876d +0x21d:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8772 +0x222:  movl   $0xdf,-0x74(%ebp)
080f8779 +0x229:  mov    0x8(%ebp),%eax
080f877c +0x22c:  lea    0x7a24(%eax),%edx
080f8782 +0x232:  lea    -0x74(%ebp),%eax
080f8785 +0x235:  mov    %eax,0x4(%esp)
080f8789 +0x239:  mov    %edx,(%esp)
080f878c +0x23c:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8791 +0x241:  movl   $0xe0,-0x70(%ebp)
080f8798 +0x248:  mov    0x8(%ebp),%eax
080f879b +0x24b:  lea    0x7a24(%eax),%edx
080f87a1 +0x251:  lea    -0x70(%ebp),%eax
080f87a4 +0x254:  mov    %eax,0x4(%esp)
080f87a8 +0x258:  mov    %edx,(%esp)
080f87ab +0x25b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f87b0 +0x260:  movl   $0xe1,-0x6c(%ebp)
080f87b7 +0x267:  mov    0x8(%ebp),%eax
080f87ba +0x26a:  lea    0x7a24(%eax),%edx
080f87c0 +0x270:  lea    -0x6c(%ebp),%eax
080f87c3 +0x273:  mov    %eax,0x4(%esp)
080f87c7 +0x277:  mov    %edx,(%esp)
080f87ca +0x27a:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f87cf +0x27f:  movl   $0x84,-0x68(%ebp)
080f87d6 +0x286:  mov    0x8(%ebp),%eax
080f87d9 +0x289:  lea    0x7a30(%eax),%edx
080f87df +0x28f:  lea    -0x68(%ebp),%eax
080f87e2 +0x292:  mov    %eax,0x4(%esp)
080f87e6 +0x296:  mov    %edx,(%esp)
080f87e9 +0x299:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f87ee +0x29e:  movl   $0xca,-0x64(%ebp)
080f87f5 +0x2a5:  mov    0x8(%ebp),%eax
080f87f8 +0x2a8:  lea    0x7a30(%eax),%edx
080f87fe +0x2ae:  lea    -0x64(%ebp),%eax
080f8801 +0x2b1:  mov    %eax,0x4(%esp)
080f8805 +0x2b5:  mov    %edx,(%esp)
080f8808 +0x2b8:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f880d +0x2bd:  movl   $0xcd,-0x60(%ebp)
080f8814 +0x2c4:  mov    0x8(%ebp),%eax
080f8817 +0x2c7:  lea    0x7a30(%eax),%edx
080f881d +0x2cd:  lea    -0x60(%ebp),%eax
080f8820 +0x2d0:  mov    %eax,0x4(%esp)
080f8824 +0x2d4:  mov    %edx,(%esp)
080f8827 +0x2d7:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f882c +0x2dc:  movl   $0xce,-0x5c(%ebp)
080f8833 +0x2e3:  mov    0x8(%ebp),%eax
080f8836 +0x2e6:  lea    0x7a30(%eax),%edx
080f883c +0x2ec:  lea    -0x5c(%ebp),%eax
080f883f +0x2ef:  mov    %eax,0x4(%esp)
080f8843 +0x2f3:  mov    %edx,(%esp)
080f8846 +0x2f6:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f884b +0x2fb:  movl   $0xd0,-0x58(%ebp)
080f8852 +0x302:  mov    0x8(%ebp),%eax
080f8855 +0x305:  lea    0x7a30(%eax),%edx
080f885b +0x30b:  lea    -0x58(%ebp),%eax
080f885e +0x30e:  mov    %eax,0x4(%esp)
080f8862 +0x312:  mov    %edx,(%esp)
080f8865 +0x315:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f886a +0x31a:  movl   $0xd1,-0x54(%ebp)
080f8871 +0x321:  mov    0x8(%ebp),%eax
080f8874 +0x324:  lea    0x7a30(%eax),%edx
080f887a +0x32a:  lea    -0x54(%ebp),%eax
080f887d +0x32d:  mov    %eax,0x4(%esp)
080f8881 +0x331:  mov    %edx,(%esp)
080f8884 +0x334:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8889 +0x339:  movl   $0xd7,-0x50(%ebp)
080f8890 +0x340:  mov    0x8(%ebp),%eax
080f8893 +0x343:  lea    0x7a30(%eax),%edx
080f8899 +0x349:  lea    -0x50(%ebp),%eax
080f889c +0x34c:  mov    %eax,0x4(%esp)
080f88a0 +0x350:  mov    %edx,(%esp)
080f88a3 +0x353:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f88a8 +0x358:  movl   $0xd8,-0x4c(%ebp)
080f88af +0x35f:  mov    0x8(%ebp),%eax
080f88b2 +0x362:  lea    0x7a30(%eax),%edx
080f88b8 +0x368:  lea    -0x4c(%ebp),%eax
080f88bb +0x36b:  mov    %eax,0x4(%esp)
080f88bf +0x36f:  mov    %edx,(%esp)
080f88c2 +0x372:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f88c7 +0x377:  movl   $0xd9,-0x48(%ebp)
080f88ce +0x37e:  mov    0x8(%ebp),%eax
080f88d1 +0x381:  lea    0x7a30(%eax),%edx
080f88d7 +0x387:  lea    -0x48(%ebp),%eax
080f88da +0x38a:  mov    %eax,0x4(%esp)
080f88de +0x38e:  mov    %edx,(%esp)
080f88e1 +0x391:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f88e6 +0x396:  movl   $0xda,-0x44(%ebp)
080f88ed +0x39d:  mov    0x8(%ebp),%eax
080f88f0 +0x3a0:  lea    0x7a30(%eax),%edx
080f88f6 +0x3a6:  lea    -0x44(%ebp),%eax
080f88f9 +0x3a9:  mov    %eax,0x4(%esp)
080f88fd +0x3ad:  mov    %edx,(%esp)
080f8900 +0x3b0:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8905 +0x3b5:  movl   $0xdb,-0x40(%ebp)
080f890c +0x3bc:  mov    0x8(%ebp),%eax
080f890f +0x3bf:  lea    0x7a30(%eax),%edx
080f8915 +0x3c5:  lea    -0x40(%ebp),%eax
080f8918 +0x3c8:  mov    %eax,0x4(%esp)
080f891c +0x3cc:  mov    %edx,(%esp)
080f891f +0x3cf:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8924 +0x3d4:  movl   $0xdc,-0x3c(%ebp)
080f892b +0x3db:  mov    0x8(%ebp),%eax
080f892e +0x3de:  lea    0x7a30(%eax),%edx
080f8934 +0x3e4:  lea    -0x3c(%ebp),%eax
080f8937 +0x3e7:  mov    %eax,0x4(%esp)
080f893b +0x3eb:  mov    %edx,(%esp)
080f893e +0x3ee:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8943 +0x3f3:  movl   $0x138,-0x38(%ebp)
080f894a +0x3fa:  mov    0x8(%ebp),%eax
080f894d +0x3fd:  lea    0x7a30(%eax),%edx
080f8953 +0x403:  lea    -0x38(%ebp),%eax
080f8956 +0x406:  mov    %eax,0x4(%esp)
080f895a +0x40a:  mov    %edx,(%esp)
080f895d +0x40d:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8962 +0x412:  movl   $0x139,-0x34(%ebp)
080f8969 +0x419:  mov    0x8(%ebp),%eax
080f896c +0x41c:  lea    0x7a30(%eax),%edx
080f8972 +0x422:  lea    -0x34(%ebp),%eax
080f8975 +0x425:  mov    %eax,0x4(%esp)
080f8979 +0x429:  mov    %edx,(%esp)
080f897c +0x42c:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8981 +0x431:  movl   $0x193,-0x30(%ebp)
080f8988 +0x438:  mov    0x8(%ebp),%eax
080f898b +0x43b:  lea    0x7a30(%eax),%edx
080f8991 +0x441:  lea    -0x30(%ebp),%eax
080f8994 +0x444:  mov    %eax,0x4(%esp)
080f8998 +0x448:  mov    %edx,(%esp)
080f899b +0x44b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f89a0 +0x450:  movl   $0x19e,-0x2c(%ebp)
080f89a7 +0x457:  mov    0x8(%ebp),%eax
080f89aa +0x45a:  lea    0x7a30(%eax),%edx
080f89b0 +0x460:  lea    -0x2c(%ebp),%eax
080f89b3 +0x463:  mov    %eax,0x4(%esp)
080f89b7 +0x467:  mov    %edx,(%esp)
080f89ba +0x46a:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f89bf +0x46f:  movl   $0x86,-0x28(%ebp)
080f89c6 +0x476:  mov    0x8(%ebp),%eax
080f89c9 +0x479:  lea    0x7a30(%eax),%edx
080f89cf +0x47f:  lea    -0x28(%ebp),%eax
080f89d2 +0x482:  mov    %eax,0x4(%esp)
080f89d6 +0x486:  mov    %edx,(%esp)
080f89d9 +0x489:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f89de +0x48e:  movl   $0xde,-0x24(%ebp)
080f89e5 +0x495:  mov    0x8(%ebp),%eax
080f89e8 +0x498:  lea    0x7a30(%eax),%edx
080f89ee +0x49e:  lea    -0x24(%ebp),%eax
080f89f1 +0x4a1:  mov    %eax,0x4(%esp)
080f89f5 +0x4a5:  mov    %edx,(%esp)
080f89f8 +0x4a8:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f89fd +0x4ad:  movl   $0x1a4,-0x20(%ebp)
080f8a04 +0x4b4:  mov    0x8(%ebp),%eax
080f8a07 +0x4b7:  lea    0x7a30(%eax),%edx
080f8a0d +0x4bd:  lea    -0x20(%ebp),%eax
080f8a10 +0x4c0:  mov    %eax,0x4(%esp)
080f8a14 +0x4c4:  mov    %edx,(%esp)
080f8a17 +0x4c7:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8a1c +0x4cc:  movl   $0x1a5,-0x1c(%ebp)
080f8a23 +0x4d3:  mov    0x8(%ebp),%eax
080f8a26 +0x4d6:  lea    0x7a30(%eax),%edx
080f8a2c +0x4dc:  lea    -0x1c(%ebp),%eax
080f8a2f +0x4df:  mov    %eax,0x4(%esp)
080f8a33 +0x4e3:  mov    %edx,(%esp)
080f8a36 +0x4e6:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8a3b +0x4eb:  movl   $0x1a7,-0x18(%ebp)
080f8a42 +0x4f2:  mov    0x8(%ebp),%eax
080f8a45 +0x4f5:  lea    0x7a30(%eax),%edx
080f8a4b +0x4fb:  lea    -0x18(%ebp),%eax
080f8a4e +0x4fe:  mov    %eax,0x4(%esp)
080f8a52 +0x502:  mov    %edx,(%esp)
080f8a55 +0x505:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8a5a +0x50a:  movl   $0xdf,-0x14(%ebp)
080f8a61 +0x511:  mov    0x8(%ebp),%eax
080f8a64 +0x514:  lea    0x7a30(%eax),%edx
080f8a6a +0x51a:  lea    -0x14(%ebp),%eax
080f8a6d +0x51d:  mov    %eax,0x4(%esp)
080f8a71 +0x521:  mov    %edx,(%esp)
080f8a74 +0x524:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8a79 +0x529:  movl   $0xe0,-0x10(%ebp)
080f8a80 +0x530:  mov    0x8(%ebp),%eax
080f8a83 +0x533:  lea    0x7a30(%eax),%edx
080f8a89 +0x539:  lea    -0x10(%ebp),%eax
080f8a8c +0x53c:  mov    %eax,0x4(%esp)
080f8a90 +0x540:  mov    %edx,(%esp)
080f8a93 +0x543:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8a98 +0x548:  movl   $0xe1,-0xc(%ebp)
080f8a9f +0x54f:  mov    0x8(%ebp),%eax
080f8aa2 +0x552:  lea    0x7a30(%eax),%edx
080f8aa8 +0x558:  lea    -0xc(%ebp),%eax
080f8aab +0x55b:  mov    %eax,0x4(%esp)
080f8aaf +0x55f:  mov    %edx,(%esp)
080f8ab2 +0x562:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
080f8ab7 +0x567:  leave
080f8ab8 +0x568:  ret
080f8ab9 +0x569:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::AddCheckRateHackTypeList @ 0x80f8550

/* WongWork::CHackAnalyzer::AddCheckRateHackTypeList() */

void __thiscall WongWork::CHackAnalyzer::AddCheckRateHackTypeList(CHackAnalyzer *this)

{
  int local_b4 [44];
  
  local_b4[0] = 0x84;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4);
  local_b4[1] = 0xdc;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 1);
  local_b4[2] = 0x138;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 2);
  local_b4[3] = 0x139;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 3);
  local_b4[4] = 0x86;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 4);
  local_b4[5] = 0xde;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 5);
  local_b4[6] = 0x1a4;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 6);
  local_b4[7] = 0x1a5;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 7);
  local_b4[8] = 0x1a7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 8);
  local_b4[9] = 0xdf;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 9);
  local_b4[10] = 0xe0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 10);
  local_b4[0xb] = 0xe1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xb);
  local_b4[0xc] = 0x1a4;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xc);
  local_b4[0xd] = 0x1a5;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xd);
  local_b4[0xe] = 0x1a7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xe);
  local_b4[0xf] = 0xdf;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xf);
  local_b4[0x10] = 0xe0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0x10);
  local_b4[0x11] = 0xe1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0x11);
  local_b4[0x12] = 0x84;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x12);
  local_b4[0x13] = 0xca;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x13);
  local_b4[0x14] = 0xcd;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x14);
  local_b4[0x15] = 0xce;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x15);
  local_b4[0x16] = 0xd0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x16);
  local_b4[0x17] = 0xd1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x17);
  local_b4[0x18] = 0xd7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x18);
  local_b4[0x19] = 0xd8;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x19);
  local_b4[0x1a] = 0xd9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1a);
  local_b4[0x1b] = 0xda;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1b);
  local_b4[0x1c] = 0xdb;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1c);
  local_b4[0x1d] = 0xdc;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1d);
  local_b4[0x1e] = 0x138;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1e);
  local_b4[0x1f] = 0x139;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1f);
  local_b4[0x20] = 0x193;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x20);
  local_b4[0x21] = 0x19e;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x21);
  local_b4[0x22] = 0x86;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x22);
  local_b4[0x23] = 0xde;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x23);
  local_b4[0x24] = 0x1a4;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x24);
  local_b4[0x25] = 0x1a5;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x25);
  local_b4[0x26] = 0x1a7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x26);
  local_b4[0x27] = 0xdf;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x27);
  local_b4[0x28] = 0xe0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x28);
  local_b4[0x29] = 0xe1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x29);
  return;
}
```
