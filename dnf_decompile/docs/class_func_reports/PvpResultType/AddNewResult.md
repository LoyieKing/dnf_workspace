# AddNewResult

`_ZN13PvpResultType12AddNewResultERKS_`

`PvpResultType::AddNewResult(PvpResultType const&)`

| 类 | 地址 |
|---|---|
| `PvpResultType` | `0x085d5944` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5944  _ZN13PvpResultType12AddNewResultERKS_
#           PvpResultType::AddNewResult(PvpResultType const&)
# range [0x085d5944, 0x085d5dbf]
085d5944 +0x000:  push   %ebp
085d5945 +0x001:  mov    %esp,%ebp
085d5947 +0x003:  push   %edi
085d5948 +0x004:  push   %esi
085d5949 +0x005:  push   %ebx
085d594a +0x006:  sub    $0x3c,%esp
085d594d +0x009:  mov    0x8(%ebp),%eax
085d5950 +0x00c:  mov    0x54(%eax),%eax
085d5953 +0x00f:  test   %eax,%eax
085d5955 +0x011:  jne    085d5980 <+0x3c>
085d5957 +0x013:  mov    0x8(%ebp),%eax
085d595a +0x016:  mov    0x58(%eax),%eax
085d595d +0x019:  mov    %eax,-0x1c(%ebp)
085d5960 +0x01c:  mov    0xc(%ebp),%eax
085d5963 +0x01f:  mov    %eax,0x4(%esp)
085d5967 +0x023:  mov    0x8(%ebp),%eax
085d596a +0x026:  mov    %eax,(%esp)
085d596d +0x029:  call   085d58e6 <_ZN13PvpResultType3SetERKS_>  ; PvpResultType::Set(PvpResultType const&)
085d5972 +0x02e:  mov    -0x1c(%ebp),%edx
085d5975 +0x031:  mov    0x8(%ebp),%eax
085d5978 +0x034:  mov    %edx,0x58(%eax)
085d597b +0x037:  jmp    085d5da9 <+0x465>
085d5980 +0x03c:  mov    0x8(%ebp),%eax
085d5983 +0x03f:  mov    0x54(%eax),%eax
085d5986 +0x042:  mov    %eax,%esi
085d5988 +0x044:  mov    %eax,%edi
085d598a +0x046:  sar    $0x1f,%edi
085d598d +0x049:  mov    0xc(%ebp),%eax
085d5990 +0x04c:  mov    0x18(%eax),%eax
085d5993 +0x04f:  mov    %eax,%ecx
085d5995 +0x051:  mov    %eax,%ebx
085d5997 +0x053:  sar    $0x1f,%ebx
085d599a +0x056:  mov    0x8(%ebp),%eax
085d599d +0x059:  mov    0x18(%eax),%eax
085d59a0 +0x05c:  mov    %eax,%edx
085d59a2 +0x05e:  sar    $0x1f,%edx
085d59a5 +0x061:  mov    %esi,0x10(%esp)
085d59a9 +0x065:  mov    %edi,0x14(%esp)
085d59ad +0x069:  mov    %ecx,0x8(%esp)
085d59b1 +0x06d:  mov    %ebx,0xc(%esp)
085d59b5 +0x071:  mov    %eax,(%esp)
085d59b8 +0x074:  mov    %edx,0x4(%esp)
085d59bc +0x078:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d59c1 +0x07d:  mov    0x8(%ebp),%edx
085d59c4 +0x080:  mov    %eax,0x18(%edx)
085d59c7 +0x083:  mov    0x8(%ebp),%eax
085d59ca +0x086:  mov    0x54(%eax),%eax
085d59cd +0x089:  mov    %eax,%esi
085d59cf +0x08b:  mov    %eax,%edi
085d59d1 +0x08d:  sar    $0x1f,%edi
085d59d4 +0x090:  mov    0xc(%ebp),%eax
085d59d7 +0x093:  mov    0x1c(%eax),%eax
085d59da +0x096:  mov    %eax,%ecx
085d59dc +0x098:  mov    %eax,%ebx
085d59de +0x09a:  sar    $0x1f,%ebx
085d59e1 +0x09d:  mov    0x8(%ebp),%eax
085d59e4 +0x0a0:  mov    0x1c(%eax),%eax
085d59e7 +0x0a3:  mov    %eax,%edx
085d59e9 +0x0a5:  sar    $0x1f,%edx
085d59ec +0x0a8:  mov    %esi,0x10(%esp)
085d59f0 +0x0ac:  mov    %edi,0x14(%esp)
085d59f4 +0x0b0:  mov    %ecx,0x8(%esp)
085d59f8 +0x0b4:  mov    %ebx,0xc(%esp)
085d59fc +0x0b8:  mov    %eax,(%esp)
085d59ff +0x0bb:  mov    %edx,0x4(%esp)
085d5a03 +0x0bf:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5a08 +0x0c4:  mov    0x8(%ebp),%edx
085d5a0b +0x0c7:  mov    %eax,0x1c(%edx)
085d5a0e +0x0ca:  mov    0x8(%ebp),%eax
085d5a11 +0x0cd:  mov    0x54(%eax),%eax
085d5a14 +0x0d0:  mov    %eax,%esi
085d5a16 +0x0d2:  mov    %eax,%edi
085d5a18 +0x0d4:  sar    $0x1f,%edi
085d5a1b +0x0d7:  mov    0xc(%ebp),%eax
085d5a1e +0x0da:  mov    0x20(%eax),%eax
085d5a21 +0x0dd:  mov    %eax,%ecx
085d5a23 +0x0df:  mov    %eax,%ebx
085d5a25 +0x0e1:  sar    $0x1f,%ebx
085d5a28 +0x0e4:  mov    0x8(%ebp),%eax
085d5a2b +0x0e7:  mov    0x20(%eax),%eax
085d5a2e +0x0ea:  mov    %eax,%edx
085d5a30 +0x0ec:  sar    $0x1f,%edx
085d5a33 +0x0ef:  mov    %esi,0x10(%esp)
085d5a37 +0x0f3:  mov    %edi,0x14(%esp)
085d5a3b +0x0f7:  mov    %ecx,0x8(%esp)
085d5a3f +0x0fb:  mov    %ebx,0xc(%esp)
085d5a43 +0x0ff:  mov    %eax,(%esp)
085d5a46 +0x102:  mov    %edx,0x4(%esp)
085d5a4a +0x106:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5a4f +0x10b:  mov    0x8(%ebp),%edx
085d5a52 +0x10e:  mov    %eax,0x20(%edx)
085d5a55 +0x111:  mov    0x8(%ebp),%eax
085d5a58 +0x114:  mov    0x54(%eax),%eax
085d5a5b +0x117:  mov    %eax,%esi
085d5a5d +0x119:  mov    %eax,%edi
085d5a5f +0x11b:  sar    $0x1f,%edi
085d5a62 +0x11e:  mov    0xc(%ebp),%eax
085d5a65 +0x121:  mov    0x24(%eax),%eax
085d5a68 +0x124:  mov    %eax,%ecx
085d5a6a +0x126:  mov    %eax,%ebx
085d5a6c +0x128:  sar    $0x1f,%ebx
085d5a6f +0x12b:  mov    0x8(%ebp),%eax
085d5a72 +0x12e:  mov    0x24(%eax),%eax
085d5a75 +0x131:  mov    %eax,%edx
085d5a77 +0x133:  sar    $0x1f,%edx
085d5a7a +0x136:  mov    %esi,0x10(%esp)
085d5a7e +0x13a:  mov    %edi,0x14(%esp)
085d5a82 +0x13e:  mov    %ecx,0x8(%esp)
085d5a86 +0x142:  mov    %ebx,0xc(%esp)
085d5a8a +0x146:  mov    %eax,(%esp)
085d5a8d +0x149:  mov    %edx,0x4(%esp)
085d5a91 +0x14d:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5a96 +0x152:  mov    0x8(%ebp),%edx
085d5a99 +0x155:  mov    %eax,0x24(%edx)
085d5a9c +0x158:  mov    0x8(%ebp),%eax
085d5a9f +0x15b:  mov    0x54(%eax),%eax
085d5aa2 +0x15e:  mov    %eax,%esi
085d5aa4 +0x160:  mov    %eax,%edi
085d5aa6 +0x162:  sar    $0x1f,%edi
085d5aa9 +0x165:  mov    0xc(%ebp),%eax
085d5aac +0x168:  mov    0x28(%eax),%eax
085d5aaf +0x16b:  mov    %eax,%ecx
085d5ab1 +0x16d:  mov    %eax,%ebx
085d5ab3 +0x16f:  sar    $0x1f,%ebx
085d5ab6 +0x172:  mov    0x8(%ebp),%eax
085d5ab9 +0x175:  mov    0x28(%eax),%eax
085d5abc +0x178:  mov    %eax,%edx
085d5abe +0x17a:  sar    $0x1f,%edx
085d5ac1 +0x17d:  mov    %esi,0x10(%esp)
085d5ac5 +0x181:  mov    %edi,0x14(%esp)
085d5ac9 +0x185:  mov    %ecx,0x8(%esp)
085d5acd +0x189:  mov    %ebx,0xc(%esp)
085d5ad1 +0x18d:  mov    %eax,(%esp)
085d5ad4 +0x190:  mov    %edx,0x4(%esp)
085d5ad8 +0x194:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5add +0x199:  mov    0x8(%ebp),%edx
085d5ae0 +0x19c:  mov    %eax,0x28(%edx)
085d5ae3 +0x19f:  mov    0x8(%ebp),%eax
085d5ae6 +0x1a2:  mov    0x54(%eax),%eax
085d5ae9 +0x1a5:  mov    %eax,%esi
085d5aeb +0x1a7:  mov    %eax,%edi
085d5aed +0x1a9:  sar    $0x1f,%edi
085d5af0 +0x1ac:  mov    0xc(%ebp),%eax
085d5af3 +0x1af:  mov    0x2c(%eax),%eax
085d5af6 +0x1b2:  mov    %eax,%ecx
085d5af8 +0x1b4:  mov    %eax,%ebx
085d5afa +0x1b6:  sar    $0x1f,%ebx
085d5afd +0x1b9:  mov    0x8(%ebp),%eax
085d5b00 +0x1bc:  mov    0x2c(%eax),%eax
085d5b03 +0x1bf:  mov    %eax,%edx
085d5b05 +0x1c1:  sar    $0x1f,%edx
085d5b08 +0x1c4:  mov    %esi,0x10(%esp)
085d5b0c +0x1c8:  mov    %edi,0x14(%esp)
085d5b10 +0x1cc:  mov    %ecx,0x8(%esp)
085d5b14 +0x1d0:  mov    %ebx,0xc(%esp)
085d5b18 +0x1d4:  mov    %eax,(%esp)
085d5b1b +0x1d7:  mov    %edx,0x4(%esp)
085d5b1f +0x1db:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5b24 +0x1e0:  mov    0x8(%ebp),%edx
085d5b27 +0x1e3:  mov    %eax,0x2c(%edx)
085d5b2a +0x1e6:  mov    0x8(%ebp),%eax
085d5b2d +0x1e9:  mov    0x54(%eax),%eax
085d5b30 +0x1ec:  mov    %eax,%esi
085d5b32 +0x1ee:  mov    %eax,%edi
085d5b34 +0x1f0:  sar    $0x1f,%edi
085d5b37 +0x1f3:  mov    0xc(%ebp),%eax
085d5b3a +0x1f6:  mov    0x30(%eax),%eax
085d5b3d +0x1f9:  mov    %eax,%ecx
085d5b3f +0x1fb:  mov    %eax,%ebx
085d5b41 +0x1fd:  sar    $0x1f,%ebx
085d5b44 +0x200:  mov    0x8(%ebp),%eax
085d5b47 +0x203:  mov    0x30(%eax),%eax
085d5b4a +0x206:  mov    %eax,%edx
085d5b4c +0x208:  sar    $0x1f,%edx
085d5b4f +0x20b:  mov    %esi,0x10(%esp)
085d5b53 +0x20f:  mov    %edi,0x14(%esp)
085d5b57 +0x213:  mov    %ecx,0x8(%esp)
085d5b5b +0x217:  mov    %ebx,0xc(%esp)
085d5b5f +0x21b:  mov    %eax,(%esp)
085d5b62 +0x21e:  mov    %edx,0x4(%esp)
085d5b66 +0x222:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5b6b +0x227:  mov    0x8(%ebp),%edx
085d5b6e +0x22a:  mov    %eax,0x30(%edx)
085d5b71 +0x22d:  mov    0x8(%ebp),%eax
085d5b74 +0x230:  mov    0x54(%eax),%eax
085d5b77 +0x233:  mov    %eax,%esi
085d5b79 +0x235:  mov    %eax,%edi
085d5b7b +0x237:  sar    $0x1f,%edi
085d5b7e +0x23a:  mov    0xc(%ebp),%eax
085d5b81 +0x23d:  mov    0x34(%eax),%eax
085d5b84 +0x240:  mov    %eax,%ecx
085d5b86 +0x242:  mov    %eax,%ebx
085d5b88 +0x244:  sar    $0x1f,%ebx
085d5b8b +0x247:  mov    0x8(%ebp),%eax
085d5b8e +0x24a:  mov    0x34(%eax),%eax
085d5b91 +0x24d:  mov    %eax,%edx
085d5b93 +0x24f:  sar    $0x1f,%edx
085d5b96 +0x252:  mov    %esi,0x10(%esp)
085d5b9a +0x256:  mov    %edi,0x14(%esp)
085d5b9e +0x25a:  mov    %ecx,0x8(%esp)
085d5ba2 +0x25e:  mov    %ebx,0xc(%esp)
085d5ba6 +0x262:  mov    %eax,(%esp)
085d5ba9 +0x265:  mov    %edx,0x4(%esp)
085d5bad +0x269:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5bb2 +0x26e:  mov    0x8(%ebp),%edx
085d5bb5 +0x271:  mov    %eax,0x34(%edx)
085d5bb8 +0x274:  mov    0x8(%ebp),%eax
085d5bbb +0x277:  mov    0x54(%eax),%eax
085d5bbe +0x27a:  mov    %eax,%esi
085d5bc0 +0x27c:  mov    %eax,%edi
085d5bc2 +0x27e:  sar    $0x1f,%edi
085d5bc5 +0x281:  mov    0xc(%ebp),%eax
085d5bc8 +0x284:  mov    0x38(%eax),%eax
085d5bcb +0x287:  mov    %eax,%ecx
085d5bcd +0x289:  mov    %eax,%ebx
085d5bcf +0x28b:  sar    $0x1f,%ebx
085d5bd2 +0x28e:  mov    0x8(%ebp),%eax
085d5bd5 +0x291:  mov    0x38(%eax),%eax
085d5bd8 +0x294:  mov    %eax,%edx
085d5bda +0x296:  sar    $0x1f,%edx
085d5bdd +0x299:  mov    %esi,0x10(%esp)
085d5be1 +0x29d:  mov    %edi,0x14(%esp)
085d5be5 +0x2a1:  mov    %ecx,0x8(%esp)
085d5be9 +0x2a5:  mov    %ebx,0xc(%esp)
085d5bed +0x2a9:  mov    %eax,(%esp)
085d5bf0 +0x2ac:  mov    %edx,0x4(%esp)
085d5bf4 +0x2b0:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5bf9 +0x2b5:  mov    0x8(%ebp),%edx
085d5bfc +0x2b8:  mov    %eax,0x38(%edx)
085d5bff +0x2bb:  mov    0x8(%ebp),%eax
085d5c02 +0x2be:  mov    0x54(%eax),%eax
085d5c05 +0x2c1:  mov    %eax,%esi
085d5c07 +0x2c3:  mov    %eax,%edi
085d5c09 +0x2c5:  sar    $0x1f,%edi
085d5c0c +0x2c8:  mov    0xc(%ebp),%eax
085d5c0f +0x2cb:  mov    0x3c(%eax),%eax
085d5c12 +0x2ce:  mov    %eax,%ecx
085d5c14 +0x2d0:  mov    %eax,%ebx
085d5c16 +0x2d2:  sar    $0x1f,%ebx
085d5c19 +0x2d5:  mov    0x8(%ebp),%eax
085d5c1c +0x2d8:  mov    0x3c(%eax),%eax
085d5c1f +0x2db:  mov    %eax,%edx
085d5c21 +0x2dd:  sar    $0x1f,%edx
085d5c24 +0x2e0:  mov    %esi,0x10(%esp)
085d5c28 +0x2e4:  mov    %edi,0x14(%esp)
085d5c2c +0x2e8:  mov    %ecx,0x8(%esp)
085d5c30 +0x2ec:  mov    %ebx,0xc(%esp)
085d5c34 +0x2f0:  mov    %eax,(%esp)
085d5c37 +0x2f3:  mov    %edx,0x4(%esp)
085d5c3b +0x2f7:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5c40 +0x2fc:  mov    0x8(%ebp),%edx
085d5c43 +0x2ff:  mov    %eax,0x3c(%edx)
085d5c46 +0x302:  mov    0x8(%ebp),%eax
085d5c49 +0x305:  mov    0x54(%eax),%eax
085d5c4c +0x308:  mov    %eax,%esi
085d5c4e +0x30a:  mov    %eax,%edi
085d5c50 +0x30c:  sar    $0x1f,%edi
085d5c53 +0x30f:  mov    0xc(%ebp),%eax
085d5c56 +0x312:  mov    0x40(%eax),%eax
085d5c59 +0x315:  mov    %eax,%ecx
085d5c5b +0x317:  mov    %eax,%ebx
085d5c5d +0x319:  sar    $0x1f,%ebx
085d5c60 +0x31c:  mov    0x8(%ebp),%eax
085d5c63 +0x31f:  mov    0x40(%eax),%eax
085d5c66 +0x322:  mov    %eax,%edx
085d5c68 +0x324:  sar    $0x1f,%edx
085d5c6b +0x327:  mov    %esi,0x10(%esp)
085d5c6f +0x32b:  mov    %edi,0x14(%esp)
085d5c73 +0x32f:  mov    %ecx,0x8(%esp)
085d5c77 +0x333:  mov    %ebx,0xc(%esp)
085d5c7b +0x337:  mov    %eax,(%esp)
085d5c7e +0x33a:  mov    %edx,0x4(%esp)
085d5c82 +0x33e:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5c87 +0x343:  mov    0x8(%ebp),%edx
085d5c8a +0x346:  mov    %eax,0x40(%edx)
085d5c8d +0x349:  mov    0x8(%ebp),%eax
085d5c90 +0x34c:  mov    0x54(%eax),%eax
085d5c93 +0x34f:  mov    %eax,%esi
085d5c95 +0x351:  mov    %eax,%edi
085d5c97 +0x353:  sar    $0x1f,%edi
085d5c9a +0x356:  mov    0xc(%ebp),%eax
085d5c9d +0x359:  mov    0x44(%eax),%eax
085d5ca0 +0x35c:  mov    %eax,%ecx
085d5ca2 +0x35e:  mov    %eax,%ebx
085d5ca4 +0x360:  sar    $0x1f,%ebx
085d5ca7 +0x363:  mov    0x8(%ebp),%eax
085d5caa +0x366:  mov    0x44(%eax),%eax
085d5cad +0x369:  mov    %eax,%edx
085d5caf +0x36b:  sar    $0x1f,%edx
085d5cb2 +0x36e:  mov    %esi,0x10(%esp)
085d5cb6 +0x372:  mov    %edi,0x14(%esp)
085d5cba +0x376:  mov    %ecx,0x8(%esp)
085d5cbe +0x37a:  mov    %ebx,0xc(%esp)
085d5cc2 +0x37e:  mov    %eax,(%esp)
085d5cc5 +0x381:  mov    %edx,0x4(%esp)
085d5cc9 +0x385:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5cce +0x38a:  mov    0x8(%ebp),%edx
085d5cd1 +0x38d:  mov    %eax,0x44(%edx)
085d5cd4 +0x390:  mov    0x8(%ebp),%eax
085d5cd7 +0x393:  mov    0x54(%eax),%eax
085d5cda +0x396:  mov    %eax,%esi
085d5cdc +0x398:  mov    %eax,%edi
085d5cde +0x39a:  sar    $0x1f,%edi
085d5ce1 +0x39d:  mov    0xc(%ebp),%eax
085d5ce4 +0x3a0:  mov    0x48(%eax),%eax
085d5ce7 +0x3a3:  mov    %eax,%ecx
085d5ce9 +0x3a5:  mov    %eax,%ebx
085d5ceb +0x3a7:  sar    $0x1f,%ebx
085d5cee +0x3aa:  mov    0x8(%ebp),%eax
085d5cf1 +0x3ad:  mov    0x48(%eax),%eax
085d5cf4 +0x3b0:  mov    %eax,%edx
085d5cf6 +0x3b2:  sar    $0x1f,%edx
085d5cf9 +0x3b5:  mov    %esi,0x10(%esp)
085d5cfd +0x3b9:  mov    %edi,0x14(%esp)
085d5d01 +0x3bd:  mov    %ecx,0x8(%esp)
085d5d05 +0x3c1:  mov    %ebx,0xc(%esp)
085d5d09 +0x3c5:  mov    %eax,(%esp)
085d5d0c +0x3c8:  mov    %edx,0x4(%esp)
085d5d10 +0x3cc:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5d15 +0x3d1:  mov    0x8(%ebp),%edx
085d5d18 +0x3d4:  mov    %eax,0x48(%edx)
085d5d1b +0x3d7:  mov    0x8(%ebp),%eax
085d5d1e +0x3da:  mov    0x54(%eax),%eax
085d5d21 +0x3dd:  mov    %eax,%esi
085d5d23 +0x3df:  mov    %eax,%edi
085d5d25 +0x3e1:  sar    $0x1f,%edi
085d5d28 +0x3e4:  mov    0xc(%ebp),%eax
085d5d2b +0x3e7:  mov    0x4c(%eax),%eax
085d5d2e +0x3ea:  mov    %eax,%ecx
085d5d30 +0x3ec:  mov    %eax,%ebx
085d5d32 +0x3ee:  sar    $0x1f,%ebx
085d5d35 +0x3f1:  mov    0x8(%ebp),%eax
085d5d38 +0x3f4:  mov    0x4c(%eax),%eax
085d5d3b +0x3f7:  mov    %eax,%edx
085d5d3d +0x3f9:  sar    $0x1f,%edx
085d5d40 +0x3fc:  mov    %esi,0x10(%esp)
085d5d44 +0x400:  mov    %edi,0x14(%esp)
085d5d48 +0x404:  mov    %ecx,0x8(%esp)
085d5d4c +0x408:  mov    %ebx,0xc(%esp)
085d5d50 +0x40c:  mov    %eax,(%esp)
085d5d53 +0x40f:  mov    %edx,0x4(%esp)
085d5d57 +0x413:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5d5c +0x418:  mov    0x8(%ebp),%edx
085d5d5f +0x41b:  mov    %eax,0x4c(%edx)
085d5d62 +0x41e:  mov    0x8(%ebp),%eax
085d5d65 +0x421:  mov    0x54(%eax),%eax
085d5d68 +0x424:  mov    %eax,%esi
085d5d6a +0x426:  mov    %eax,%edi
085d5d6c +0x428:  sar    $0x1f,%edi
085d5d6f +0x42b:  mov    0xc(%ebp),%eax
085d5d72 +0x42e:  mov    0x50(%eax),%eax
085d5d75 +0x431:  mov    %eax,%ecx
085d5d77 +0x433:  mov    %eax,%ebx
085d5d79 +0x435:  sar    $0x1f,%ebx
085d5d7c +0x438:  mov    0x8(%ebp),%eax
085d5d7f +0x43b:  mov    0x50(%eax),%eax
085d5d82 +0x43e:  mov    %eax,%edx
085d5d84 +0x440:  sar    $0x1f,%edx
085d5d87 +0x443:  mov    %esi,0x10(%esp)
085d5d8b +0x447:  mov    %edi,0x14(%esp)
085d5d8f +0x44b:  mov    %ecx,0x8(%esp)
085d5d93 +0x44f:  mov    %ebx,0xc(%esp)
085d5d97 +0x453:  mov    %eax,(%esp)
085d5d9a +0x456:  mov    %edx,0x4(%esp)
085d5d9e +0x45a:  call   085dfec6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x74d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x74d
085d5da3 +0x45f:  mov    0x8(%ebp),%edx
085d5da6 +0x462:  mov    %eax,0x50(%edx)
085d5da9 +0x465:  mov    0x8(%ebp),%eax
085d5dac +0x468:  mov    0x54(%eax),%eax
085d5daf +0x46b:  lea    0x1(%eax),%edx
085d5db2 +0x46e:  mov    0x8(%ebp),%eax
085d5db5 +0x471:  mov    %edx,0x54(%eax)
085d5db8 +0x474:  add    $0x3c,%esp
085d5dbb +0x477:  pop    %ebx
085d5dbc +0x478:  pop    %esi
085d5dbd +0x479:  pop    %edi
085d5dbe +0x47a:  pop    %ebp
085d5dbf +0x47b:  ret
```

## 反编译 C

```c
// PvpResultType::AddNewResult @ 0x85d5944

