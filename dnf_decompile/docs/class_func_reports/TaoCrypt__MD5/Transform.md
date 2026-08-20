# Transform

`_ZN8TaoCrypt3MD59TransformEv`

`TaoCrypt::MD5::Transform()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD5` | `0x087668a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087668a0  _ZN8TaoCrypt3MD59TransformEv
#           TaoCrypt::MD5::Transform()
# range [0x087668a0, 0x0876703e]
087668a0 +0x000:  push   %ebp
087668a1 +0x001:  mov    %esp,%ebp
087668a3 +0x003:  push   %edi
087668a4 +0x004:  push   %esi
087668a5 +0x005:  sub    $0x4c,%esp
087668a8 +0x008:  mov    0x8(%ebp),%eax
087668ab +0x00b:  mov    0x8(%ebp),%ecx
087668ae +0x00e:  mov    0x10(%eax),%eax
087668b1 +0x011:  mov    %ecx,%esi
087668b3 +0x013:  mov    0x14(%ecx),%edx
087668b6 +0x016:  mov    0x18(%ecx),%edi
087668b9 +0x019:  mov    0x1c(%ecx),%ecx
087668bc +0x01c:  mov    %eax,-0x14(%ebp)
087668bf +0x01f:  mov    0x30(%esi),%eax
087668c2 +0x022:  mov    -0x14(%ebp),%esi
087668c5 +0x025:  mov    %eax,-0x54(%ebp)
087668c8 +0x028:  lea    -0x28955b88(%esi,%eax,1),%esi
087668cf +0x02f:  mov    %ecx,%eax
087668d1 +0x031:  xor    %edi,%eax
087668d3 +0x033:  and    %edx,%eax
087668d5 +0x035:  xor    %ecx,%eax
087668d7 +0x037:  add    %esi,%eax
087668d9 +0x039:  mov    0x8(%ebp),%esi
087668dc +0x03c:  ror    $0x19,%eax
087668df +0x03f:  add    %edx,%eax
087668e1 +0x041:  mov    0x34(%esi),%esi
087668e4 +0x044:  lea    -0x173848aa(%ecx,%esi,1),%ecx
087668eb +0x04b:  mov    %ecx,-0xc(%ebp)
087668ee +0x04e:  mov    %edi,%ecx
087668f0 +0x050:  mov    %esi,-0x50(%ebp)
087668f3 +0x053:  mov    -0xc(%ebp),%esi
087668f6 +0x056:  xor    %edx,%ecx
087668f8 +0x058:  and    %eax,%ecx
087668fa +0x05a:  xor    %edi,%ecx
087668fc +0x05c:  add    %ecx,%esi
087668fe +0x05e:  mov    0x8(%ebp),%ecx
08766901 +0x061:  ror    $0x14,%esi
08766904 +0x064:  add    %eax,%esi
08766906 +0x066:  mov    0x38(%ecx),%ecx
08766909 +0x069:  mov    %ecx,-0x4c(%ebp)
0876690c +0x06c:  lea    0x242070db(%edi,%ecx,1),%edi
08766913 +0x073:  mov    %eax,%ecx
08766915 +0x075:  xor    %edx,%ecx
08766917 +0x077:  and    %esi,%ecx
08766919 +0x079:  xor    %edx,%ecx
0876691b +0x07b:  lea    (%edi,%ecx,1),%ecx
0876691e +0x07e:  mov    0x8(%ebp),%edi
08766921 +0x081:  ror    $0xf,%ecx
08766924 +0x084:  add    %esi,%ecx
08766926 +0x086:  mov    0x3c(%edi),%edi
08766929 +0x089:  mov    %edi,-0x48(%ebp)
0876692c +0x08c:  lea    -0x3e423112(%edx,%edi,1),%edx
08766933 +0x093:  mov    0x8(%ebp),%edi
08766936 +0x096:  mov    %edx,-0xc(%ebp)
08766939 +0x099:  mov    %esi,%edx
0876693b +0x09b:  xor    %eax,%edx
0876693d +0x09d:  and    %ecx,%edx
0876693f +0x09f:  mov    0x40(%edi),%edi
08766942 +0x0a2:  xor    %eax,%edx
08766944 +0x0a4:  add    -0xc(%ebp),%edx
08766947 +0x0a7:  mov    %edi,-0x44(%ebp)
0876694a +0x0aa:  lea    -0xa83f051(%eax,%edi,1),%eax
08766951 +0x0b1:  mov    0x8(%ebp),%edi
08766954 +0x0b4:  mov    %eax,-0xc(%ebp)
08766957 +0x0b7:  ror    $0xa,%edx
0876695a +0x0ba:  mov    %ecx,%eax
0876695c +0x0bc:  add    %ecx,%edx
0876695e +0x0be:  xor    %esi,%eax
08766960 +0x0c0:  and    %edx,%eax
08766962 +0x0c2:  mov    0x44(%edi),%edi
08766965 +0x0c5:  xor    %esi,%eax
08766967 +0x0c7:  add    -0xc(%ebp),%eax
0876696a +0x0ca:  lea    0x4787c62a(%esi,%edi,1),%esi
08766971 +0x0d1:  mov    %edi,-0x40(%ebp)
08766974 +0x0d4:  mov    0x8(%ebp),%edi
08766977 +0x0d7:  ror    $0x19,%eax
0876697a +0x0da:  mov    %esi,-0xc(%ebp)
0876697d +0x0dd:  mov    %edx,%esi
0876697f +0x0df:  add    %edx,%eax
08766981 +0x0e1:  xor    %ecx,%esi
08766983 +0x0e3:  and    %eax,%esi
08766985 +0x0e5:  mov    0x48(%edi),%edi
08766988 +0x0e8:  xor    %ecx,%esi
0876698a +0x0ea:  add    -0xc(%ebp),%esi
0876698d +0x0ed:  mov    %edi,-0x3c(%ebp)
08766990 +0x0f0:  lea    -0x57cfb9ed(%ecx,%edi,1),%ecx
08766997 +0x0f7:  mov    0x8(%ebp),%edi
0876699a +0x0fa:  mov    %ecx,-0xc(%ebp)
0876699d +0x0fd:  ror    $0x14,%esi
087669a0 +0x100:  mov    %eax,%ecx
087669a2 +0x102:  add    %eax,%esi
087669a4 +0x104:  xor    %edx,%ecx
087669a6 +0x106:  and    %esi,%ecx
087669a8 +0x108:  mov    0x4c(%edi),%edi
087669ab +0x10b:  xor    %edx,%ecx
087669ad +0x10d:  add    -0xc(%ebp),%ecx
087669b0 +0x110:  mov    %edi,-0x38(%ebp)
087669b3 +0x113:  lea    -0x2b96aff(%edx,%edi,1),%edx
087669ba +0x11a:  mov    0x8(%ebp),%edi
087669bd +0x11d:  mov    %edx,-0xc(%ebp)
087669c0 +0x120:  ror    $0xf,%ecx
087669c3 +0x123:  mov    %esi,%edx
087669c5 +0x125:  add    %esi,%ecx
087669c7 +0x127:  xor    %eax,%edx
087669c9 +0x129:  and    %ecx,%edx
087669cb +0x12b:  mov    0x50(%edi),%edi
087669ce +0x12e:  xor    %eax,%edx
087669d0 +0x130:  add    -0xc(%ebp),%edx
087669d3 +0x133:  mov    %edi,-0x34(%ebp)
087669d6 +0x136:  lea    0x698098d8(%eax,%edi,1),%eax
087669dd +0x13d:  mov    0x8(%ebp),%edi
087669e0 +0x140:  mov    %eax,-0xc(%ebp)
087669e3 +0x143:  ror    $0xa,%edx
087669e6 +0x146:  mov    %ecx,%eax
087669e8 +0x148:  add    %ecx,%edx
087669ea +0x14a:  xor    %esi,%eax
087669ec +0x14c:  and    %edx,%eax
087669ee +0x14e:  mov    0x54(%edi),%edi
087669f1 +0x151:  xor    %esi,%eax
087669f3 +0x153:  add    -0xc(%ebp),%eax
087669f6 +0x156:  mov    %edi,-0x30(%ebp)
087669f9 +0x159:  lea    -0x74bb0851(%esi,%edi,1),%esi
08766a00 +0x160:  mov    0x8(%ebp),%edi
08766a03 +0x163:  mov    %esi,-0xc(%ebp)
08766a06 +0x166:  ror    $0x19,%eax
08766a09 +0x169:  mov    %edx,%esi
08766a0b +0x16b:  add    %edx,%eax
08766a0d +0x16d:  xor    %ecx,%esi
08766a0f +0x16f:  and    %eax,%esi
08766a11 +0x171:  mov    0x58(%edi),%edi
08766a14 +0x174:  xor    %ecx,%esi
08766a16 +0x176:  add    -0xc(%ebp),%esi
08766a19 +0x179:  mov    %edi,-0x2c(%ebp)
08766a1c +0x17c:  lea    -0xa44f(%ecx,%edi,1),%ecx
08766a23 +0x183:  mov    0x8(%ebp),%edi
08766a26 +0x186:  mov    %ecx,-0xc(%ebp)
08766a29 +0x189:  ror    $0x14,%esi
08766a2c +0x18c:  mov    %eax,%ecx
08766a2e +0x18e:  add    %eax,%esi
08766a30 +0x190:  xor    %edx,%ecx
08766a32 +0x192:  and    %esi,%ecx
08766a34 +0x194:  mov    0x5c(%edi),%edi
08766a37 +0x197:  xor    %edx,%ecx
08766a39 +0x199:  add    -0xc(%ebp),%ecx
08766a3c +0x19c:  mov    %edi,-0x28(%ebp)
08766a3f +0x19f:  lea    -0x76a32842(%edx,%edi,1),%edx
08766a46 +0x1a6:  mov    0x8(%ebp),%edi
08766a49 +0x1a9:  mov    %edx,-0xc(%ebp)
08766a4c +0x1ac:  ror    $0xf,%ecx
08766a4f +0x1af:  mov    %esi,%edx
08766a51 +0x1b1:  add    %esi,%ecx
08766a53 +0x1b3:  xor    %eax,%edx
08766a55 +0x1b5:  and    %ecx,%edx
08766a57 +0x1b7:  mov    0x60(%edi),%edi
08766a5a +0x1ba:  xor    %eax,%edx
08766a5c +0x1bc:  add    -0xc(%ebp),%edx
08766a5f +0x1bf:  lea    0x6b901122(%eax,%edi,1),%eax
08766a66 +0x1c6:  mov    %edi,-0x24(%ebp)
08766a69 +0x1c9:  mov    0x8(%ebp),%edi
08766a6c +0x1cc:  ror    $0xa,%edx
08766a6f +0x1cf:  mov    %eax,-0xc(%ebp)
08766a72 +0x1d2:  mov    %ecx,%eax
08766a74 +0x1d4:  add    %ecx,%edx
08766a76 +0x1d6:  xor    %esi,%eax
08766a78 +0x1d8:  and    %edx,%eax
08766a7a +0x1da:  mov    0x64(%edi),%edi
08766a7d +0x1dd:  xor    %esi,%eax
08766a7f +0x1df:  add    -0xc(%ebp),%eax
08766a82 +0x1e2:  mov    %edi,-0x20(%ebp)
08766a85 +0x1e5:  lea    -0x2678e6d(%esi,%edi,1),%esi
08766a8c +0x1ec:  mov    0x8(%ebp),%edi
08766a8f +0x1ef:  mov    %esi,-0xc(%ebp)
08766a92 +0x1f2:  ror    $0x19,%eax
08766a95 +0x1f5:  mov    %edx,%esi
08766a97 +0x1f7:  add    %edx,%eax
08766a99 +0x1f9:  xor    %ecx,%esi
08766a9b +0x1fb:  and    %eax,%esi
08766a9d +0x1fd:  mov    0x68(%edi),%edi
08766aa0 +0x200:  xor    %ecx,%esi
08766aa2 +0x202:  add    -0xc(%ebp),%esi
08766aa5 +0x205:  mov    %edi,-0x1c(%ebp)
08766aa8 +0x208:  lea    -0x5986bc72(%ecx,%edi,1),%ecx
08766aaf +0x20f:  mov    0x8(%ebp),%edi
08766ab2 +0x212:  mov    %ecx,-0xc(%ebp)
08766ab5 +0x215:  ror    $0x14,%esi
08766ab8 +0x218:  mov    %eax,%ecx
08766aba +0x21a:  add    %eax,%esi
08766abc +0x21c:  xor    %edx,%ecx
08766abe +0x21e:  and    %esi,%ecx
08766ac0 +0x220:  mov    0x6c(%edi),%edi
08766ac3 +0x223:  xor    %edx,%ecx
08766ac5 +0x225:  add    -0xc(%ebp),%ecx
08766ac8 +0x228:  lea    0x49b40821(%edx,%edi,1),%edx
08766acf +0x22f:  mov    %edx,-0xc(%ebp)
08766ad2 +0x232:  ror    $0xf,%ecx
08766ad5 +0x235:  mov    %esi,%edx
08766ad7 +0x237:  add    %esi,%ecx
08766ad9 +0x239:  xor    %eax,%edx
08766adb +0x23b:  and    %ecx,%edx
08766add +0x23d:  mov    %edi,-0x18(%ebp)
08766ae0 +0x240:  xor    %eax,%edx
08766ae2 +0x242:  mov    -0x50(%ebp),%edi
08766ae5 +0x245:  add    -0xc(%ebp),%edx
08766ae8 +0x248:  ror    $0xa,%edx
08766aeb +0x24b:  add    %ecx,%edx
08766aed +0x24d:  lea    -0x9e1da9e(%eax,%edi,1),%eax
08766af4 +0x254:  mov    -0x3c(%ebp),%edi
08766af7 +0x257:  mov    %eax,-0xc(%ebp)
08766afa +0x25a:  mov    %edx,%eax
08766afc +0x25c:  xor    %ecx,%eax
08766afe +0x25e:  and    %esi,%eax
08766b00 +0x260:  xor    %ecx,%eax
08766b02 +0x262:  add    -0xc(%ebp),%eax
08766b05 +0x265:  lea    -0x3fbf4cc0(%esi,%edi,1),%esi
08766b0c +0x26c:  mov    -0x28(%ebp),%edi
08766b0f +0x26f:  mov    %esi,-0xc(%ebp)
08766b12 +0x272:  ror    $0x1b,%eax
08766b15 +0x275:  add    %edx,%eax
08766b17 +0x277:  mov    %eax,%esi
08766b19 +0x279:  xor    %edx,%esi
08766b1b +0x27b:  and    %ecx,%esi
08766b1d +0x27d:  xor    %edx,%esi
08766b1f +0x27f:  add    -0xc(%ebp),%esi
08766b22 +0x282:  lea    0x265e5a51(%ecx,%edi,1),%ecx
08766b29 +0x289:  mov    -0x54(%ebp),%edi
08766b2c +0x28c:  mov    %ecx,-0xc(%ebp)
08766b2f +0x28f:  ror    $0x17,%esi
08766b32 +0x292:  add    %eax,%esi
08766b34 +0x294:  mov    %esi,%ecx
08766b36 +0x296:  xor    %eax,%ecx
08766b38 +0x298:  and    %edx,%ecx
08766b3a +0x29a:  xor    %eax,%ecx
08766b3c +0x29c:  add    -0xc(%ebp),%ecx
08766b3f +0x29f:  lea    -0x16493856(%edx,%edi,1),%edx
08766b46 +0x2a6:  mov    -0x40(%ebp),%edi
08766b49 +0x2a9:  mov    %edx,-0xc(%ebp)
08766b4c +0x2ac:  ror    $0x12,%ecx
08766b4f +0x2af:  add    %esi,%ecx
08766b51 +0x2b1:  mov    %ecx,%edx
08766b53 +0x2b3:  xor    %esi,%edx
08766b55 +0x2b5:  and    %eax,%edx
08766b57 +0x2b7:  xor    %esi,%edx
08766b59 +0x2b9:  add    -0xc(%ebp),%edx
08766b5c +0x2bc:  lea    -0x29d0efa3(%eax,%edi,1),%eax
08766b63 +0x2c3:  mov    -0x2c(%ebp),%edi
08766b66 +0x2c6:  mov    %eax,-0xc(%ebp)
08766b69 +0x2c9:  ror    $0xc,%edx
08766b6c +0x2cc:  add    %ecx,%edx
08766b6e +0x2ce:  mov    %edx,%eax
08766b70 +0x2d0:  xor    %ecx,%eax
08766b72 +0x2d2:  and    %esi,%eax
08766b74 +0x2d4:  xor    %ecx,%eax
08766b76 +0x2d6:  add    -0xc(%ebp),%eax
08766b79 +0x2d9:  lea    0x2441453(%esi,%edi,1),%esi
08766b80 +0x2e0:  mov    %esi,-0xc(%ebp)
08766b83 +0x2e3:  mov    -0x18(%ebp),%edi
08766b86 +0x2e6:  ror    $0x1b,%eax
08766b89 +0x2e9:  add    %edx,%eax
08766b8b +0x2eb:  mov    %eax,%esi
08766b8d +0x2ed:  xor    %edx,%esi
08766b8f +0x2ef:  and    %ecx,%esi
08766b91 +0x2f1:  xor    %edx,%esi
08766b93 +0x2f3:  add    -0xc(%ebp),%esi
08766b96 +0x2f6:  lea    -0x275e197f(%ecx,%edi,1),%ecx
08766b9d +0x2fd:  mov    -0x44(%ebp),%edi
08766ba0 +0x300:  mov    %ecx,-0xc(%ebp)
08766ba3 +0x303:  ror    $0x17,%esi
08766ba6 +0x306:  add    %eax,%esi
08766ba8 +0x308:  mov    %esi,%ecx
08766baa +0x30a:  xor    %eax,%ecx
08766bac +0x30c:  and    %edx,%ecx
08766bae +0x30e:  xor    %eax,%ecx
08766bb0 +0x310:  add    -0xc(%ebp),%ecx
08766bb3 +0x313:  lea    -0x182c0438(%edx,%edi,1),%edx
08766bba +0x31a:  mov    -0x30(%ebp),%edi
08766bbd +0x31d:  mov    %edx,-0xc(%ebp)
08766bc0 +0x320:  ror    $0x12,%ecx
08766bc3 +0x323:  add    %esi,%ecx
08766bc5 +0x325:  mov    %ecx,%edx
08766bc7 +0x327:  xor    %esi,%edx
08766bc9 +0x329:  and    %eax,%edx
08766bcb +0x32b:  xor    %esi,%edx
08766bcd +0x32d:  add    -0xc(%ebp),%edx
08766bd0 +0x330:  lea    0x21e1cde6(%eax,%edi,1),%eax
08766bd7 +0x337:  mov    -0x1c(%ebp),%edi
08766bda +0x33a:  mov    %eax,-0xc(%ebp)
08766bdd +0x33d:  ror    $0xc,%edx
08766be0 +0x340:  add    %ecx,%edx
08766be2 +0x342:  mov    %edx,%eax
08766be4 +0x344:  xor    %ecx,%eax
08766be6 +0x346:  and    %esi,%eax
08766be8 +0x348:  xor    %ecx,%eax
08766bea +0x34a:  add    -0xc(%ebp),%eax
08766bed +0x34d:  lea    -0x3cc8f82a(%esi,%edi,1),%esi
08766bf4 +0x354:  mov    -0x48(%ebp),%edi
08766bf7 +0x357:  mov    %esi,-0xc(%ebp)
08766bfa +0x35a:  ror    $0x1b,%eax
08766bfd +0x35d:  add    %edx,%eax
08766bff +0x35f:  mov    %eax,%esi
08766c01 +0x361:  xor    %edx,%esi
08766c03 +0x363:  and    %ecx,%esi
08766c05 +0x365:  xor    %edx,%esi
08766c07 +0x367:  add    -0xc(%ebp),%esi
08766c0a +0x36a:  lea    -0xb2af279(%ecx,%edi,1),%ecx
08766c11 +0x371:  mov    -0x34(%ebp),%edi
08766c14 +0x374:  mov    %ecx,-0xc(%ebp)
08766c17 +0x377:  ror    $0x17,%esi
08766c1a +0x37a:  add    %eax,%esi
08766c1c +0x37c:  mov    %esi,%ecx
08766c1e +0x37e:  xor    %eax,%ecx
08766c20 +0x380:  and    %edx,%ecx
08766c22 +0x382:  xor    %eax,%ecx
08766c24 +0x384:  add    -0xc(%ebp),%ecx
08766c27 +0x387:  lea    0x455a14ed(%edx,%edi,1),%edx
08766c2e +0x38e:  mov    -0x20(%ebp),%edi
08766c31 +0x391:  mov    %edx,-0xc(%ebp)
08766c34 +0x394:  ror    $0x12,%ecx
08766c37 +0x397:  add    %esi,%ecx
08766c39 +0x399:  mov    %ecx,%edx
08766c3b +0x39b:  xor    %esi,%edx
08766c3d +0x39d:  and    %eax,%edx
08766c3f +0x39f:  xor    %esi,%edx
08766c41 +0x3a1:  add    -0xc(%ebp),%edx
08766c44 +0x3a4:  lea    -0x561c16fb(%eax,%edi,1),%eax
08766c4b +0x3ab:  mov    -0x4c(%ebp),%edi
08766c4e +0x3ae:  mov    %eax,-0xc(%ebp)
08766c51 +0x3b1:  ror    $0xc,%edx
08766c54 +0x3b4:  add    %ecx,%edx
08766c56 +0x3b6:  mov    %edx,%eax
08766c58 +0x3b8:  xor    %ecx,%eax
08766c5a +0x3ba:  and    %esi,%eax
08766c5c +0x3bc:  xor    %ecx,%eax
08766c5e +0x3be:  add    -0xc(%ebp),%eax
08766c61 +0x3c1:  lea    -0x3105c08(%esi,%edi,1),%esi
08766c68 +0x3c8:  mov    -0x38(%ebp),%edi
08766c6b +0x3cb:  mov    %esi,-0xc(%ebp)
08766c6e +0x3ce:  ror    $0x1b,%eax
08766c71 +0x3d1:  add    %edx,%eax
08766c73 +0x3d3:  mov    %eax,%esi
08766c75 +0x3d5:  xor    %edx,%esi
08766c77 +0x3d7:  and    %ecx,%esi
08766c79 +0x3d9:  xor    %edx,%esi
08766c7b +0x3db:  add    -0xc(%ebp),%esi
08766c7e +0x3de:  lea    0x676f02d9(%ecx,%edi,1),%ecx
08766c85 +0x3e5:  mov    %ecx,-0xc(%ebp)
08766c88 +0x3e8:  ror    $0x17,%esi
08766c8b +0x3eb:  add    %eax,%esi
08766c8d +0x3ed:  mov    %esi,%ecx
08766c8f +0x3ef:  xor    %eax,%ecx
08766c91 +0x3f1:  and    %edx,%ecx
08766c93 +0x3f3:  xor    %eax,%ecx
08766c95 +0x3f5:  add    -0xc(%ebp),%ecx
08766c98 +0x3f8:  ror    $0x12,%ecx
08766c9b +0x3fb:  add    %esi,%ecx
08766c9d +0x3fd:  mov    %ecx,%edi
08766c9f +0x3ff:  xor    %esi,%edi
08766ca1 +0x401:  mov    %edi,-0x10(%ebp)
08766ca4 +0x404:  mov    -0x24(%ebp),%edi
08766ca7 +0x407:  lea    -0x72d5b376(%edx,%edi,1),%edx
08766cae +0x40e:  mov    %edx,-0xc(%ebp)
08766cb1 +0x411:  mov    -0x10(%ebp),%edx
08766cb4 +0x414:  mov    -0xc(%ebp),%edi
08766cb7 +0x417:  and    %eax,%edx
08766cb9 +0x419:  xor    %esi,%edx
08766cbb +0x41b:  add    %edx,%edi
08766cbd +0x41d:  mov    -0x40(%ebp),%edx
08766cc0 +0x420:  ror    $0xc,%edi
08766cc3 +0x423:  add    %ecx,%edi
08766cc5 +0x425:  lea    -0x5c6be(%eax,%edx,1),%eax
08766ccc +0x42c:  mov    %eax,-0xc(%ebp)
08766ccf +0x42f:  mov    -0x10(%ebp),%eax
08766cd2 +0x432:  mov    -0x34(%ebp),%edx
08766cd5 +0x435:  xor    %edi,%eax
08766cd7 +0x437:  add    -0xc(%ebp),%eax
08766cda +0x43a:  lea    -0x788e097f(%esi,%edx,1),%esi
08766ce1 +0x441:  mov    %edi,%edx
08766ce3 +0x443:  xor    %ecx,%edx
08766ce5 +0x445:  ror    $0x1c,%eax
08766ce8 +0x448:  add    %edi,%eax
08766cea +0x44a:  xor    %eax,%edx
08766cec +0x44c:  lea    (%esi,%edx,1),%edx
08766cef +0x44f:  mov    -0x28(%ebp),%esi
08766cf2 +0x452:  ror    $0x15,%edx
08766cf5 +0x455:  add    %eax,%edx
08766cf7 +0x457:  lea    0x6d9d6122(%ecx,%esi,1),%ecx
08766cfe +0x45e:  mov    -0x1c(%ebp),%esi
08766d01 +0x461:  mov    %ecx,-0xc(%ebp)
08766d04 +0x464:  mov    %eax,%ecx
08766d06 +0x466:  xor    %edi,%ecx
08766d08 +0x468:  xor    %edx,%ecx
08766d0a +0x46a:  add    -0xc(%ebp),%ecx
08766d0d +0x46d:  lea    -0x21ac7f4(%edi,%esi,1),%edi
08766d14 +0x474:  mov    %edx,%esi
08766d16 +0x476:  xor    %eax,%esi
08766d18 +0x478:  ror    $0x10,%ecx
08766d1b +0x47b:  add    %edx,%ecx
08766d1d +0x47d:  xor    %ecx,%esi
08766d1f +0x47f:  lea    (%edi,%esi,1),%esi
08766d22 +0x482:  mov    -0x50(%ebp),%edi
08766d25 +0x485:  ror    $0x9,%esi
08766d28 +0x488:  add    %ecx,%esi
08766d2a +0x48a:  lea    -0x5b4115bc(%eax,%edi,1),%eax
08766d31 +0x491:  mov    -0x44(%ebp),%edi
08766d34 +0x494:  mov    %eax,-0xc(%ebp)
08766d37 +0x497:  mov    %ecx,%eax
08766d39 +0x499:  xor    %edx,%eax
08766d3b +0x49b:  xor    %esi,%eax
08766d3d +0x49d:  add    -0xc(%ebp),%eax
08766d40 +0x4a0:  lea    0x4bdecfa9(%edx,%edi,1),%edx
08766d47 +0x4a7:  mov    %edx,-0xc(%ebp)
08766d4a +0x4aa:  mov    -0xc(%ebp),%edi
08766d4d +0x4ad:  mov    %esi,%edx
08766d4f +0x4af:  ror    $0x1c,%eax
08766d52 +0x4b2:  xor    %ecx,%edx
08766d54 +0x4b4:  add    %esi,%eax
08766d56 +0x4b6:  xor    %eax,%edx
08766d58 +0x4b8:  add    %edx,%edi
08766d5a +0x4ba:  mov    -0x38(%ebp),%edx
08766d5d +0x4bd:  ror    $0x15,%edi
08766d60 +0x4c0:  add    %eax,%edi
08766d62 +0x4c2:  lea    -&_ZZN9UdpThread15_processUDPDataEPciE14packet_counter+0xd220(%ecx,%edx,1),%ecx
08766d69 +0x4c9:  mov    %eax,%edx
08766d6b +0x4cb:  xor    %esi,%edx
08766d6d +0x4cd:  xor    %edi,%edx
08766d6f +0x4cf:  add    %edx,%ecx
08766d71 +0x4d1:  mov    -0x2c(%ebp),%edx
08766d74 +0x4d4:  ror    $0x10,%ecx
08766d77 +0x4d7:  add    %edi,%ecx
08766d79 +0x4d9:  lea    -0x41404390(%esi,%edx,1),%esi
08766d80 +0x4e0:  mov    %edi,%edx
08766d82 +0x4e2:  xor    %eax,%edx
08766d84 +0x4e4:  xor    %ecx,%edx
08766d86 +0x4e6:  lea    (%esi,%edx,1),%edx
08766d89 +0x4e9:  mov    -0x20(%ebp),%esi
08766d8c +0x4ec:  ror    $0x9,%edx
08766d8f +0x4ef:  add    %ecx,%edx
08766d91 +0x4f1:  lea    0x289b7ec6(%eax,%esi,1),%eax
08766d98 +0x4f8:  mov    %eax,-0xc(%ebp)
08766d9b +0x4fb:  mov    -0xc(%ebp),%esi
08766d9e +0x4fe:  mov    %ecx,%eax
08766da0 +0x500:  xor    %edi,%eax
08766da2 +0x502:  xor    %edx,%eax
08766da4 +0x504:  add    %eax,%esi
08766da6 +0x506:  mov    -0x54(%ebp),%eax
08766da9 +0x509:  ror    $0x1c,%esi
08766dac +0x50c:  add    %edx,%esi
08766dae +0x50e:  lea    -0x155ed806(%edi,%eax,1),%edi
08766db5 +0x515:  mov    %edx,%eax
08766db7 +0x517:  xor    %ecx,%eax
08766db9 +0x519:  xor    %esi,%eax
08766dbb +0x51b:  add    %eax,%edi
08766dbd +0x51d:  mov    -0x48(%ebp),%eax
08766dc0 +0x520:  ror    $0x15,%edi
08766dc3 +0x523:  add    %esi,%edi
08766dc5 +0x525:  lea    -0x2b10cf7b(%ecx,%eax,1),%ecx
08766dcc +0x52c:  mov    %esi,%eax
08766dce +0x52e:  xor    %edx,%eax
08766dd0 +0x530:  xor    %edi,%eax
08766dd2 +0x532:  lea    (%ecx,%eax,1),%eax
08766dd5 +0x535:  mov    -0x3c(%ebp),%ecx
08766dd8 +0x538:  ror    $0x10,%eax
08766ddb +0x53b:  add    %edi,%eax
08766ddd +0x53d:  lea    0x4881d05(%edx,%ecx,1),%edx
08766de4 +0x544:  mov    %edx,-0xc(%ebp)
08766de7 +0x547:  mov    -0xc(%ebp),%ecx
08766dea +0x54a:  mov    %edi,%edx
08766dec +0x54c:  xor    %esi,%edx
08766dee +0x54e:  xor    %eax,%edx
08766df0 +0x550:  add    %edx,%ecx
08766df2 +0x552:  mov    -0x30(%ebp),%edx
08766df5 +0x555:  ror    $0x9,%ecx
08766df8 +0x558:  add    %eax,%ecx
08766dfa +0x55a:  lea    -0x262b2fc7(%esi,%edx,1),%esi
08766e01 +0x561:  mov    %eax,%edx
08766e03 +0x563:  xor    %edi,%edx
08766e05 +0x565:  xor    %ecx,%edx
08766e07 +0x567:  add    %edx,%esi
08766e09 +0x569:  mov    -0x24(%ebp),%edx
08766e0c +0x56c:  ror    $0x1c,%esi
08766e0f +0x56f:  add    %ecx,%esi
08766e11 +0x571:  lea    -0x1924661b(%edi,%edx,1),%edi
08766e18 +0x578:  mov    %ecx,%edx
08766e1a +0x57a:  xor    %eax,%edx
08766e1c +0x57c:  xor    %esi,%edx
08766e1e +0x57e:  lea    (%edi,%edx,1),%edx
08766e21 +0x581:  mov    -0x18(%ebp),%edi
08766e24 +0x584:  ror    $0x15,%edx
08766e27 +0x587:  add    %esi,%edx
08766e29 +0x589:  lea    0x1fa27cf8(%eax,%edi,1),%eax
08766e30 +0x590:  mov    %eax,-0xc(%ebp)
08766e33 +0x593:  mov    -0xc(%ebp),%edi
08766e36 +0x596:  mov    %esi,%eax
08766e38 +0x598:  xor    %ecx,%eax
08766e3a +0x59a:  xor    %edx,%eax
08766e3c +0x59c:  add    %eax,%edi
08766e3e +0x59e:  mov    -0x4c(%ebp),%eax
08766e41 +0x5a1:  ror    $0x10,%edi
08766e44 +0x5a4:  add    %edx,%edi
08766e46 +0x5a6:  lea    -0x3b53a99b(%ecx,%eax,1),%ecx
08766e4d +0x5ad:  mov    %edx,%eax
08766e4f +0x5af:  xor    %esi,%eax
08766e51 +0x5b1:  xor    %edi,%eax
08766e53 +0x5b3:  add    %eax,%ecx
08766e55 +0x5b5:  mov    -0x54(%ebp),%eax
08766e58 +0x5b8:  ror    $0x9,%ecx
08766e5b +0x5bb:  add    %edi,%ecx
08766e5d +0x5bd:  lea    -0xbd6ddbc(%esi,%eax,1),%esi
08766e64 +0x5c4:  mov    %edx,%eax
08766e66 +0x5c6:  not    %eax
08766e68 +0x5c8:  or     %ecx,%eax
08766e6a +0x5ca:  xor    %edi,%eax
08766e6c +0x5cc:  lea    (%esi,%eax,1),%eax
08766e6f +0x5cf:  mov    -0x38(%ebp),%esi
08766e72 +0x5d2:  ror    $0x1a,%eax
08766e75 +0x5d5:  add    %ecx,%eax
08766e77 +0x5d7:  lea    0x432aff97(%edx,%esi,1),%edx
08766e7e +0x5de:  mov    %edx,-0xc(%ebp)
08766e81 +0x5e1:  mov    %edi,%edx
08766e83 +0x5e3:  mov    -0xc(%ebp),%esi
08766e86 +0x5e6:  not    %edx
08766e88 +0x5e8:  or     %eax,%edx
08766e8a +0x5ea:  xor    %ecx,%edx
08766e8c +0x5ec:  add    %edx,%esi
08766e8e +0x5ee:  mov    -0x1c(%ebp),%edx
08766e91 +0x5f1:  ror    $0x16,%esi
08766e94 +0x5f4:  add    %eax,%esi
08766e96 +0x5f6:  lea    -0x546bdc59(%edi,%edx,1),%edi
08766e9d +0x5fd:  mov    %ecx,%edx
08766e9f +0x5ff:  not    %edx
08766ea1 +0x601:  or     %esi,%edx
08766ea3 +0x603:  xor    %eax,%edx
08766ea5 +0x605:  add    %edx,%edi
08766ea7 +0x607:  mov    -0x40(%ebp),%edx
08766eaa +0x60a:  ror    $0x11,%edi
08766ead +0x60d:  add    %esi,%edi
08766eaf +0x60f:  lea    -0x36c5fc7(%ecx,%edx,1),%ecx
08766eb6 +0x616:  mov    %eax,%edx
08766eb8 +0x618:  not    %edx
08766eba +0x61a:  or     %edi,%edx
08766ebc +0x61c:  xor    %esi,%edx
08766ebe +0x61e:  lea    (%ecx,%edx,1),%edx
08766ec1 +0x621:  mov    -0x24(%ebp),%ecx
08766ec4 +0x624:  ror    $0xb,%edx
08766ec7 +0x627:  add    %edi,%edx
08766ec9 +0x629:  lea    0x655b59c3(%eax,%ecx,1),%eax
08766ed0 +0x630:  mov    %eax,-0xc(%ebp)
08766ed3 +0x633:  mov    -0xc(%ebp),%ecx
08766ed6 +0x636:  mov    %esi,%eax
08766ed8 +0x638:  not    %eax
08766eda +0x63a:  or     %edx,%eax
08766edc +0x63c:  xor    %edi,%eax
08766ede +0x63e:  add    %eax,%ecx
08766ee0 +0x640:  mov    -0x48(%ebp),%eax
08766ee3 +0x643:  ror    $0x1a,%ecx
08766ee6 +0x646:  add    %edx,%ecx
08766ee8 +0x648:  lea    -0x70f3336e(%esi,%eax,1),%esi
08766eef +0x64f:  mov    %edi,%eax
08766ef1 +0x651:  not    %eax
08766ef3 +0x653:  or     %ecx,%eax
08766ef5 +0x655:  xor    %edx,%eax
08766ef7 +0x657:  add    %eax,%esi
08766ef9 +0x659:  mov    -0x2c(%ebp),%eax
08766efc +0x65c:  ror    $0x16,%esi
08766eff +0x65f:  add    %ecx,%esi
08766f01 +0x661:  lea    -0x100b83(%edi,%eax,1),%edi
08766f08 +0x668:  mov    %edx,%eax
08766f0a +0x66a:  not    %eax
08766f0c +0x66c:  or     %esi,%eax
08766f0e +0x66e:  xor    %ecx,%eax
08766f10 +0x670:  lea    (%edi,%eax,1),%eax
08766f13 +0x673:  mov    -0x50(%ebp),%edi
08766f16 +0x676:  ror    $0x11,%eax
08766f19 +0x679:  add    %esi,%eax
08766f1b +0x67b:  lea    -0x7a7ba22f(%edx,%edi,1),%edx
08766f22 +0x682:  mov    %edx,-0xc(%ebp)
08766f25 +0x685:  mov    %ecx,%edx
08766f27 +0x687:  mov    -0xc(%ebp),%edi
08766f2a +0x68a:  not    %edx
08766f2c +0x68c:  or     %eax,%edx
08766f2e +0x68e:  xor    %esi,%edx
08766f30 +0x690:  add    %edx,%edi
08766f32 +0x692:  mov    -0x34(%ebp),%edx
08766f35 +0x695:  ror    $0xb,%edi
08766f38 +0x698:  add    %eax,%edi
08766f3a +0x69a:  lea    0x6fa87e4f(%ecx,%edx,1),%ecx
08766f41 +0x6a1:  mov    %esi,%edx
08766f43 +0x6a3:  not    %edx
08766f45 +0x6a5:  or     %edi,%edx
08766f47 +0x6a7:  xor    %eax,%edx
08766f49 +0x6a9:  add    %edx,%ecx
08766f4b +0x6ab:  mov    -0x18(%ebp),%edx
08766f4e +0x6ae:  ror    $0x1a,%ecx
08766f51 +0x6b1:  add    %edi,%ecx
08766f53 +0x6b3:  lea    -0x1d31920(%esi,%edx,1),%esi
08766f5a +0x6ba:  mov    %eax,%edx
08766f5c +0x6bc:  not    %edx
08766f5e +0x6be:  or     %ecx,%edx
08766f60 +0x6c0:  xor    %edi,%edx
08766f62 +0x6c2:  lea    (%esi,%edx,1),%edx
08766f65 +0x6c5:  mov    -0x3c(%ebp),%esi
08766f68 +0x6c8:  ror    $0x16,%edx
08766f6b +0x6cb:  add    %ecx,%edx
08766f6d +0x6cd:  lea    -0x5cfebcec(%eax,%esi,1),%eax
08766f74 +0x6d4:  mov    %eax,-0xc(%ebp)
08766f77 +0x6d7:  mov    %edi,%eax
08766f79 +0x6d9:  mov    -0xc(%ebp),%esi
08766f7c +0x6dc:  not    %eax
08766f7e +0x6de:  or     %edx,%eax
08766f80 +0x6e0:  xor    %ecx,%eax
08766f82 +0x6e2:  add    %eax,%esi
08766f84 +0x6e4:  mov    -0x20(%ebp),%eax
08766f87 +0x6e7:  ror    $0x11,%esi
08766f8a +0x6ea:  add    %edx,%esi
08766f8c +0x6ec:  lea    0x4e0811a1(%edi,%eax,1),%edi
08766f93 +0x6f3:  mov    %ecx,%eax
08766f95 +0x6f5:  not    %eax
08766f97 +0x6f7:  or     %esi,%eax
08766f99 +0x6f9:  xor    %edx,%eax
08766f9b +0x6fb:  add    %eax,%edi
08766f9d +0x6fd:  mov    -0x44(%ebp),%eax
08766fa0 +0x700:  ror    $0xb,%edi
08766fa3 +0x703:  add    %esi,%edi
08766fa5 +0x705:  lea    -&_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE9push_backERKS3_+0x10(%ecx,%eax,1),%ecx
08766fac +0x70c:  mov    %edx,%eax
08766fae +0x70e:  not    %eax
08766fb0 +0x710:  or     %edi,%eax
08766fb2 +0x712:  xor    %esi,%eax
08766fb4 +0x714:  lea    (%ecx,%eax,1),%eax
08766fb7 +0x717:  mov    -0x28(%ebp),%ecx
08766fba +0x71a:  ror    $0x1a,%eax
08766fbd +0x71d:  add    %edi,%eax
08766fbf +0x71f:  lea    -0x42c50dcb(%edx,%ecx,1),%edx
08766fc6 +0x726:  mov    %edx,-0xc(%ebp)
08766fc9 +0x729:  mov    %esi,%edx
08766fcb +0x72b:  mov    -0xc(%ebp),%ecx
08766fce +0x72e:  not    %edx
08766fd0 +0x730:  or     %eax,%edx
08766fd2 +0x732:  xor    %edi,%edx
08766fd4 +0x734:  add    %edx,%ecx
08766fd6 +0x736:  mov    -0x4c(%ebp),%edx
08766fd9 +0x739:  ror    $0x16,%ecx
08766fdc +0x73c:  add    %eax,%ecx
08766fde +0x73e:  lea    0x2ad7d2bb(%esi,%edx,1),%esi
08766fe5 +0x745:  mov    %edi,%edx
08766fe7 +0x747:  not    %edx
08766fe9 +0x749:  or     %ecx,%edx
08766feb +0x74b:  xor    %eax,%edx
08766fed +0x74d:  lea    (%esi,%edx,1),%edx
08766ff0 +0x750:  mov    0x8(%ebp),%esi
08766ff3 +0x753:  ror    $0x11,%edx
08766ff6 +0x756:  add    %ecx,%edx
08766ff8 +0x758:  mov    %edx,-0x10(%ebp)
08766ffb +0x75b:  mov    -0x14(%ebp),%edx
08766ffe +0x75e:  lea    (%eax,%edx,1),%edx
08767001 +0x761:  not    %eax
08767003 +0x763:  mov    %edx,0x10(%esi)
08767006 +0x766:  mov    -0x10(%ebp),%edx
08767009 +0x769:  add    0x14(%esi),%edx
0876700c +0x76c:  or     -0x10(%ebp),%eax
0876700f +0x76f:  mov    %edx,-0xc(%ebp)
08767012 +0x772:  mov    -0x30(%ebp),%edx
08767015 +0x775:  xor    %ecx,%eax
08767017 +0x777:  lea    -0x14792c6f(%edi,%edx,1),%esi
0876701e +0x77e:  mov    -0x10(%ebp),%edi
08767021 +0x781:  lea    (%esi,%eax,1),%eax
08767024 +0x784:  mov    0x8(%ebp),%esi
08767027 +0x787:  ror    $0xb,%eax
0876702a +0x78a:  add    -0xc(%ebp),%eax
0876702d +0x78d:  add    %edi,0x18(%esi)
08767030 +0x790:  add    %ecx,0x1c(%esi)
08767033 +0x793:  mov    %eax,0x14(%esi)
08767036 +0x796:  add    $0x4c,%esp
08767039 +0x799:  pop    %esi
0876703a +0x79a:  pop    %edi
0876703b +0x79b:  pop    %ebp
0876703c +0x79c:  ret
0876703d +0x79d:  nop
0876703e +0x79e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::MD5::Transform @ 0x87668a0

/* TaoCrypt::MD5::Transform() */

void __thiscall TaoCrypt::MD5::Transform(MD5 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar22 = *(uint *)(this + 0x14);
  uVar18 = *(uint *)(this + 0x18);
  uVar20 = *(uint *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x30);
  uVar17 = ((uVar20 ^ uVar18) & uVar22 ^ uVar20) + *(int *)(this + 0x10) + -0x28955b88 + iVar1;
  uVar17 = (uVar17 >> 0x19 | uVar17 * 0x80) + uVar22;
  iVar2 = *(int *)(this + 0x34);
  uVar20 = uVar20 + 0xe8c7b756 + iVar2 + ((uVar18 ^ uVar22) & uVar17 ^ uVar18);
  uVar21 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar17;
  iVar3 = *(int *)(this + 0x38);
  uVar18 = uVar18 + 0x242070db + iVar3 + ((uVar17 ^ uVar22) & uVar21 ^ uVar22);
  uVar20 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar21;
  iVar4 = *(int *)(this + 0x3c);
  iVar5 = *(int *)(this + 0x40);
  uVar18 = ((uVar21 ^ uVar17) & uVar20 ^ uVar17) + uVar22 + 0xc1bdceee + iVar4;
  uVar19 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar20;
  iVar6 = *(int *)(this + 0x44);
  uVar18 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) + uVar17 + 0xf57c0faf + iVar5;
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar19;
  iVar7 = *(int *)(this + 0x48);
  uVar22 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) + uVar21 + 0x4787c62a + iVar6;
  uVar17 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar18;
  iVar8 = *(int *)(this + 0x4c);
  uVar22 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) + uVar20 + 0xa8304613 + iVar7;
  uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar17;
  iVar9 = *(int *)(this + 0x50);
  uVar20 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + uVar19 + 0xfd469501 + iVar8;
  uVar20 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar22;
  iVar10 = *(int *)(this + 0x54);
  uVar18 = ((uVar22 ^ uVar17) & uVar20 ^ uVar17) + uVar18 + 0x698098d8 + iVar9;
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar20;
  iVar11 = *(int *)(this + 0x58);
  uVar17 = ((uVar20 ^ uVar22) & uVar18 ^ uVar22) + uVar17 + 0x8b44f7af + iVar10;
  uVar17 = (uVar17 >> 0x14 | uVar17 * 0x1000) + uVar18;
  iVar12 = *(int *)(this + 0x5c);
  uVar22 = ((uVar18 ^ uVar20) & uVar17 ^ uVar20) + (uVar22 - 0xa44f) + iVar11;
  uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar17;
  iVar13 = *(int *)(this + 0x60);
  uVar20 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + uVar20 + 0x895cd7be + iVar12;
  uVar20 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar22;
  iVar14 = *(int *)(this + 100);
  uVar18 = ((uVar22 ^ uVar17) & uVar20 ^ uVar17) + uVar18 + 0x6b901122 + iVar13;
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar20;
  iVar15 = *(int *)(this + 0x68);
  uVar17 = ((uVar20 ^ uVar22) & uVar18 ^ uVar22) + uVar17 + 0xfd987193 + iVar14;
  uVar17 = (uVar17 >> 0x14 | uVar17 * 0x1000) + uVar18;
  iVar16 = *(int *)(this + 0x6c);
  uVar22 = ((uVar18 ^ uVar20) & uVar17 ^ uVar20) + uVar22 + 0xa679438e + iVar15;
  uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar17;
  uVar20 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + uVar20 + 0x49b40821 + iVar16;
  uVar20 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar22;
  uVar18 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + uVar18 + 0xf61e2562 + iVar2;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar20;
  uVar17 = ((uVar18 ^ uVar20) & uVar22 ^ uVar20) + uVar17 + 0xc040b340 + iVar7;
  uVar17 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
  uVar22 = ((uVar17 ^ uVar18) & uVar20 ^ uVar18) + uVar22 + 0x265e5a51 + iVar12;
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar17;
  uVar20 = ((uVar22 ^ uVar17) & uVar18 ^ uVar17) + uVar20 + 0xe9b6c7aa + iVar1;
  uVar20 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar22;
  uVar18 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + uVar18 + 0xd62f105d + iVar6;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar20;
  uVar17 = ((uVar18 ^ uVar20) & uVar22 ^ uVar20) + uVar17 + 0x2441453 + iVar11;
  uVar17 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
  uVar22 = ((uVar17 ^ uVar18) & uVar20 ^ uVar18) + uVar22 + 0xd8a1e681 + iVar16;
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar17;
  uVar20 = ((uVar22 ^ uVar17) & uVar18 ^ uVar17) + uVar20 + 0xe7d3fbc8 + iVar5;
  uVar20 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar22;
  uVar18 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + uVar18 + 0x21e1cde6 + iVar10;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar20;
  uVar17 = ((uVar18 ^ uVar20) & uVar22 ^ uVar20) + uVar17 + 0xc33707d6 + iVar15;
  uVar19 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
  uVar22 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar22 + 0xf4d50d87 + iVar4;
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar19;
  uVar20 = ((uVar22 ^ uVar19) & uVar18 ^ uVar19) + uVar20 + 0x455a14ed + iVar9;
  uVar17 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar22;
  uVar18 = ((uVar17 ^ uVar22) & uVar19 ^ uVar22) + uVar18 + 0xa9e3e905 + iVar14;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar17;
  uVar20 = ((uVar18 ^ uVar17) & uVar22 ^ uVar17) + uVar19 + 0xfcefa3f8 + iVar3;
  uVar19 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar18;
  uVar22 = ((uVar19 ^ uVar18) & uVar17 ^ uVar18) + uVar22 + 0x676f02d9 + iVar8;
  uVar20 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar19;
  uVar22 = uVar17 + 0x8d2a4c8a + iVar13 + ((uVar20 ^ uVar19) & uVar18 ^ uVar19);
  uVar21 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar20;
  uVar18 = (uVar20 ^ uVar19 ^ uVar21) + (uVar18 - 0x5c6be) + iVar6;
  uVar22 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar21;
  uVar18 = uVar19 + 0x8771f681 + iVar9 + (uVar21 ^ uVar20 ^ uVar22);
  uVar17 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar22;
  uVar18 = (uVar22 ^ uVar21 ^ uVar17) + uVar20 + 0x6d9d6122 + iVar12;
  uVar20 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar17;
  uVar18 = uVar21 + 0xfde5380c + iVar15 + (uVar17 ^ uVar22 ^ uVar20);
  uVar19 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
  uVar18 = (uVar20 ^ uVar17 ^ uVar19) + uVar22 + 0xa4beea44 + iVar2;
  uVar22 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar19;
  uVar18 = uVar17 + 0x4bdecfa9 + iVar5 + (uVar19 ^ uVar20 ^ uVar22);
  uVar21 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar22;
  uVar18 = uVar20 + 0xf6bb4b60 + iVar8 + (uVar22 ^ uVar19 ^ uVar21);
  uVar20 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar21;
  uVar18 = uVar19 + 0xbebfbc70 + iVar11 + (uVar21 ^ uVar22 ^ uVar20);
  uVar17 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
  uVar18 = uVar22 + 0x289b7ec6 + iVar14 + (uVar20 ^ uVar21 ^ uVar17);
  uVar19 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar17;
  uVar18 = uVar21 + 0xeaa127fa + iVar1 + (uVar17 ^ uVar20 ^ uVar19);
  uVar21 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar18 = uVar20 + 0xd4ef3085 + iVar4 + (uVar19 ^ uVar17 ^ uVar21);
  uVar22 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar21;
  uVar18 = uVar17 + 0x4881d05 + iVar7 + (uVar21 ^ uVar19 ^ uVar22);
  uVar20 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar22;
  uVar18 = uVar19 + 0xd9d4d039 + iVar10 + (uVar22 ^ uVar21 ^ uVar20);
  uVar19 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar20;
  uVar18 = uVar21 + 0xe6db99e5 + iVar13 + (uVar20 ^ uVar22 ^ uVar19);
  uVar17 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar18 = uVar22 + 0x1fa27cf8 + iVar16 + (uVar19 ^ uVar20 ^ uVar17);
  uVar21 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar17;
  uVar18 = uVar20 + 0xc4ac5665 + iVar3 + (uVar17 ^ uVar19 ^ uVar21);
  uVar20 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar21;
  uVar18 = uVar19 + 0xf4292244 + iVar1 + ((~uVar17 | uVar20) ^ uVar21);
  uVar22 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar20;
  uVar18 = uVar17 + 0x432aff97 + iVar8 + ((~uVar21 | uVar22) ^ uVar20);
  uVar19 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar22;
  uVar18 = uVar21 + 0xab9423a7 + iVar15 + ((~uVar20 | uVar19) ^ uVar22);
  uVar21 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar19;
  uVar18 = uVar20 + 0xfc93a039 + iVar6 + ((~uVar22 | uVar21) ^ uVar19);
  uVar17 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
  uVar18 = uVar22 + 0x655b59c3 + iVar13 + ((~uVar19 | uVar17) ^ uVar21);
  uVar20 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar17;
  uVar18 = uVar19 + 0x8f0ccc92 + iVar4 + ((~uVar21 | uVar20) ^ uVar17);
  uVar19 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar20;
  uVar18 = (uVar21 - 0x100b83) + iVar11 + ((~uVar17 | uVar19) ^ uVar20);
  uVar22 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar19;
  uVar18 = uVar17 + 0x85845dd1 + iVar2 + ((~uVar20 | uVar22) ^ uVar19);
  uVar21 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar22;
  uVar18 = uVar20 + 0x6fa87e4f + iVar9 + ((~uVar19 | uVar21) ^ uVar22);
  uVar20 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
  uVar18 = uVar19 + 0xfe2ce6e0 + iVar16 + ((~uVar22 | uVar20) ^ uVar21);
  uVar17 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar20;
  uVar18 = uVar22 + 0xa3014314 + iVar7 + ((~uVar21 | uVar17) ^ uVar20);
  uVar19 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar17;
  uVar18 = uVar21 + 0x4e0811a1 + iVar14 + ((~uVar20 | uVar19) ^ uVar17);
  uVar21 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar19;
  uVar18 = uVar20 + 0xf7537e82 + iVar5 + ((~uVar17 | uVar21) ^ uVar19);
  uVar22 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
  uVar18 = uVar17 + 0xbd3af235 + iVar12 + ((~uVar19 | uVar22) ^ uVar21);
  uVar20 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar22;
  uVar18 = uVar19 + 0x2ad7d2bb + iVar3 + ((~uVar21 | uVar20) ^ uVar22);
  uVar17 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar20;
  *(uint *)(this + 0x10) = uVar22 + *(int *)(this + 0x10);
  uVar18 = uVar21 + 0xeb86d391 + iVar10 + ((~uVar22 | uVar17) ^ uVar20);
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar17;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar20;
  *(uint *)(this + 0x14) = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar17 + *(int *)(this + 0x14);
  return;
}
```