/* PvpResultType::AddNewResult(PvpResultType const&) */

void __thiscall PvpResultType::AddNewResult(PvpResultType *this,PvpResultType *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x54) == 0) {
    uVar1 = *(undefined4 *)(this + 0x58);
    Set(this,param_1);
    *(undefined4 *)(this + 0x58) = uVar1;
  }
  else {
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x18),(longlong)*(int *)(param_1 + 0x18),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x18) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x1c),(longlong)*(int *)(param_1 + 0x1c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x1c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x20),(longlong)*(int *)(param_1 + 0x20),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x20) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x24),(longlong)*(int *)(param_1 + 0x24),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x24) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x28),(longlong)*(int *)(param_1 + 0x28),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x28) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x2c),(longlong)*(int *)(param_1 + 0x2c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x2c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x30),(longlong)*(int *)(param_1 + 0x30),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x30) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x34),(longlong)*(int *)(param_1 + 0x34),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x34) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x38),(longlong)*(int *)(param_1 + 0x38),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x38) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x3c),(longlong)*(int *)(param_1 + 0x3c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x3c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x40),(longlong)*(int *)(param_1 + 0x40),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x40) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x44),(longlong)*(int *)(param_1 + 0x44),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x44) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x48),(longlong)*(int *)(param_1 + 0x48),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x48) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x4c),(longlong)*(int *)(param_1 + 0x4c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x4c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x50),(longlong)*(int *)(param_1 + 0x50),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x50) = iVar2;
  }
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
  return;
}
```
