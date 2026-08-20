# Transform

`_ZN8TaoCrypt9RIPEMD1609TransformEv`

`TaoCrypt::RIPEMD160::Transform()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RIPEMD160` | `0x087a8d20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8d20  _ZN8TaoCrypt9RIPEMD1609TransformEv
#           TaoCrypt::RIPEMD160::Transform()
# range [0x087a8d20, 0x087aa2f9]
087a8d20 +0x0000:  push   %ebp
087a8d21 +0x0001:  mov    %esp,%ebp
087a8d23 +0x0003:  push   %edi
087a8d24 +0x0004:  push   %esi
087a8d25 +0x0005:  sub    $0x88,%esp
087a8d2b +0x000b:  mov    0x8(%ebp),%eax
087a8d2e +0x000e:  mov    0x8(%ebp),%ecx
087a8d31 +0x0011:  mov    0x8(%ebp),%edx
087a8d34 +0x0014:  mov    0x8(%ebp),%esi
087a8d37 +0x0017:  mov    0x10(%eax),%eax
087a8d3a +0x001a:  mov    0x18(%ecx),%ecx
087a8d3d +0x001d:  mov    0x14(%edx),%edx
087a8d40 +0x0020:  mov    0x1c(%esi),%esi
087a8d43 +0x0023:  mov    %eax,-0x48(%ebp)
087a8d46 +0x0026:  mov    0x8(%ebp),%eax
087a8d49 +0x0029:  mov    %ecx,-0x44(%ebp)
087a8d4c +0x002c:  mov    -0x48(%ebp),%ecx
087a8d4f +0x002f:  mov    0x8(%ebp),%edi
087a8d52 +0x0032:  mov    %esi,-0x40(%ebp)
087a8d55 +0x0035:  mov    0x30(%eax),%eax
087a8d58 +0x0038:  mov    %edx,-0x24(%ebp)
087a8d5b +0x003b:  mov    0x20(%edi),%edi
087a8d5e +0x003e:  mov    %eax,-0x88(%ebp)
087a8d64 +0x0044:  add    %eax,%ecx
087a8d66 +0x0046:  mov    -0x44(%ebp),%eax
087a8d69 +0x0049:  mov    %edi,-0x3c(%ebp)
087a8d6c +0x004c:  xor    %edx,%eax
087a8d6e +0x004e:  mov    -0x44(%ebp),%edx
087a8d71 +0x0051:  xor    %esi,%eax
087a8d73 +0x0053:  mov    0x8(%ebp),%esi
087a8d76 +0x0056:  add    %eax,%ecx
087a8d78 +0x0058:  ror    $0x15,%ecx
087a8d7b +0x005b:  ror    $0x16,%edx
087a8d7e +0x005e:  add    %edi,%ecx
087a8d80 +0x0060:  mov    0x34(%esi),%esi
087a8d83 +0x0063:  mov    %edx,-0x20(%ebp)
087a8d86 +0x0066:  mov    -0x20(%ebp),%eax
087a8d89 +0x0069:  xor    -0x24(%ebp),%eax
087a8d8c +0x006c:  mov    %esi,%edx
087a8d8e +0x006e:  add    %edi,%edx
087a8d90 +0x0070:  mov    -0x24(%ebp),%edi
087a8d93 +0x0073:  xor    %ecx,%eax
087a8d95 +0x0075:  lea    (%edx,%eax,1),%eax
087a8d98 +0x0078:  mov    %esi,-0x84(%ebp)
087a8d9e +0x007e:  ror    $0x12,%eax
087a8da1 +0x0081:  add    -0x40(%ebp),%eax
087a8da4 +0x0084:  ror    $0x16,%edi
087a8da7 +0x0087:  mov    %edi,-0x1c(%ebp)
087a8daa +0x008a:  mov    0x8(%ebp),%edx
087a8dad +0x008d:  mov    -0x40(%ebp),%esi
087a8db0 +0x0090:  mov    0x38(%edx),%edx
087a8db3 +0x0093:  mov    %edx,-0x80(%ebp)
087a8db6 +0x0096:  add    %edx,%esi
087a8db8 +0x0098:  mov    %edi,%edx
087a8dba +0x009a:  mov    0x8(%ebp),%edi
087a8dbd +0x009d:  xor    %ecx,%edx
087a8dbf +0x009f:  xor    %eax,%edx
087a8dc1 +0x00a1:  add    %edx,%esi
087a8dc3 +0x00a3:  mov    %eax,%edx
087a8dc5 +0x00a5:  ror    $0x16,%eax
087a8dc8 +0x00a8:  mov    0x3c(%edi),%edi
087a8dcb +0x00ab:  ror    $0x11,%esi
087a8dce +0x00ae:  mov    %eax,-0xc(%ebp)
087a8dd1 +0x00b1:  mov    0x8(%ebp),%eax
087a8dd4 +0x00b4:  ror    $0x16,%ecx
087a8dd7 +0x00b7:  add    -0x20(%ebp),%esi
087a8dda +0x00ba:  xor    %ecx,%edx
087a8ddc +0x00bc:  mov    %edi,-0x7c(%ebp)
087a8ddf +0x00bf:  mov    -0x20(%ebp),%edi
087a8de2 +0x00c2:  add    -0x7c(%ebp),%edi
087a8de5 +0x00c5:  xor    %esi,%edx
087a8de7 +0x00c7:  mov    0x40(%eax),%eax
087a8dea +0x00ca:  lea    (%edi,%edx,1),%edx
087a8ded +0x00cd:  mov    -0xc(%ebp),%edi
087a8df0 +0x00d0:  ror    $0x14,%edx
087a8df3 +0x00d3:  mov    %eax,-0x78(%ebp)
087a8df6 +0x00d6:  mov    -0x1c(%ebp),%eax
087a8df9 +0x00d9:  add    -0x1c(%ebp),%edx
087a8dfc +0x00dc:  add    -0x78(%ebp),%eax
087a8dff +0x00df:  xor    %esi,%edi
087a8e01 +0x00e1:  xor    %edx,%edi
087a8e03 +0x00e3:  add    %eax,%edi
087a8e05 +0x00e5:  mov    0x8(%ebp),%eax
087a8e08 +0x00e8:  ror    $0x1b,%edi
087a8e0b +0x00eb:  add    %ecx,%edi
087a8e0d +0x00ed:  ror    $0x16,%esi
087a8e10 +0x00f0:  mov    0x44(%eax),%eax
087a8e13 +0x00f3:  mov    %eax,-0x74(%ebp)
087a8e16 +0x00f6:  lea    (%ecx,%eax,1),%eax
087a8e19 +0x00f9:  mov    %edx,%ecx
087a8e1b +0x00fb:  xor    %esi,%ecx
087a8e1d +0x00fd:  xor    %edi,%ecx
087a8e1f +0x00ff:  add    %eax,%ecx
087a8e21 +0x0101:  mov    -0xc(%ebp),%eax
087a8e24 +0x0104:  ror    $0x18,%ecx
087a8e27 +0x0107:  add    -0xc(%ebp),%ecx
087a8e2a +0x010a:  ror    $0x16,%edx
087a8e2d +0x010d:  mov    %ecx,-0x10(%ebp)
087a8e30 +0x0110:  mov    0x8(%ebp),%ecx
087a8e33 +0x0113:  mov    0x48(%ecx),%ecx
087a8e36 +0x0116:  mov    %ecx,-0x70(%ebp)
087a8e39 +0x0119:  add    %ecx,%eax
087a8e3b +0x011b:  mov    %edi,%ecx
087a8e3d +0x011d:  xor    %edx,%ecx
087a8e3f +0x011f:  xor    -0x10(%ebp),%ecx
087a8e42 +0x0122:  ror    $0x16,%edi
087a8e45 +0x0125:  add    %ecx,%eax
087a8e47 +0x0127:  mov    0x8(%ebp),%ecx
087a8e4a +0x012a:  ror    $0x19,%eax
087a8e4d +0x012d:  add    %esi,%eax
087a8e4f +0x012f:  mov    0x4c(%ecx),%ecx
087a8e52 +0x0132:  mov    %ecx,-0x6c(%ebp)
087a8e55 +0x0135:  add    %ecx,%esi
087a8e57 +0x0137:  mov    -0x10(%ebp),%ecx
087a8e5a +0x013a:  xor    %edi,%ecx
087a8e5c +0x013c:  xor    %eax,%ecx
087a8e5e +0x013e:  add    %ecx,%esi
087a8e60 +0x0140:  mov    -0x10(%ebp),%ecx
087a8e63 +0x0143:  ror    $0x17,%esi
087a8e66 +0x0146:  add    %edx,%esi
087a8e68 +0x0148:  ror    $0x16,%ecx
087a8e6b +0x014b:  mov    %ecx,-0x10(%ebp)
087a8e6e +0x014e:  mov    0x8(%ebp),%ecx
087a8e71 +0x0151:  mov    0x50(%ecx),%ecx
087a8e74 +0x0154:  mov    %ecx,-0x68(%ebp)
087a8e77 +0x0157:  add    %ecx,%edx
087a8e79 +0x0159:  mov    -0x10(%ebp),%ecx
087a8e7c +0x015c:  xor    %eax,%ecx
087a8e7e +0x015e:  xor    %esi,%ecx
087a8e80 +0x0160:  add    %ecx,%edx
087a8e82 +0x0162:  mov    %eax,%ecx
087a8e84 +0x0164:  mov    0x8(%ebp),%eax
087a8e87 +0x0167:  ror    $0x15,%edx
087a8e8a +0x016a:  add    %edi,%edx
087a8e8c +0x016c:  ror    $0x16,%ecx
087a8e8f +0x016f:  mov    0x54(%eax),%eax
087a8e92 +0x0172:  add    %eax,%edi
087a8e94 +0x0174:  mov    %eax,-0x64(%ebp)
087a8e97 +0x0177:  mov    %esi,%eax
087a8e99 +0x0179:  xor    %ecx,%eax
087a8e9b +0x017b:  xor    %edx,%eax
087a8e9d +0x017d:  lea    (%edi,%eax,1),%eax
087a8ea0 +0x0180:  mov    0x8(%ebp),%edi
087a8ea3 +0x0183:  ror    $0x13,%eax
087a8ea6 +0x0186:  add    -0x10(%ebp),%eax
087a8ea9 +0x0189:  ror    $0x16,%esi
087a8eac +0x018c:  mov    0x58(%edi),%edi
087a8eaf +0x018f:  mov    %edi,-0x60(%ebp)
087a8eb2 +0x0192:  mov    -0x10(%ebp),%edi
087a8eb5 +0x0195:  add    -0x60(%ebp),%edi
087a8eb8 +0x0198:  mov    %edi,-0x10(%ebp)
087a8ebb +0x019b:  mov    %edx,%edi
087a8ebd +0x019d:  xor    %esi,%edi
087a8ebf +0x019f:  xor    %eax,%edi
087a8ec1 +0x01a1:  add    -0x10(%ebp),%edi
087a8ec4 +0x01a4:  ror    $0x16,%edx
087a8ec7 +0x01a7:  ror    $0x12,%edi
087a8eca +0x01aa:  add    %ecx,%edi
087a8ecc +0x01ac:  mov    %edi,-0xc(%ebp)
087a8ecf +0x01af:  mov    0x8(%ebp),%edi
087a8ed2 +0x01b2:  mov    0x5c(%edi),%edi
087a8ed5 +0x01b5:  mov    %edi,-0x5c(%ebp)
087a8ed8 +0x01b8:  add    %edi,%ecx
087a8eda +0x01ba:  mov    %eax,%edi
087a8edc +0x01bc:  xor    %edx,%edi
087a8ede +0x01be:  xor    -0xc(%ebp),%edi
087a8ee1 +0x01c1:  ror    $0x16,%eax
087a8ee4 +0x01c4:  add    %edi,%ecx
087a8ee6 +0x01c6:  mov    0x8(%ebp),%edi
087a8ee9 +0x01c9:  ror    $0x11,%ecx
087a8eec +0x01cc:  add    %esi,%ecx
087a8eee +0x01ce:  mov    0x60(%edi),%edi
087a8ef1 +0x01d1:  mov    %edi,-0x58(%ebp)
087a8ef4 +0x01d4:  add    %edi,%esi
087a8ef6 +0x01d6:  mov    -0xc(%ebp),%edi
087a8ef9 +0x01d9:  xor    %eax,%edi
087a8efb +0x01db:  xor    %ecx,%edi
087a8efd +0x01dd:  add    %edi,%esi
087a8eff +0x01df:  mov    -0xc(%ebp),%edi
087a8f02 +0x01e2:  ror    $0x1a,%esi
087a8f05 +0x01e5:  add    %edx,%esi
087a8f07 +0x01e7:  ror    $0x16,%edi
087a8f0a +0x01ea:  mov    %edi,-0xc(%ebp)
087a8f0d +0x01ed:  mov    0x8(%ebp),%edi
087a8f10 +0x01f0:  mov    0x64(%edi),%edi
087a8f13 +0x01f3:  mov    %edi,-0x54(%ebp)
087a8f16 +0x01f6:  add    %edi,%edx
087a8f18 +0x01f8:  mov    -0xc(%ebp),%edi
087a8f1b +0x01fb:  xor    %ecx,%edi
087a8f1d +0x01fd:  xor    %esi,%edi
087a8f1f +0x01ff:  add    %edi,%edx
087a8f21 +0x0201:  mov    0x8(%ebp),%edi
087a8f24 +0x0204:  ror    $0x19,%edx
087a8f27 +0x0207:  add    %eax,%edx
087a8f29 +0x0209:  ror    $0x16,%ecx
087a8f2c +0x020c:  mov    0x68(%edi),%edi
087a8f2f +0x020f:  add    %edi,%eax
087a8f31 +0x0211:  mov    %edi,-0x50(%ebp)
087a8f34 +0x0214:  mov    %esi,%edi
087a8f36 +0x0216:  xor    %ecx,%edi
087a8f38 +0x0218:  xor    %edx,%edi
087a8f3a +0x021a:  lea    (%eax,%edi,1),%edi
087a8f3d +0x021d:  mov    0x8(%ebp),%eax
087a8f40 +0x0220:  ror    $0x17,%edi
087a8f43 +0x0223:  add    -0xc(%ebp),%edi
087a8f46 +0x0226:  ror    $0x16,%esi
087a8f49 +0x0229:  mov    0x6c(%eax),%eax
087a8f4c +0x022c:  mov    %eax,-0x4c(%ebp)
087a8f4f +0x022f:  mov    -0xc(%ebp),%eax
087a8f52 +0x0232:  add    -0x4c(%ebp),%eax
087a8f55 +0x0235:  mov    %eax,-0xc(%ebp)
087a8f58 +0x0238:  mov    %edx,%eax
087a8f5a +0x023a:  xor    %esi,%eax
087a8f5c +0x023c:  xor    %edi,%eax
087a8f5e +0x023e:  add    -0xc(%ebp),%eax
087a8f61 +0x0241:  ror    $0x16,%edx
087a8f64 +0x0244:  ror    $0x18,%eax
087a8f67 +0x0247:  add    %ecx,%eax
087a8f69 +0x0249:  mov    %eax,-0xc(%ebp)
087a8f6c +0x024c:  mov    -0x6c(%ebp),%eax
087a8f6f +0x024f:  lea    0x5a827999(%ecx,%eax,1),%ecx
087a8f76 +0x0256:  mov    %edi,%eax
087a8f78 +0x0258:  xor    %edx,%eax
087a8f7a +0x025a:  and    -0xc(%ebp),%eax
087a8f7d +0x025d:  ror    $0x16,%edi
087a8f80 +0x0260:  xor    %edx,%eax
087a8f82 +0x0262:  add    %eax,%ecx
087a8f84 +0x0264:  mov    -0xc(%ebp),%eax
087a8f87 +0x0267:  ror    $0x19,%ecx
087a8f8a +0x026a:  add    %esi,%ecx
087a8f8c +0x026c:  mov    %ecx,-0x10(%ebp)
087a8f8f +0x026f:  mov    -0x78(%ebp),%ecx
087a8f92 +0x0272:  xor    %edi,%eax
087a8f94 +0x0274:  and    -0x10(%ebp),%eax
087a8f97 +0x0277:  lea    0x5a827999(%esi,%ecx,1),%esi
087a8f9e +0x027e:  mov    -0x54(%ebp),%ecx
087a8fa1 +0x0281:  xor    %edi,%eax
087a8fa3 +0x0283:  add    %eax,%esi
087a8fa5 +0x0285:  mov    -0xc(%ebp),%eax
087a8fa8 +0x0288:  ror    $0x1a,%esi
087a8fab +0x028b:  add    %edx,%esi
087a8fad +0x028d:  lea    0x5a827999(%edx,%ecx,1),%edx
087a8fb4 +0x0294:  mov    -0x10(%ebp),%ecx
087a8fb7 +0x0297:  mov    %edx,-0xc(%ebp)
087a8fba +0x029a:  mov    -0x10(%ebp),%edx
087a8fbd +0x029d:  ror    $0x16,%eax
087a8fc0 +0x02a0:  ror    $0x16,%ecx
087a8fc3 +0x02a3:  xor    %eax,%edx
087a8fc5 +0x02a5:  and    %esi,%edx
087a8fc7 +0x02a7:  xor    %eax,%edx
087a8fc9 +0x02a9:  add    -0xc(%ebp),%edx
087a8fcc +0x02ac:  ror    $0x18,%edx
087a8fcf +0x02af:  add    %edi,%edx
087a8fd1 +0x02b1:  mov    %edx,-0xc(%ebp)
087a8fd4 +0x02b4:  mov    -0x84(%ebp),%edx
087a8fda +0x02ba:  lea    0x5a827999(%edi,%edx,1),%edi
087a8fe1 +0x02c1:  mov    %esi,%edx
087a8fe3 +0x02c3:  xor    %ecx,%edx
087a8fe5 +0x02c5:  and    -0xc(%ebp),%edx
087a8fe8 +0x02c8:  xor    %ecx,%edx
087a8fea +0x02ca:  add    %edx,%edi
087a8fec +0x02cc:  mov    -0x60(%ebp),%edx
087a8fef +0x02cf:  ror    $0x13,%edi
087a8ff2 +0x02d2:  add    %eax,%edi
087a8ff4 +0x02d4:  ror    $0x16,%esi
087a8ff7 +0x02d7:  lea    0x5a827999(%eax,%edx,1),%eax
087a8ffe +0x02de:  mov    -0xc(%ebp),%edx
087a9001 +0x02e1:  mov    %eax,-0x10(%ebp)
087a9004 +0x02e4:  mov    -0xc(%ebp),%eax
087a9007 +0x02e7:  ror    $0x16,%edx
087a900a +0x02ea:  xor    %esi,%eax
087a900c +0x02ec:  and    %edi,%eax
087a900e +0x02ee:  xor    %esi,%eax
087a9010 +0x02f0:  add    -0x10(%ebp),%eax
087a9013 +0x02f3:  ror    $0x15,%eax
087a9016 +0x02f6:  add    %ecx,%eax
087a9018 +0x02f8:  mov    %eax,-0x10(%ebp)
087a901b +0x02fb:  mov    -0x70(%ebp),%eax
087a901e +0x02fe:  lea    0x5a827999(%ecx,%eax,1),%ecx
087a9025 +0x0305:  mov    -0x10(%ebp),%eax
087a9028 +0x0308:  mov    %ecx,-0xc(%ebp)
087a902b +0x030b:  mov    %edi,%ecx
087a902d +0x030d:  xor    %edx,%ecx
087a902f +0x030f:  and    -0x10(%ebp),%ecx
087a9032 +0x0312:  ror    $0x16,%edi
087a9035 +0x0315:  ror    $0x16,%eax
087a9038 +0x0318:  xor    %edx,%ecx
087a903a +0x031a:  add    -0xc(%ebp),%ecx
087a903d +0x031d:  ror    $0x17,%ecx
087a9040 +0x0320:  add    %esi,%ecx
087a9042 +0x0322:  mov    %ecx,-0xc(%ebp)
087a9045 +0x0325:  mov    -0x4c(%ebp),%ecx
087a9048 +0x0328:  lea    0x5a827999(%esi,%ecx,1),%esi
087a904f +0x032f:  mov    -0x10(%ebp),%ecx
087a9052 +0x0332:  xor    %edi,%ecx
087a9054 +0x0334:  and    -0xc(%ebp),%ecx
087a9057 +0x0337:  xor    %edi,%ecx
087a9059 +0x0339:  add    %ecx,%esi
087a905b +0x033b:  mov    -0x7c(%ebp),%ecx
087a905e +0x033e:  ror    $0x19,%esi
087a9061 +0x0341:  add    %edx,%esi
087a9063 +0x0343:  lea    0x5a827999(%edx,%ecx,1),%edx
087a906a +0x034a:  mov    %edx,-0x10(%ebp)
087a906d +0x034d:  mov    -0xc(%ebp),%edx
087a9070 +0x0350:  mov    -0xc(%ebp),%ecx
087a9073 +0x0353:  xor    %eax,%edx
087a9075 +0x0355:  and    %esi,%edx
087a9077 +0x0357:  xor    %eax,%edx
087a9079 +0x0359:  add    -0x10(%ebp),%edx
087a907c +0x035c:  ror    $0x16,%ecx
087a907f +0x035f:  ror    $0x11,%edx
087a9082 +0x0362:  add    %edi,%edx
087a9084 +0x0364:  mov    %edx,-0x14(%ebp)
087a9087 +0x0367:  mov    -0x58(%ebp),%edx
087a908a +0x036a:  lea    0x5a827999(%edi,%edx,1),%edi
087a9091 +0x0371:  mov    -0x88(%ebp),%edx
087a9097 +0x0377:  mov    %edi,-0xc(%ebp)
087a909a +0x037a:  mov    %esi,%edi
087a909c +0x037c:  xor    %ecx,%edi
087a909e +0x037e:  and    -0x14(%ebp),%edi
087a90a1 +0x0381:  ror    $0x16,%esi
087a90a4 +0x0384:  xor    %ecx,%edi
087a90a6 +0x0386:  add    -0xc(%ebp),%edi
087a90a9 +0x0389:  ror    $0x19,%edi
087a90ac +0x038c:  add    %eax,%edi
087a90ae +0x038e:  mov    %edi,-0xc(%ebp)
087a90b1 +0x0391:  lea    0x5a827999(%eax,%edx,1),%edi
087a90b8 +0x0398:  mov    -0x14(%ebp),%eax
087a90bb +0x039b:  mov    -0x14(%ebp),%edx
087a90be +0x039e:  xor    %esi,%eax
087a90c0 +0x03a0:  and    -0xc(%ebp),%eax
087a90c3 +0x03a3:  ror    $0x16,%edx
087a90c6 +0x03a6:  xor    %esi,%eax
087a90c8 +0x03a8:  lea    (%edi,%eax,1),%eax
087a90cb +0x03ab:  mov    -0x64(%ebp),%edi
087a90ce +0x03ae:  ror    $0x14,%eax
087a90d1 +0x03b1:  add    %ecx,%eax
087a90d3 +0x03b3:  mov    %eax,-0x10(%ebp)
087a90d6 +0x03b6:  lea    0x5a827999(%ecx,%edi,1),%eax
087a90dd +0x03bd:  mov    -0xc(%ebp),%ecx
087a90e0 +0x03c0:  mov    -0xc(%ebp),%edi
087a90e3 +0x03c3:  xor    %edx,%ecx
087a90e5 +0x03c5:  and    -0x10(%ebp),%ecx
087a90e8 +0x03c8:  ror    $0x16,%edi
087a90eb +0x03cb:  xor    %edx,%ecx
087a90ed +0x03cd:  lea    (%eax,%ecx,1),%ecx
087a90f0 +0x03d0:  mov    -0x74(%ebp),%eax
087a90f3 +0x03d3:  ror    $0x11,%ecx
087a90f6 +0x03d6:  add    %esi,%ecx
087a90f8 +0x03d8:  lea    0x5a827999(%esi,%eax,1),%esi
087a90ff +0x03df:  mov    -0x10(%ebp),%eax
087a9102 +0x03e2:  mov    %esi,-0xc(%ebp)
087a9105 +0x03e5:  mov    -0x10(%ebp),%esi
087a9108 +0x03e8:  ror    $0x16,%eax
087a910b +0x03eb:  xor    %edi,%esi
087a910d +0x03ed:  and    %ecx,%esi
087a910f +0x03ef:  xor    %edi,%esi
087a9111 +0x03f1:  add    -0xc(%ebp),%esi
087a9114 +0x03f4:  ror    $0x17,%esi
087a9117 +0x03f7:  add    %edx,%esi
087a9119 +0x03f9:  mov    %esi,-0xc(%ebp)
087a911c +0x03fc:  mov    -0x80(%ebp),%esi
087a911f +0x03ff:  lea    0x5a827999(%edx,%esi,1),%edx
087a9126 +0x0406:  mov    -0xc(%ebp),%esi
087a9129 +0x0409:  mov    %edx,-0x10(%ebp)
087a912c +0x040c:  mov    %ecx,%edx
087a912e +0x040e:  xor    %eax,%edx
087a9130 +0x0410:  and    -0xc(%ebp),%edx
087a9133 +0x0413:  ror    $0x16,%ecx
087a9136 +0x0416:  xor    %ecx,%esi
087a9138 +0x0418:  xor    %eax,%edx
087a913a +0x041a:  add    -0x10(%ebp),%edx
087a913d +0x041d:  ror    $0x15,%edx
087a9140 +0x0420:  add    %edi,%edx
087a9142 +0x0422:  mov    %edx,-0x10(%ebp)
087a9145 +0x0425:  mov    -0x50(%ebp),%edx
087a9148 +0x0428:  and    -0x10(%ebp),%esi
087a914b +0x042b:  lea    0x5a827999(%edi,%edx,1),%edi
087a9152 +0x0432:  mov    -0x5c(%ebp),%edx
087a9155 +0x0435:  xor    %ecx,%esi
087a9157 +0x0437:  add    %esi,%edi
087a9159 +0x0439:  mov    -0xc(%ebp),%esi
087a915c +0x043c:  ror    $0x19,%edi
087a915f +0x043f:  add    %eax,%edi
087a9161 +0x0441:  lea    0x5a827999(%eax,%edx,1),%eax
087a9168 +0x0448:  mov    %eax,-0xc(%ebp)
087a916b +0x044b:  mov    -0x10(%ebp),%eax
087a916e +0x044e:  ror    $0x16,%esi
087a9171 +0x0451:  mov    -0x10(%ebp),%edx
087a9174 +0x0454:  xor    %esi,%eax
087a9176 +0x0456:  and    %edi,%eax
087a9178 +0x0458:  xor    %esi,%eax
087a917a +0x045a:  add    -0xc(%ebp),%eax
087a917d +0x045d:  ror    $0x16,%edx
087a9180 +0x0460:  ror    $0x13,%eax
087a9183 +0x0463:  add    %ecx,%eax
087a9185 +0x0465:  mov    %eax,-0xc(%ebp)
087a9188 +0x0468:  mov    -0x68(%ebp),%eax
087a918b +0x046b:  lea    0x5a827999(%ecx,%eax,1),%ecx
087a9192 +0x0472:  mov    %edi,%eax
087a9194 +0x0474:  xor    %edx,%eax
087a9196 +0x0476:  and    -0xc(%ebp),%eax
087a9199 +0x0479:  ror    $0x16,%edi
087a919c +0x047c:  xor    %edx,%eax
087a919e +0x047e:  add    %eax,%ecx
087a91a0 +0x0480:  mov    -0xc(%ebp),%eax
087a91a3 +0x0483:  ror    $0x14,%ecx
087a91a6 +0x0486:  add    %esi,%ecx
087a91a8 +0x0488:  mov    %ecx,-0x10(%ebp)
087a91ab +0x048b:  mov    -0x7c(%ebp),%ecx
087a91ae +0x048e:  not    %eax
087a91b0 +0x0490:  or     -0x10(%ebp),%eax
087a91b3 +0x0493:  lea    0x6ed9eba1(%esi,%ecx,1),%esi
087a91ba +0x049a:  mov    -0x60(%ebp),%ecx
087a91bd +0x049d:  xor    %edi,%eax
087a91bf +0x049f:  add    %eax,%esi
087a91c1 +0x04a1:  mov    -0xc(%ebp),%eax
087a91c4 +0x04a4:  ror    $0x15,%esi
087a91c7 +0x04a7:  add    %edx,%esi
087a91c9 +0x04a9:  lea    0x6ed9eba1(%edx,%ecx,1),%edx
087a91d0 +0x04b0:  mov    -0x10(%ebp),%ecx
087a91d3 +0x04b3:  mov    %edx,-0xc(%ebp)
087a91d6 +0x04b6:  mov    -0x10(%ebp),%edx
087a91d9 +0x04b9:  ror    $0x16,%eax
087a91dc +0x04bc:  ror    $0x16,%ecx
087a91df +0x04bf:  not    %edx
087a91e1 +0x04c1:  or     %esi,%edx
087a91e3 +0x04c3:  xor    %eax,%edx
087a91e5 +0x04c5:  add    -0xc(%ebp),%edx
087a91e8 +0x04c8:  ror    $0x13,%edx
087a91eb +0x04cb:  add    %edi,%edx
087a91ed +0x04cd:  mov    %edx,-0xc(%ebp)
087a91f0 +0x04d0:  mov    -0x50(%ebp),%edx
087a91f3 +0x04d3:  lea    0x6ed9eba1(%edi,%edx,1),%edi
087a91fa +0x04da:  mov    %esi,%edx
087a91fc +0x04dc:  not    %edx
087a91fe +0x04de:  or     -0xc(%ebp),%edx
087a9201 +0x04e1:  xor    %ecx,%edx
087a9203 +0x04e3:  add    %edx,%edi
087a9205 +0x04e5:  mov    -0x78(%ebp),%edx
087a9208 +0x04e8:  ror    $0x1a,%edi
087a920b +0x04eb:  add    %eax,%edi
087a920d +0x04ed:  ror    $0x16,%esi
087a9210 +0x04f0:  lea    0x6ed9eba1(%eax,%edx,1),%eax
087a9217 +0x04f7:  mov    -0xc(%ebp),%edx
087a921a +0x04fa:  mov    %eax,-0x10(%ebp)
087a921d +0x04fd:  mov    -0xc(%ebp),%eax
087a9220 +0x0500:  ror    $0x16,%edx
087a9223 +0x0503:  not    %eax
087a9225 +0x0505:  or     %edi,%eax
087a9227 +0x0507:  xor    %esi,%eax
087a9229 +0x0509:  add    -0x10(%ebp),%eax
087a922c +0x050c:  ror    $0x19,%eax
087a922f +0x050f:  add    %ecx,%eax
087a9231 +0x0511:  mov    %eax,-0x10(%ebp)
087a9234 +0x0514:  mov    -0x64(%ebp),%eax
087a9237 +0x0517:  lea    0x6ed9eba1(%ecx,%eax,1),%ecx
087a923e +0x051e:  mov    -0x10(%ebp),%eax
087a9241 +0x0521:  mov    %ecx,-0xc(%ebp)
087a9244 +0x0524:  mov    %edi,%ecx
087a9246 +0x0526:  not    %ecx
087a9248 +0x0528:  or     -0x10(%ebp),%ecx
087a924b +0x052b:  ror    $0x16,%edi
087a924e +0x052e:  ror    $0x16,%eax
087a9251 +0x0531:  xor    %edx,%ecx
087a9253 +0x0533:  add    -0xc(%ebp),%ecx
087a9256 +0x0536:  ror    $0x12,%ecx
087a9259 +0x0539:  add    %esi,%ecx
087a925b +0x053b:  mov    %ecx,-0xc(%ebp)
087a925e +0x053e:  mov    -0x4c(%ebp),%ecx
087a9261 +0x0541:  lea    0x6ed9eba1(%esi,%ecx,1),%esi
087a9268 +0x0548:  mov    -0x10(%ebp),%ecx
087a926b +0x054b:  not    %ecx
087a926d +0x054d:  or     -0xc(%ebp),%ecx
087a9270 +0x0550:  xor    %edi,%ecx
087a9272 +0x0552:  add    %ecx,%esi
087a9274 +0x0554:  mov    -0x68(%ebp),%ecx
087a9277 +0x0557:  ror    $0x17,%esi
087a927a +0x055a:  add    %edx,%esi
087a927c +0x055c:  lea    0x6ed9eba1(%edx,%ecx,1),%edx
087a9283 +0x0563:  mov    %edx,-0x10(%ebp)
087a9286 +0x0566:  mov    -0xc(%ebp),%edx
087a9289 +0x0569:  mov    -0xc(%ebp),%ecx
087a928c +0x056c:  not    %edx
087a928e +0x056e:  or     %esi,%edx
087a9290 +0x0570:  xor    %eax,%edx
087a9292 +0x0572:  add    -0x10(%ebp),%edx
087a9295 +0x0575:  ror    $0x16,%ecx
087a9298 +0x0578:  ror    $0x13,%edx
087a929b +0x057b:  add    %edi,%edx
087a929d +0x057d:  mov    %edx,-0x14(%ebp)
087a92a0 +0x0580:  mov    -0x84(%ebp),%edx
087a92a6 +0x0586:  lea    0x6ed9eba1(%edi,%edx,1),%edi
087a92ad +0x058d:  mov    -0x80(%ebp),%edx
087a92b0 +0x0590:  mov    %edi,-0xc(%ebp)
087a92b3 +0x0593:  mov    %esi,%edi
087a92b5 +0x0595:  not    %edi
087a92b7 +0x0597:  or     -0x14(%ebp),%edi
087a92ba +0x059a:  xor    %ecx,%edi
087a92bc +0x059c:  add    -0xc(%ebp),%edi
087a92bf +0x059f:  ror    $0x11,%edi
087a92c2 +0x05a2:  add    %eax,%edi
087a92c4 +0x05a4:  mov    %edi,-0xc(%ebp)
087a92c7 +0x05a7:  lea    0x6ed9eba1(%eax,%edx,1),%edi
087a92ce +0x05ae:  mov    -0x14(%ebp),%eax
087a92d1 +0x05b1:  ror    $0x16,%esi
087a92d4 +0x05b4:  mov    -0x14(%ebp),%edx
087a92d7 +0x05b7:  not    %eax
087a92d9 +0x05b9:  or     -0xc(%ebp),%eax
087a92dc +0x05bc:  ror    $0x16,%edx
087a92df +0x05bf:  xor    %esi,%eax
087a92e1 +0x05c1:  lea    (%edi,%eax,1),%eax
087a92e4 +0x05c4:  mov    -0x6c(%ebp),%edi
087a92e7 +0x05c7:  ror    $0x12,%eax
087a92ea +0x05ca:  add    %ecx,%eax
087a92ec +0x05cc:  mov    %eax,-0x10(%ebp)
087a92ef +0x05cf:  lea    0x6ed9eba1(%ecx,%edi,1),%eax
087a92f6 +0x05d6:  mov    -0xc(%ebp),%ecx
087a92f9 +0x05d9:  mov    -0xc(%ebp),%edi
087a92fc +0x05dc:  not    %ecx
087a92fe +0x05de:  or     -0x10(%ebp),%ecx
087a9301 +0x05e1:  ror    $0x16,%edi
087a9304 +0x05e4:  xor    %edx,%ecx
087a9306 +0x05e6:  lea    (%eax,%ecx,1),%ecx
087a9309 +0x05e9:  mov    -0x88(%ebp),%eax
087a930f +0x05ef:  ror    $0x18,%ecx
087a9312 +0x05f2:  add    %esi,%ecx
087a9314 +0x05f4:  lea    0x6ed9eba1(%esi,%eax,1),%esi
087a931b +0x05fb:  mov    -0x10(%ebp),%eax
087a931e +0x05fe:  mov    %esi,-0xc(%ebp)
087a9321 +0x0601:  mov    -0x10(%ebp),%esi
087a9324 +0x0604:  ror    $0x16,%eax
087a9327 +0x0607:  not    %esi
087a9329 +0x0609:  or     %ecx,%esi
087a932b +0x060b:  xor    %edi,%esi
087a932d +0x060d:  add    -0xc(%ebp),%esi
087a9330 +0x0610:  ror    $0x13,%esi
087a9333 +0x0613:  add    %edx,%esi
087a9335 +0x0615:  mov    %esi,-0xc(%ebp)
087a9338 +0x0618:  mov    -0x70(%ebp),%esi
087a933b +0x061b:  lea    0x6ed9eba1(%edx,%esi,1),%edx
087a9342 +0x0622:  mov    -0xc(%ebp),%esi
087a9345 +0x0625:  mov    %edx,-0x10(%ebp)
087a9348 +0x0628:  mov    %ecx,%edx
087a934a +0x062a:  not    %edx
087a934c +0x062c:  or     -0xc(%ebp),%edx
087a934f +0x062f:  not    %esi
087a9351 +0x0631:  ror    $0x16,%ecx
087a9354 +0x0634:  xor    %eax,%edx
087a9356 +0x0636:  add    -0x10(%ebp),%edx
087a9359 +0x0639:  ror    $0x1a,%edx
087a935c +0x063c:  add    %edi,%edx
087a935e +0x063e:  mov    %edx,-0x10(%ebp)
087a9361 +0x0641:  mov    -0x54(%ebp),%edx
087a9364 +0x0644:  or     -0x10(%ebp),%esi
087a9367 +0x0647:  lea    0x6ed9eba1(%edi,%edx,1),%edi
087a936e +0x064e:  mov    -0x5c(%ebp),%edx
087a9371 +0x0651:  xor    %ecx,%esi
087a9373 +0x0653:  add    %esi,%edi
087a9375 +0x0655:  mov    -0xc(%ebp),%esi
087a9378 +0x0658:  ror    $0x1b,%edi
087a937b +0x065b:  add    %eax,%edi
087a937d +0x065d:  lea    0x6ed9eba1(%eax,%edx,1),%eax
087a9384 +0x0664:  mov    %eax,-0xc(%ebp)
087a9387 +0x0667:  mov    -0x10(%ebp),%eax
087a938a +0x066a:  ror    $0x16,%esi
087a938d +0x066d:  mov    -0x10(%ebp),%edx
087a9390 +0x0670:  not    %eax
087a9392 +0x0672:  or     %edi,%eax
087a9394 +0x0674:  xor    %esi,%eax
087a9396 +0x0676:  add    -0xc(%ebp),%eax
087a9399 +0x0679:  ror    $0x14,%eax
087a939c +0x067c:  add    %ecx,%eax
087a939e +0x067e:  mov    %eax,-0xc(%ebp)
087a93a1 +0x0681:  mov    -0x74(%ebp),%eax
087a93a4 +0x0684:  ror    $0x16,%edx
087a93a7 +0x0687:  lea    0x6ed9eba1(%ecx,%eax,1),%ecx
087a93ae +0x068e:  mov    %edi,%eax
087a93b0 +0x0690:  not    %eax
087a93b2 +0x0692:  or     -0xc(%ebp),%eax
087a93b5 +0x0695:  ror    $0x16,%edi
087a93b8 +0x0698:  xor    %edx,%eax
087a93ba +0x069a:  lea    (%ecx,%eax,1),%eax
087a93bd +0x069d:  mov    -0x58(%ebp),%ecx
087a93c0 +0x06a0:  ror    $0x19,%eax
087a93c3 +0x06a3:  add    %esi,%eax
087a93c5 +0x06a5:  lea    0x6ed9eba1(%esi,%ecx,1),%esi
087a93cc +0x06ac:  mov    -0xc(%ebp),%ecx
087a93cf +0x06af:  not    %ecx
087a93d1 +0x06b1:  or     %eax,%ecx
087a93d3 +0x06b3:  xor    %edi,%ecx
087a93d5 +0x06b5:  lea    (%esi,%ecx,1),%ecx
087a93d8 +0x06b8:  mov    -0xc(%ebp),%esi
087a93db +0x06bb:  ror    $0x1b,%ecx
087a93de +0x06be:  add    %edx,%ecx
087a93e0 +0x06c0:  ror    $0x16,%esi
087a93e3 +0x06c3:  mov    %esi,-0xc(%ebp)
087a93e6 +0x06c6:  mov    -0x84(%ebp),%esi
087a93ec +0x06cc:  lea    -0x70e44324(%edx,%esi,1),%edx
087a93f3 +0x06d3:  mov    %eax,%esi
087a93f5 +0x06d5:  mov    %edx,-0x10(%ebp)
087a93f8 +0x06d8:  mov    %ecx,%edx
087a93fa +0x06da:  xor    %eax,%edx
087a93fc +0x06dc:  and    -0xc(%ebp),%edx
087a93ff +0x06df:  ror    $0x16,%esi
087a9402 +0x06e2:  xor    %eax,%edx
087a9404 +0x06e4:  mov    -0x64(%ebp),%eax
087a9407 +0x06e7:  add    -0x10(%ebp),%edx
087a940a +0x06ea:  ror    $0x15,%edx
087a940d +0x06ed:  add    %edi,%edx
087a940f +0x06ef:  lea    -0x70e44324(%edi,%eax,1),%edi
087a9416 +0x06f6:  mov    %edx,%eax
087a9418 +0x06f8:  xor    %ecx,%eax
087a941a +0x06fa:  and    %esi,%eax
087a941c +0x06fc:  xor    %ecx,%eax
087a941e +0x06fe:  ror    $0x16,%ecx
087a9421 +0x0701:  add    %eax,%edi
087a9423 +0x0703:  mov    -0xc(%ebp),%eax
087a9426 +0x0706:  mov    %ecx,-0x10(%ebp)
087a9429 +0x0709:  mov    -0x5c(%ebp),%ecx
087a942c +0x070c:  ror    $0x14,%edi
087a942f +0x070f:  add    -0xc(%ebp),%edi
087a9432 +0x0712:  lea    -0x70e44324(%eax,%ecx,1),%ecx
087a9439 +0x0719:  mov    %edi,%eax
087a943b +0x071b:  xor    %edx,%eax
087a943d +0x071d:  and    -0x10(%ebp),%eax
087a9440 +0x0720:  xor    %edx,%eax
087a9442 +0x0722:  add    %ecx,%eax
087a9444 +0x0724:  mov    -0x88(%ebp),%ecx
087a944a +0x072a:  ror    $0x12,%eax
087a944d +0x072d:  add    %esi,%eax
087a944f +0x072f:  ror    $0x16,%edx
087a9452 +0x0732:  mov    %edx,-0xc(%ebp)
087a9455 +0x0735:  mov    -0x60(%ebp),%edx
087a9458 +0x0738:  lea    -0x70e44324(%esi,%edx,1),%esi
087a945f +0x073f:  mov    %eax,%edx
087a9461 +0x0741:  xor    %edi,%edx
087a9463 +0x0743:  and    -0xc(%ebp),%edx
087a9466 +0x0746:  xor    %edi,%edx
087a9468 +0x0748:  add    %edx,%esi
087a946a +0x074a:  mov    -0x10(%ebp),%edx
087a946d +0x074d:  ror    $0x11,%esi
087a9470 +0x0750:  add    -0x10(%ebp),%esi
087a9473 +0x0753:  ror    $0x16,%edi
087a9476 +0x0756:  lea    -0x70e44324(%edx,%ecx,1),%ecx
087a947d +0x075d:  mov    %esi,%edx
087a947f +0x075f:  xor    %eax,%edx
087a9481 +0x0761:  and    %edi,%edx
087a9483 +0x0763:  xor    %eax,%edx
087a9485 +0x0765:  ror    $0x16,%eax
087a9488 +0x0768:  add    %edx,%ecx
087a948a +0x076a:  mov    -0xc(%ebp),%edx
087a948d +0x076d:  mov    %eax,-0x10(%ebp)
087a9490 +0x0770:  mov    -0x68(%ebp),%eax
087a9493 +0x0773:  ror    $0x12,%ecx
087a9496 +0x0776:  add    -0xc(%ebp),%ecx
087a9499 +0x0779:  lea    -0x70e44324(%edx,%eax,1),%eax
087a94a0 +0x0780:  mov    %ecx,%edx
087a94a2 +0x0782:  xor    %esi,%edx
087a94a4 +0x0784:  and    -0x10(%ebp),%edx
087a94a7 +0x0787:  xor    %esi,%edx
087a94a9 +0x0789:  ror    $0x16,%esi
087a94ac +0x078c:  add    %eax,%edx
087a94ae +0x078e:  mov    -0x10(%ebp),%eax
087a94b1 +0x0791:  mov    %esi,-0xc(%ebp)
087a94b4 +0x0794:  mov    -0x58(%ebp),%esi
087a94b7 +0x0797:  ror    $0x11,%edx
087a94ba +0x079a:  add    %edi,%edx
087a94bc +0x079c:  lea    -0x70e44324(%edi,%esi,1),%edi
087a94c3 +0x07a3:  mov    %edx,%esi
087a94c5 +0x07a5:  xor    %ecx,%esi
087a94c7 +0x07a7:  and    -0xc(%ebp),%esi
087a94ca +0x07aa:  xor    %ecx,%esi
087a94cc +0x07ac:  lea    (%edi,%esi,1),%esi
087a94cf +0x07af:  mov    -0x78(%ebp),%edi
087a94d2 +0x07b2:  ror    $0x17,%esi
087a94d5 +0x07b5:  add    -0x10(%ebp),%esi
087a94d8 +0x07b8:  ror    $0x16,%ecx
087a94db +0x07bb:  lea    -0x70e44324(%eax,%edi,1),%edi
087a94e2 +0x07c2:  mov    %esi,%eax
087a94e4 +0x07c4:  xor    %edx,%eax
087a94e6 +0x07c6:  and    %ecx,%eax
087a94e8 +0x07c8:  xor    %edx,%eax
087a94ea +0x07ca:  add    %eax,%edi
087a94ec +0x07cc:  ror    $0x18,%edi
087a94ef +0x07cf:  add    -0xc(%ebp),%edi
087a94f2 +0x07d2:  ror    $0x16,%edx
087a94f5 +0x07d5:  mov    %edx,-0x10(%ebp)
087a94f8 +0x07d8:  mov    -0xc(%ebp),%edx
087a94fb +0x07db:  mov    -0x54(%ebp),%eax
087a94fe +0x07de:  lea    -0x70e44324(%edx,%eax,1),%eax
087a9505 +0x07e5:  mov    -0x7c(%ebp),%edx
087a9508 +0x07e8:  mov    %eax,-0xc(%ebp)
087a950b +0x07eb:  mov    %edi,%eax
087a950d +0x07ed:  xor    %esi,%eax
087a950f +0x07ef:  and    -0x10(%ebp),%eax
087a9512 +0x07f2:  xor    %esi,%eax
087a9514 +0x07f4:  add    -0xc(%ebp),%eax
087a9517 +0x07f7:  ror    $0x16,%esi
087a951a +0x07fa:  mov    %esi,-0xc(%ebp)
087a951d +0x07fd:  lea    -0x70e44324(%ecx,%edx,1),%esi
087a9524 +0x0804:  mov    -0x10(%ebp),%edx
087a9527 +0x0807:  ror    $0x17,%eax
087a952a +0x080a:  add    %ecx,%eax
087a952c +0x080c:  mov    %eax,%ecx
087a952e +0x080e:  xor    %edi,%ecx
087a9530 +0x0810:  and    -0xc(%ebp),%ecx
087a9533 +0x0813:  xor    %edi,%ecx
087a9535 +0x0815:  lea    (%esi,%ecx,1),%ecx
087a9538 +0x0818:  mov    -0x6c(%ebp),%esi
087a953b +0x081b:  ror    $0x12,%ecx
087a953e +0x081e:  add    -0x10(%ebp),%ecx
087a9541 +0x0821:  ror    $0x16,%edi
087a9544 +0x0824:  lea    -0x70e44324(%edx,%esi,1),%esi
087a954b +0x082b:  mov    %ecx,%edx
087a954d +0x082d:  xor    %eax,%edx
087a954f +0x082f:  and    %edi,%edx
087a9551 +0x0831:  xor    %eax,%edx
087a9553 +0x0833:  ror    $0x16,%eax
087a9556 +0x0836:  add    %edx,%esi
087a9558 +0x0838:  mov    -0xc(%ebp),%edx
087a955b +0x083b:  mov    %eax,-0x10(%ebp)
087a955e +0x083e:  mov    -0x4c(%ebp),%eax
087a9561 +0x0841:  ror    $0x1b,%esi
087a9564 +0x0844:  add    -0xc(%ebp),%esi
087a9567 +0x0847:  lea    -0x70e44324(%edx,%eax,1),%eax
087a956e +0x084e:  mov    %esi,%edx
087a9570 +0x0850:  xor    %ecx,%edx
087a9572 +0x0852:  and    -0x10(%ebp),%edx
087a9575 +0x0855:  xor    %ecx,%edx
087a9577 +0x0857:  ror    $0x16,%ecx
087a957a +0x085a:  add    %eax,%edx
087a957c +0x085c:  mov    -0x10(%ebp),%eax
087a957f +0x085f:  mov    %ecx,-0xc(%ebp)
087a9582 +0x0862:  mov    -0x50(%ebp),%ecx
087a9585 +0x0865:  ror    $0x1a,%edx
087a9588 +0x0868:  add    %edi,%edx
087a958a +0x086a:  lea    -0x70e44324(%edi,%ecx,1),%edi
087a9591 +0x0871:  mov    %edx,%ecx
087a9593 +0x0873:  xor    %esi,%ecx
087a9595 +0x0875:  and    -0xc(%ebp),%ecx
087a9598 +0x0878:  xor    %esi,%ecx
087a959a +0x087a:  lea    (%edi,%ecx,1),%ecx
087a959d +0x087d:  mov    -0x74(%ebp),%edi
087a95a0 +0x0880:  ror    $0x18,%ecx
087a95a3 +0x0883:  add    -0x10(%ebp),%ecx
087a95a6 +0x0886:  ror    $0x16,%esi
087a95a9 +0x0889:  lea    -0x70e44324(%eax,%edi,1),%edi
087a95b0 +0x0890:  mov    %ecx,%eax
087a95b2 +0x0892:  xor    %edx,%eax
087a95b4 +0x0894:  and    %esi,%eax
087a95b6 +0x0896:  xor    %edx,%eax
087a95b8 +0x0898:  ror    $0x16,%edx
087a95bb +0x089b:  add    %eax,%edi
087a95bd +0x089d:  mov    -0x70(%ebp),%eax
087a95c0 +0x08a0:  mov    %edx,-0x10(%ebp)
087a95c3 +0x08a3:  mov    -0xc(%ebp),%edx
087a95c6 +0x08a6:  ror    $0x1a,%edi
087a95c9 +0x08a9:  add    -0xc(%ebp),%edi
087a95cc +0x08ac:  lea    -0x70e44324(%edx,%eax,1),%eax
087a95d3 +0x08b3:  mov    -0x80(%ebp),%edx
087a95d6 +0x08b6:  mov    %eax,-0xc(%ebp)
087a95d9 +0x08b9:  mov    %edi,%eax
087a95db +0x08bb:  xor    %ecx,%eax
087a95dd +0x08bd:  and    -0x10(%ebp),%eax
087a95e0 +0x08c0:  xor    %ecx,%eax
087a95e2 +0x08c2:  add    -0xc(%ebp),%eax
087a95e5 +0x08c5:  ror    $0x16,%ecx
087a95e8 +0x08c8:  ror    $0x1b,%eax
087a95eb +0x08cb:  add    %esi,%eax
087a95ed +0x08cd:  mov    %eax,-0xc(%ebp)
087a95f0 +0x08d0:  xor    %edi,%eax
087a95f2 +0x08d2:  and    %ecx,%eax
087a95f4 +0x08d4:  xor    %edi,%eax
087a95f6 +0x08d6:  lea    -0x70e44324(%esi,%edx,1),%esi
087a95fd +0x08dd:  mov    -0x10(%ebp),%edx
087a9600 +0x08e0:  add    %eax,%esi
087a9602 +0x08e2:  mov    -0x78(%ebp),%eax
087a9605 +0x08e5:  ror    $0x16,%edi
087a9608 +0x08e8:  ror    $0x14,%esi
087a960b +0x08eb:  add    -0x10(%ebp),%esi
087a960e +0x08ee:  lea    -0x56ac02b2(%edx,%eax,1),%eax
087a9615 +0x08f5:  mov    %eax,-0x10(%ebp)
087a9618 +0x08f8:  mov    %edi,%eax
087a961a +0x08fa:  mov    -0x10(%ebp),%edx
087a961d +0x08fd:  not    %eax
087a961f +0x08ff:  or     -0xc(%ebp),%eax
087a9622 +0x0902:  xor    %esi,%eax
087a9624 +0x0904:  add    %eax,%edx
087a9626 +0x0906:  mov    -0xc(%ebp),%eax
087a9629 +0x0909:  ror    $0x17,%edx
087a962c +0x090c:  add    %ecx,%edx
087a962e +0x090e:  mov    %edx,-0x10(%ebp)
087a9631 +0x0911:  mov    -0x88(%ebp),%edx
087a9637 +0x0917:  ror    $0x16,%eax
087a963a +0x091a:  lea    -0x56ac02b2(%ecx,%edx,1),%ecx
087a9641 +0x0921:  mov    -0x10(%ebp),%edx
087a9644 +0x0924:  mov    %ecx,-0xc(%ebp)
087a9647 +0x0927:  mov    %eax,%ecx
087a9649 +0x0929:  not    %ecx
087a964b +0x092b:  or     %esi,%ecx
087a964d +0x092d:  xor    -0x10(%ebp),%ecx
087a9650 +0x0930:  add    -0xc(%ebp),%ecx
087a9653 +0x0933:  ror    $0x11,%ecx
087a9656 +0x0936:  add    %edi,%ecx
087a9658 +0x0938:  mov    %ecx,-0xc(%ebp)
087a965b +0x093b:  mov    -0x74(%ebp),%ecx
087a965e +0x093e:  ror    $0x16,%esi
087a9661 +0x0941:  ror    $0x16,%edx
087a9664 +0x0944:  lea    -0x56ac02b2(%edi,%ecx,1),%edi
087a966b +0x094b:  mov    %esi,%ecx
087a966d +0x094d:  not    %ecx
087a966f +0x094f:  or     -0x10(%ebp),%ecx
087a9672 +0x0952:  xor    -0xc(%ebp),%ecx
087a9675 +0x0955:  add    %ecx,%edi
087a9677 +0x0957:  mov    -0x64(%ebp),%ecx
087a967a +0x095a:  ror    $0x1b,%edi
087a967d +0x095d:  add    %eax,%edi
087a967f +0x095f:  lea    -0x56ac02b2(%eax,%ecx,1),%eax
087a9686 +0x0966:  mov    -0xc(%ebp),%ecx
087a9689 +0x0969:  mov    %eax,-0x10(%ebp)
087a968c +0x096c:  mov    %edx,%eax
087a968e +0x096e:  not    %eax
087a9690 +0x0970:  or     -0xc(%ebp),%eax
087a9693 +0x0973:  ror    $0x16,%ecx
087a9696 +0x0976:  xor    %edi,%eax
087a9698 +0x0978:  add    -0x10(%ebp),%eax
087a969b +0x097b:  ror    $0x15,%eax
087a969e +0x097e:  add    %esi,%eax
087a96a0 +0x0980:  mov    %eax,-0x14(%ebp)
087a96a3 +0x0983:  mov    -0x6c(%ebp),%eax
087a96a6 +0x0986:  lea    -0x56ac02b2(%esi,%eax,1),%esi
087a96ad +0x098d:  mov    -0x58(%ebp),%eax
087a96b0 +0x0990:  mov    %esi,-0xc(%ebp)
087a96b3 +0x0993:  mov    %ecx,%esi
087a96b5 +0x0995:  not    %esi
087a96b7 +0x0997:  or     %edi,%esi
087a96b9 +0x0999:  xor    -0x14(%ebp),%esi
087a96bc +0x099c:  add    -0xc(%ebp),%esi
087a96bf +0x099f:  ror    $0x16,%edi
087a96c2 +0x09a2:  ror    $0x1a,%esi
087a96c5 +0x09a5:  add    %edx,%esi
087a96c7 +0x09a7:  mov    %esi,-0xc(%ebp)
087a96ca +0x09aa:  lea    -0x56ac02b2(%edx,%eax,1),%esi
087a96d1 +0x09b1:  mov    %edi,%edx
087a96d3 +0x09b3:  not    %edx
087a96d5 +0x09b5:  mov    -0x14(%ebp),%eax
087a96d8 +0x09b8:  or     -0x14(%ebp),%edx
087a96db +0x09bb:  xor    -0xc(%ebp),%edx
087a96de +0x09be:  ror    $0x16,%eax
087a96e1 +0x09c1:  lea    (%esi,%edx,1),%edx
087a96e4 +0x09c4:  mov    -0x80(%ebp),%esi
087a96e7 +0x09c7:  ror    $0x18,%edx
087a96ea +0x09ca:  add    %ecx,%edx
087a96ec +0x09cc:  mov    %edx,-0x10(%ebp)
087a96ef +0x09cf:  lea    -0x56ac02b2(%ecx,%esi,1),%edx
087a96f6 +0x09d6:  mov    %eax,%ecx
087a96f8 +0x09d8:  mov    -0xc(%ebp),%esi
087a96fb +0x09db:  not    %ecx
087a96fd +0x09dd:  or     -0xc(%ebp),%ecx
087a9700 +0x09e0:  xor    -0x10(%ebp),%ecx
087a9703 +0x09e3:  ror    $0x16,%esi
087a9706 +0x09e6:  lea    (%edx,%ecx,1),%ecx
087a9709 +0x09e9:  mov    -0x60(%ebp),%edx
087a970c +0x09ec:  ror    $0x13,%ecx
087a970f +0x09ef:  add    %edi,%ecx
087a9711 +0x09f1:  lea    -0x56ac02b2(%edi,%edx,1),%edi
087a9718 +0x09f8:  mov    %edi,-0xc(%ebp)
087a971b +0x09fb:  mov    %esi,%edi
087a971d +0x09fd:  mov    -0x10(%ebp),%edx
087a9720 +0x0a00:  not    %edi
087a9722 +0x0a02:  or     -0x10(%ebp),%edi
087a9725 +0x0a05:  xor    %ecx,%edi
087a9727 +0x0a07:  add    -0xc(%ebp),%edi
087a972a +0x0a0a:  ror    $0x14,%edi
087a972d +0x0a0d:  add    %eax,%edi
087a972f +0x0a0f:  mov    %edi,-0xc(%ebp)
087a9732 +0x0a12:  mov    -0x50(%ebp),%edi
087a9735 +0x0a15:  ror    $0x16,%edx
087a9738 +0x0a18:  lea    -0x56ac02b2(%eax,%edi,1),%eax
087a973f +0x0a1f:  mov    -0x84(%ebp),%edi
087a9745 +0x0a25:  mov    %eax,-0x10(%ebp)
087a9748 +0x0a28:  mov    %edx,%eax
087a974a +0x0a2a:  not    %eax
087a974c +0x0a2c:  or     %ecx,%eax
087a974e +0x0a2e:  xor    -0xc(%ebp),%eax
087a9751 +0x0a31:  add    -0x10(%ebp),%eax
087a9754 +0x0a34:  ror    $0x16,%ecx
087a9757 +0x0a37:  ror    $0x1b,%eax
087a975a +0x0a3a:  add    %esi,%eax
087a975c +0x0a3c:  mov    %eax,-0x10(%ebp)
087a975f +0x0a3f:  lea    -0x56ac02b2(%esi,%edi,1),%eax
087a9766 +0x0a46:  mov    %ecx,%esi
087a9768 +0x0a48:  not    %esi
087a976a +0x0a4a:  mov    -0xc(%ebp),%edi
087a976d +0x0a4d:  or     -0xc(%ebp),%esi
087a9770 +0x0a50:  xor    -0x10(%ebp),%esi
087a9773 +0x0a53:  ror    $0x16,%edi
087a9776 +0x0a56:  lea    (%eax,%esi,1),%esi
087a9779 +0x0a59:  mov    -0x7c(%ebp),%eax
087a977c +0x0a5c:  ror    $0x14,%esi
087a977f +0x0a5f:  add    %edx,%esi
087a9781 +0x0a61:  lea    -0x56ac02b2(%edx,%eax,1),%edx
087a9788 +0x0a68:  mov    -0x10(%ebp),%eax
087a978b +0x0a6b:  mov    %edx,-0xc(%ebp)
087a978e +0x0a6e:  mov    %edi,%edx
087a9790 +0x0a70:  not    %edx
087a9792 +0x0a72:  or     -0x10(%ebp),%edx
087a9795 +0x0a75:  ror    $0x16,%eax
087a9798 +0x0a78:  xor    %esi,%edx
087a979a +0x0a7a:  add    -0xc(%ebp),%edx
087a979d +0x0a7d:  ror    $0x13,%edx
087a97a0 +0x0a80:  add    %ecx,%edx
087a97a2 +0x0a82:  mov    %edx,-0xc(%ebp)
087a97a5 +0x0a85:  mov    -0x68(%ebp),%edx
087a97a8 +0x0a88:  lea    -0x56ac02b2(%ecx,%edx,1),%ecx
087a97af +0x0a8f:  mov    %eax,%edx
087a97b1 +0x0a91:  not    %edx
087a97b3 +0x0a93:  or     %esi,%edx
087a97b5 +0x0a95:  xor    -0xc(%ebp),%edx
087a97b8 +0x0a98:  ror    $0x16,%esi
087a97bb +0x0a9b:  add    %edx,%ecx
087a97bd +0x0a9d:  mov    %esi,%edx
087a97bf +0x0a9f:  ror    $0x12,%ecx
087a97c2 +0x0aa2:  not    %edx
087a97c4 +0x0aa4:  add    %edi,%ecx
087a97c6 +0x0aa6:  mov    %ecx,-0x10(%ebp)
087a97c9 +0x0aa9:  mov    -0x5c(%ebp),%ecx
087a97cc +0x0aac:  or     -0xc(%ebp),%edx
087a97cf +0x0aaf:  xor    -0x10(%ebp),%edx
087a97d2 +0x0ab2:  lea    -0x56ac02b2(%edi,%ecx,1),%edi
087a97d9 +0x0ab9:  mov    -0x70(%ebp),%ecx
087a97dc +0x0abc:  add    %edx,%edi
087a97de +0x0abe:  mov    -0xc(%ebp),%edx
087a97e1 +0x0ac1:  ror    $0x15,%edi
087a97e4 +0x0ac4:  add    %eax,%edi
087a97e6 +0x0ac6:  lea    -0x56ac02b2(%eax,%ecx,1),%eax
087a97ed +0x0acd:  ror    $0x16,%edx
087a97f0 +0x0ad0:  mov    %eax,-0xc(%ebp)
087a97f3 +0x0ad3:  mov    %edx,%eax
087a97f5 +0x0ad5:  not    %eax
087a97f7 +0x0ad7:  or     -0x10(%ebp),%eax
087a97fa +0x0ada:  xor    %edi,%eax
087a97fc +0x0adc:  add    -0xc(%ebp),%eax
087a97ff +0x0adf:  ror    $0x18,%eax
087a9802 +0x0ae2:  add    %esi,%eax
087a9804 +0x0ae4:  mov    %eax,-0x2c(%ebp)
087a9807 +0x0ae7:  mov    -0x10(%ebp),%eax
087a980a +0x0aea:  ror    $0x16,%eax
087a980d +0x0aed:  mov    %eax,-0x28(%ebp)
087a9810 +0x0af0:  mov    -0x4c(%ebp),%eax
087a9813 +0x0af3:  lea    -0x56ac02b2(%esi,%eax,1),%ecx
087a981a +0x0afa:  mov    -0x28(%ebp),%eax
087a981d +0x0afd:  not    %eax
087a981f +0x0aff:  or     %edi,%eax
087a9821 +0x0b01:  xor    -0x2c(%ebp),%eax
087a9824 +0x0b04:  ror    $0x16,%edi
087a9827 +0x0b07:  lea    (%ecx,%eax,1),%eax
087a982a +0x0b0a:  ror    $0x1b,%eax
087a982d +0x0b0d:  add    %edx,%eax
087a982f +0x0b0f:  mov    %eax,-0x34(%ebp)
087a9832 +0x0b12:  mov    -0x48(%ebp),%eax
087a9835 +0x0b15:  mov    %edi,-0x30(%ebp)
087a9838 +0x0b18:  mov    -0x74(%ebp),%edi
087a983b +0x0b1b:  mov    -0x54(%ebp),%ecx
087a983e +0x0b1e:  lea    0x50a28be6(%eax,%edi,1),%esi
087a9845 +0x0b25:  mov    -0x40(%ebp),%eax
087a9848 +0x0b28:  mov    -0x3c(%ebp),%edi
087a984b +0x0b2b:  lea    -0x56ac02b2(%edx,%ecx,1),%edx
087a9852 +0x0b32:  mov    -0x50(%ebp),%ecx
087a9855 +0x0b35:  mov    %edx,-0x38(%ebp)
087a9858 +0x0b38:  not    %eax
087a985a +0x0b3a:  or     -0x44(%ebp),%eax
087a985d +0x0b3d:  xor    -0x24(%ebp),%eax
087a9860 +0x0b40:  lea    0x50a28be6(%edi,%ecx,1),%edx
087a9867 +0x0b47:  mov    -0x40(%ebp),%ecx
087a986a +0x0b4a:  add    %eax,%esi
087a986c +0x0b4c:  mov    -0x20(%ebp),%eax
087a986f +0x0b4f:  ror    $0x18,%esi
087a9872 +0x0b52:  add    -0x3c(%ebp),%esi
087a9875 +0x0b55:  not    %eax
087a9877 +0x0b57:  or     -0x24(%ebp),%eax
087a987a +0x0b5a:  xor    %esi,%eax
087a987c +0x0b5c:  add    %eax,%edx
087a987e +0x0b5e:  mov    -0x6c(%ebp),%eax
087a9881 +0x0b61:  ror    $0x17,%edx
087a9884 +0x0b64:  add    -0x40(%ebp),%edx
087a9887 +0x0b67:  lea    0x50a28be6(%ecx,%eax,1),%edi
087a988e +0x0b6e:  mov    -0x1c(%ebp),%eax
087a9891 +0x0b71:  mov    -0x20(%ebp),%ecx
087a9894 +0x0b74:  not    %eax
087a9896 +0x0b76:  or     %esi,%eax
087a9898 +0x0b78:  xor    %edx,%eax
087a989a +0x0b7a:  add    %eax,%edi
087a989c +0x0b7c:  mov    -0x88(%ebp),%eax
087a98a2 +0x0b82:  ror    $0x16,%esi
087a98a5 +0x0b85:  ror    $0x17,%edi
087a98a8 +0x0b88:  add    -0x20(%ebp),%edi
087a98ab +0x0b8b:  lea    0x50a28be6(%ecx,%eax,1),%eax
087a98b2 +0x0b92:  mov    %eax,-0xc(%ebp)
087a98b5 +0x0b95:  mov    %esi,%eax
087a98b7 +0x0b97:  mov    -0xc(%ebp),%ecx
087a98ba +0x0b9a:  not    %eax
087a98bc +0x0b9c:  or     %edx,%eax
087a98be +0x0b9e:  xor    %edi,%eax
087a98c0 +0x0ba0:  add    %eax,%ecx
087a98c2 +0x0ba2:  mov    -0x1c(%ebp),%eax
087a98c5 +0x0ba5:  ror    $0x15,%ecx
087a98c8 +0x0ba8:  add    -0x1c(%ebp),%ecx
087a98cb +0x0bab:  ror    $0x16,%edx
087a98ce +0x0bae:  mov    %ecx,-0x10(%ebp)
087a98d1 +0x0bb1:  mov    -0x64(%ebp),%ecx
087a98d4 +0x0bb4:  lea    0x50a28be6(%eax,%ecx,1),%ecx
087a98db +0x0bbb:  mov    %edx,%eax
087a98dd +0x0bbd:  not    %eax
087a98df +0x0bbf:  or     %edi,%eax
087a98e1 +0x0bc1:  xor    -0x10(%ebp),%eax
087a98e4 +0x0bc4:  ror    $0x16,%edi
087a98e7 +0x0bc7:  add    %ecx,%eax
087a98e9 +0x0bc9:  mov    -0x10(%ebp),%ecx
087a98ec +0x0bcc:  ror    $0x13,%eax
087a98ef +0x0bcf:  add    %esi,%eax
087a98f1 +0x0bd1:  mov    %eax,-0xc(%ebp)
087a98f4 +0x0bd4:  mov    -0x80(%ebp),%eax
087a98f7 +0x0bd7:  ror    $0x16,%ecx
087a98fa +0x0bda:  lea    0x50a28be6(%esi,%eax,1),%esi
087a9901 +0x0be1:  mov    %edi,%eax
087a9903 +0x0be3:  not    %eax
087a9905 +0x0be5:  or     -0x10(%ebp),%eax
087a9908 +0x0be8:  xor    -0xc(%ebp),%eax
087a990b +0x0beb:  add    %eax,%esi
087a990d +0x0bed:  mov    -0x5c(%ebp),%eax
087a9910 +0x0bf0:  ror    $0x11,%esi
087a9913 +0x0bf3:  add    %edx,%esi
087a9915 +0x0bf5:  lea    0x50a28be6(%edx,%eax,1),%edx
087a991c +0x0bfc:  mov    %ecx,%eax
087a991e +0x0bfe:  not    %eax
087a9920 +0x0c00:  or     -0xc(%ebp),%eax
087a9923 +0x0c03:  xor    %esi,%eax
087a9925 +0x0c05:  add    %eax,%edx
087a9927 +0x0c07:  ror    $0x11,%edx
087a992a +0x0c0a:  add    %edi,%edx
087a992c +0x0c0c:  mov    %edx,-0x10(%ebp)
087a992f +0x0c0f:  mov    -0xc(%ebp),%eax
087a9932 +0x0c12:  mov    -0x78(%ebp),%edx
087a9935 +0x0c15:  ror    $0x16,%eax
087a9938 +0x0c18:  lea    0x50a28be6(%edi,%edx,1),%edi
087a993f +0x0c1f:  mov    -0x54(%ebp),%edx
087a9942 +0x0c22:  mov    %edi,-0xc(%ebp)
087a9945 +0x0c25:  mov    %eax,%edi
087a9947 +0x0c27:  not    %edi
087a9949 +0x0c29:  or     %esi,%edi
087a994b +0x0c2b:  xor    -0x10(%ebp),%edi
087a994e +0x0c2e:  add    -0xc(%ebp),%edi
087a9951 +0x0c31:  ror    $0x16,%esi
087a9954 +0x0c34:  ror    $0x1b,%edi
087a9957 +0x0c37:  add    %ecx,%edi
087a9959 +0x0c39:  mov    %edi,-0xc(%ebp)
087a995c +0x0c3c:  lea    0x50a28be6(%ecx,%edx,1),%edi
087a9963 +0x0c43:  mov    %esi,%ecx
087a9965 +0x0c45:  not    %ecx
087a9967 +0x0c47:  mov    -0x10(%ebp),%edx
087a996a +0x0c4a:  or     -0x10(%ebp),%ecx
087a996d +0x0c4d:  xor    -0xc(%ebp),%ecx
087a9970 +0x0c50:  ror    $0x16,%edx
087a9973 +0x0c53:  lea    (%edi,%ecx,1),%ecx
087a9976 +0x0c56:  mov    -0x70(%ebp),%edi
087a9979 +0x0c59:  ror    $0x19,%ecx
087a997c +0x0c5c:  add    %eax,%ecx
087a997e +0x0c5e:  lea    0x50a28be6(%eax,%edi,1),%eax
087a9985 +0x0c65:  mov    -0xc(%ebp),%edi
087a9988 +0x0c68:  mov    %eax,-0x10(%ebp)
087a998b +0x0c6b:  mov    %edx,%eax
087a998d +0x0c6d:  not    %eax
087a998f +0x0c6f:  or     -0xc(%ebp),%eax
087a9992 +0x0c72:  xor    %ecx,%eax
087a9994 +0x0c74:  add    -0x10(%ebp),%eax
087a9997 +0x0c77:  ror    $0x19,%eax
087a999a +0x0c7a:  add    %esi,%eax
087a999c +0x0c7c:  mov    %eax,-0x14(%ebp)
087a999f +0x0c7f:  mov    -0x4c(%ebp),%eax
087a99a2 +0x0c82:  ror    $0x16,%edi
087a99a5 +0x0c85:  lea    0x50a28be6(%esi,%eax,1),%esi
087a99ac +0x0c8c:  mov    -0x68(%ebp),%eax
087a99af +0x0c8f:  mov    %esi,-0xc(%ebp)
087a99b2 +0x0c92:  mov    %edi,%esi
087a99b4 +0x0c94:  not    %esi
087a99b6 +0x0c96:  or     %ecx,%esi
087a99b8 +0x0c98:  xor    -0x14(%ebp),%esi
087a99bb +0x0c9b:  add    -0xc(%ebp),%esi
087a99be +0x0c9e:  ror    $0x16,%ecx
087a99c1 +0x0ca1:  ror    $0x18,%esi
087a99c4 +0x0ca4:  add    %edx,%esi
087a99c6 +0x0ca6:  mov    %esi,-0xc(%ebp)
087a99c9 +0x0ca9:  lea    0x50a28be6(%edx,%eax,1),%esi
087a99d0 +0x0cb0:  mov    %ecx,%edx
087a99d2 +0x0cb2:  not    %edx
087a99d4 +0x0cb4:  mov    -0x14(%ebp),%eax
087a99d7 +0x0cb7:  or     -0x14(%ebp),%edx
087a99da +0x0cba:  xor    -0xc(%ebp),%edx
087a99dd +0x0cbd:  ror    $0x16,%eax
087a99e0 +0x0cc0:  lea    (%esi,%edx,1),%edx
087a99e3 +0x0cc3:  mov    %eax,%esi
087a99e5 +0x0cc5:  ror    $0x15,%edx
087a99e8 +0x0cc8:  not    %esi
087a99ea +0x0cca:  add    %edi,%edx
087a99ec +0x0ccc:  mov    %edx,-0x10(%ebp)
087a99ef +0x0ccf:  mov    -0x84(%ebp),%edx
087a99f5 +0x0cd5:  or     -0xc(%ebp),%esi
087a99f8 +0x0cd8:  xor    -0x10(%ebp),%esi
087a99fb +0x0cdb:  lea    0x50a28be6(%edi,%edx,1),%edi
087a9a02 +0x0ce2:  mov    -0x60(%ebp),%edx
087a9a05 +0x0ce5:  add    %esi,%edi
087a9a07 +0x0ce7:  mov    -0xc(%ebp),%esi
087a9a0a +0x0cea:  ror    $0x12,%edi
087a9a0d +0x0ced:  add    %ecx,%edi
087a9a0f +0x0cef:  lea    0x50a28be6(%ecx,%edx,1),%ecx
087a9a16 +0x0cf6:  ror    $0x16,%esi
087a9a19 +0x0cf9:  mov    %ecx,-0xc(%ebp)
087a9a1c +0x0cfc:  mov    %esi,%ecx
087a9a1e +0x0cfe:  not    %ecx
087a9a20 +0x0d00:  or     -0x10(%ebp),%ecx
087a9a23 +0x0d03:  xor    %edi,%ecx
087a9a25 +0x0d05:  add    -0xc(%ebp),%ecx
087a9a28 +0x0d08:  ror    $0x12,%ecx
087a9a2b +0x0d0b:  add    %eax,%ecx
087a9a2d +0x0d0d:  mov    %ecx,-0xc(%ebp)
087a9a30 +0x0d10:  mov    -0x10(%ebp),%ecx
087a9a33 +0x0d13:  ror    $0x16,%ecx
087a9a36 +0x0d16:  mov    %ecx,-0x10(%ebp)
087a9a39 +0x0d19:  mov    -0x7c(%ebp),%ecx
087a9a3c +0x0d1c:  lea    0x50a28be6(%eax,%ecx,1),%edx
087a9a43 +0x0d23:  mov    -0x10(%ebp),%eax
087a9a46 +0x0d26:  not    %eax
087a9a48 +0x0d28:  or     %edi,%eax
087a9a4a +0x0d2a:  xor    -0xc(%ebp),%eax
087a9a4d +0x0d2d:  ror    $0x16,%edi
087a9a50 +0x0d30:  lea    (%edx,%eax,1),%ecx
087a9a53 +0x0d33:  mov    -0x58(%ebp),%eax
087a9a56 +0x0d36:  ror    $0x14,%ecx
087a9a59 +0x0d39:  mov    -0xc(%ebp),%edx
087a9a5c +0x0d3c:  add    %esi,%ecx
087a9a5e +0x0d3e:  lea    0x50a28be6(%esi,%eax,1),%esi
087a9a65 +0x0d45:  mov    %edi,%eax
087a9a67 +0x0d47:  not    %eax
087a9a69 +0x0d49:  or     -0xc(%ebp),%eax
087a9a6c +0x0d4c:  xor    %ecx,%eax
087a9a6e +0x0d4e:  lea    (%esi,%eax,1),%eax
087a9a71 +0x0d51:  mov    -0x70(%ebp),%esi
087a9a74 +0x0d54:  ror    $0x1a,%eax
087a9a77 +0x0d57:  add    -0x10(%ebp),%eax
087a9a7a +0x0d5a:  ror    $0x16,%edx
087a9a7d +0x0d5d:  mov    %edx,-0x14(%ebp)
087a9a80 +0x0d60:  mov    -0x10(%ebp),%edx
087a9a83 +0x0d63:  lea    0x5c4dd124(%edx,%esi,1),%esi
087a9a8a +0x0d6a:  mov    %eax,%edx
087a9a8c +0x0d6c:  xor    %ecx,%edx
087a9a8e +0x0d6e:  and    -0x14(%ebp),%edx
087a9a91 +0x0d71:  xor    %ecx,%edx
087a9a93 +0x0d73:  ror    $0x16,%ecx
087a9a96 +0x0d76:  add    %esi,%edx
087a9a98 +0x0d78:  mov    %ecx,-0xc(%ebp)
087a9a9b +0x0d7b:  mov    -0x5c(%ebp),%ecx
087a9a9e +0x0d7e:  ror    $0x17,%edx
087a9aa1 +0x0d81:  add    %edi,%edx
087a9aa3 +0x0d83:  lea    0x5c4dd124(%edi,%ecx,1),%edi
087a9aaa +0x0d8a:  mov    %edx,%ecx
087a9aac +0x0d8c:  xor    %eax,%ecx
087a9aae +0x0d8e:  and    -0xc(%ebp),%ecx
087a9ab1 +0x0d91:  xor    %eax,%ecx
087a9ab3 +0x0d93:  ror    $0x16,%eax
087a9ab6 +0x0d96:  add    %ecx,%edi
087a9ab8 +0x0d98:  mov    -0x14(%ebp),%ecx
087a9abb +0x0d9b:  mov    %eax,-0x10(%ebp)
087a9abe +0x0d9e:  mov    -0x7c(%ebp),%eax
087a9ac1 +0x0da1:  ror    $0x13,%edi
087a9ac4 +0x0da4:  add    -0x14(%ebp),%edi
087a9ac7 +0x0da7:  lea    0x5c4dd124(%ecx,%eax,1),%esi
087a9ace +0x0dae:  mov    %edi,%ecx
087a9ad0 +0x0db0:  mov    -0x6c(%ebp),%eax
087a9ad3 +0x0db3:  xor    %edx,%ecx
087a9ad5 +0x0db5:  and    -0x10(%ebp),%ecx
087a9ad8 +0x0db8:  xor    %edx,%ecx
087a9ada +0x0dba:  add    %ecx,%esi
087a9adc +0x0dbc:  mov    -0xc(%ebp),%ecx
087a9adf +0x0dbf:  ror    $0x11,%esi
087a9ae2 +0x0dc2:  add    -0xc(%ebp),%esi
087a9ae5 +0x0dc5:  ror    $0x16,%edx
087a9ae8 +0x0dc8:  lea    0x5c4dd124(%ecx,%eax,1),%eax
087a9aef +0x0dcf:  mov    %esi,%ecx
087a9af1 +0x0dd1:  xor    %edi,%ecx
087a9af3 +0x0dd3:  and    %edx,%ecx
087a9af5 +0x0dd5:  xor    %edi,%ecx
087a9af7 +0x0dd7:  ror    $0x16,%edi
087a9afa +0x0dda:  add    %eax,%ecx
087a9afc +0x0ddc:  mov    -0x10(%ebp),%eax
087a9aff +0x0ddf:  mov    %edi,-0xc(%ebp)
087a9b02 +0x0de2:  mov    -0x88(%ebp),%edi
087a9b08 +0x0de8:  ror    $0x19,%ecx
087a9b0b +0x0deb:  add    -0x10(%ebp),%ecx
087a9b0e +0x0dee:  lea    0x5c4dd124(%eax,%edi,1),%edi
087a9b15 +0x0df5:  mov    %ecx,%eax
087a9b17 +0x0df7:  xor    %esi,%eax
087a9b19 +0x0df9:  and    -0xc(%ebp),%eax
087a9b1c +0x0dfc:  xor    %esi,%eax
087a9b1e +0x0dfe:  add    %eax,%edi
087a9b20 +0x0e00:  mov    -0x54(%ebp),%eax
087a9b23 +0x0e03:  ror    $0x14,%edi
087a9b26 +0x0e06:  add    %edx,%edi
087a9b28 +0x0e08:  ror    $0x16,%esi
087a9b2b +0x0e0b:  lea    0x5c4dd124(%edx,%eax,1),%edx
087a9b32 +0x0e12:  mov    %edi,%eax
087a9b34 +0x0e14:  xor    %ecx,%eax
087a9b36 +0x0e16:  and    %esi,%eax
087a9b38 +0x0e18:  xor    %ecx,%eax
087a9b3a +0x0e1a:  ror    $0x16,%ecx
087a9b3d +0x0e1d:  add    %eax,%edx
087a9b3f +0x0e1f:  mov    -0xc(%ebp),%eax
087a9b42 +0x0e22:  mov    %ecx,-0x10(%ebp)
087a9b45 +0x0e25:  mov    -0x74(%ebp),%ecx
087a9b48 +0x0e28:  ror    $0x18,%edx
087a9b4b +0x0e2b:  add    -0xc(%ebp),%edx
087a9b4e +0x0e2e:  lea    0x5c4dd124(%eax,%ecx,1),%ecx
087a9b55 +0x0e35:  mov    %edx,%eax
087a9b57 +0x0e37:  xor    %edi,%eax
087a9b59 +0x0e39:  and    -0x10(%ebp),%eax
087a9b5c +0x0e3c:  xor    %edi,%eax
087a9b5e +0x0e3e:  ror    $0x16,%edi
087a9b61 +0x0e41:  add    %ecx,%eax
087a9b63 +0x0e43:  mov    %edi,-0xc(%ebp)
087a9b66 +0x0e46:  mov    -0x60(%ebp),%ecx
087a9b69 +0x0e49:  ror    $0x17,%eax
087a9b6c +0x0e4c:  add    %esi,%eax
087a9b6e +0x0e4e:  lea    0x5c4dd124(%esi,%ecx,1),%edi
087a9b75 +0x0e55:  mov    %eax,%esi
087a9b77 +0x0e57:  mov    -0x10(%ebp),%ecx
087a9b7a +0x0e5a:  xor    %edx,%esi
087a9b7c +0x0e5c:  and    -0xc(%ebp),%esi
087a9b7f +0x0e5f:  xor    %edx,%esi
087a9b81 +0x0e61:  lea    (%edi,%esi,1),%esi
087a9b84 +0x0e64:  mov    -0x50(%ebp),%edi
087a9b87 +0x0e67:  ror    $0x15,%esi
087a9b8a +0x0e6a:  add    -0x10(%ebp),%esi
087a9b8d +0x0e6d:  ror    $0x16,%edx
087a9b90 +0x0e70:  lea    0x5c4dd124(%ecx,%edi,1),%edi
087a9b97 +0x0e77:  mov    %esi,%ecx
087a9b99 +0x0e79:  xor    %eax,%ecx
087a9b9b +0x0e7b:  and    %edx,%ecx
087a9b9d +0x0e7d:  xor    %eax,%ecx
087a9b9f +0x0e7f:  ror    $0x16,%eax
087a9ba2 +0x0e82:  add    %ecx,%edi
087a9ba4 +0x0e84:  mov    -0xc(%ebp),%ecx
087a9ba7 +0x0e87:  mov    %eax,-0x10(%ebp)
087a9baa +0x0e8a:  mov    -0x4c(%ebp),%eax
087a9bad +0x0e8d:  ror    $0x19,%edi
087a9bb0 +0x0e90:  add    -0xc(%ebp),%edi
087a9bb3 +0x0e93:  lea    0x5c4dd124(%ecx,%eax,1),%eax
087a9bba +0x0e9a:  mov    %edi,%ecx
087a9bbc +0x0e9c:  xor    %esi,%ecx
087a9bbe +0x0e9e:  and    -0x10(%ebp),%ecx
087a9bc1 +0x0ea1:  xor    %esi,%ecx
087a9bc3 +0x0ea3:  add    %eax,%ecx
087a9bc5 +0x0ea5:  mov    -0x68(%ebp),%eax
087a9bc8 +0x0ea8:  ror    $0x19,%ecx
087a9bcb +0x0eab:  add    %edx,%ecx
087a9bcd +0x0ead:  ror    $0x16,%esi
087a9bd0 +0x0eb0:  mov    %esi,-0xc(%ebp)
087a9bd3 +0x0eb3:  lea    0x5c4dd124(%edx,%eax,1),%esi
087a9bda +0x0eba:  mov    %ecx,%edx
087a9bdc +0x0ebc:  xor    %edi,%edx
087a9bde +0x0ebe:  mov    -0x10(%ebp),%eax
087a9be1 +0x0ec1:  and    -0xc(%ebp),%edx
087a9be4 +0x0ec4:  xor    %edi,%edx
087a9be6 +0x0ec6:  lea    (%esi,%edx,1),%edx
087a9be9 +0x0ec9:  mov    -0x58(%ebp),%esi
087a9bec +0x0ecc:  ror    $0x14,%edx
087a9bef +0x0ecf:  add    -0x10(%ebp),%edx
087a9bf2 +0x0ed2:  ror    $0x16,%edi
087a9bf5 +0x0ed5:  lea    0x5c4dd124(%eax,%esi,1),%esi
087a9bfc +0x0edc:  mov    %edx,%eax
087a9bfe +0x0ede:  xor    %ecx,%eax
087a9c00 +0x0ee0:  and    %edi,%eax
087a9c02 +0x0ee2:  xor    %ecx,%eax
087a9c04 +0x0ee4:  ror    $0x16,%ecx
087a9c07 +0x0ee7:  add    %eax,%esi
087a9c09 +0x0ee9:  mov    -0x78(%ebp),%eax
087a9c0c +0x0eec:  mov    %ecx,-0x10(%ebp)
087a9c0f +0x0eef:  mov    -0xc(%ebp),%ecx
087a9c12 +0x0ef2:  ror    $0x19,%esi
087a9c15 +0x0ef5:  add    -0xc(%ebp),%esi
087a9c18 +0x0ef8:  lea    0x5c4dd124(%ecx,%eax,1),%eax
087a9c1f +0x0eff:  mov    -0x84(%ebp),%ecx
087a9c25 +0x0f05:  mov    %eax,-0xc(%ebp)
087a9c28 +0x0f08:  mov    %esi,%eax
087a9c2a +0x0f0a:  xor    %edx,%eax
087a9c2c +0x0f0c:  and    -0x10(%ebp),%eax
087a9c2f +0x0f0f:  xor    %edx,%eax
087a9c31 +0x0f11:  ror    $0x16,%edx
087a9c34 +0x0f14:  add    -0xc(%ebp),%eax
087a9c37 +0x0f17:  mov    %edx,-0xc(%ebp)
087a9c3a +0x0f1a:  mov    -0x64(%ebp),%edx
087a9c3d +0x0f1d:  ror    $0x1a,%eax
087a9c40 +0x0f20:  add    %edi,%eax
087a9c42 +0x0f22:  lea    0x5c4dd124(%edi,%edx,1),%edi
087a9c49 +0x0f29:  mov    %eax,%edx
087a9c4b +0x0f2b:  xor    %esi,%edx
087a9c4d +0x0f2d:  and    -0xc(%ebp),%edx
087a9c50 +0x0f30:  xor    %esi,%edx
087a9c52 +0x0f32:  add    %edx,%edi
087a9c54 +0x0f34:  mov    -0x10(%ebp),%edx
087a9c57 +0x0f37:  ror    $0x11,%edi
087a9c5a +0x0f3a:  add    -0x10(%ebp),%edi
087a9c5d +0x0f3d:  ror    $0x16,%esi
087a9c60 +0x0f40:  lea    0x5c4dd124(%edx,%ecx,1),%ecx
087a9c67 +0x0f47:  mov    %edi,%edx
087a9c69 +0x0f49:  xor    %eax,%edx
087a9c6b +0x0f4b:  and    %esi,%edx
087a9c6d +0x0f4d:  xor    %eax,%edx
087a9c6f +0x0f4f:  add    %edx,%ecx
087a9c71 +0x0f51:  mov    -0x80(%ebp),%edx
087a9c74 +0x0f54:  ror    $0x13,%ecx
087a9c77 +0x0f57:  add    -0xc(%ebp),%ecx
087a9c7a +0x0f5a:  ror    $0x16,%eax
087a9c7d +0x0f5d:  mov    %ecx,-0x10(%ebp)
087a9c80 +0x0f60:  mov    -0xc(%ebp),%ecx
087a9c83 +0x0f63:  lea    0x5c4dd124(%ecx,%edx,1),%edx
087a9c8a +0x0f6a:  mov    %edx,-0xc(%ebp)
087a9c8d +0x0f6d:  mov    -0x10(%ebp),%edx
087a9c90 +0x0f70:  mov    -0x4c(%ebp),%ecx
087a9c93 +0x0f73:  xor    %edi,%edx
087a9c95 +0x0f75:  and    %eax,%edx
087a9c97 +0x0f77:  xor    %edi,%edx
087a9c99 +0x0f79:  add    -0xc(%ebp),%edx
087a9c9c +0x0f7c:  ror    $0x16,%edi
087a9c9f +0x0f7f:  ror    $0x15,%edx
087a9ca2 +0x0f82:  add    %esi,%edx
087a9ca4 +0x0f84:  mov    %edx,-0xc(%ebp)
087a9ca7 +0x0f87:  mov    -0x10(%ebp),%edx
087a9caa +0x0f8a:  lea    0x6d703ef3(%esi,%ecx,1),%esi
087a9cb1 +0x0f91:  mov    -0x10(%ebp),%ecx
087a9cb4 +0x0f94:  not    %edx
087a9cb6 +0x0f96:  or     -0xc(%ebp),%edx
087a9cb9 +0x0f99:  ror    $0x16,%ecx
087a9cbc +0x0f9c:  xor    %edi,%edx
087a9cbe +0x0f9e:  add    %edx,%esi
087a9cc0 +0x0fa0:  mov    -0x74(%ebp),%edx
087a9cc3 +0x0fa3:  ror    $0x17,%esi
087a9cc6 +0x0fa6:  add    %eax,%esi
087a9cc8 +0x0fa8:  lea    0x6d703ef3(%eax,%edx,1),%eax
087a9ccf +0x0faf:  mov    -0xc(%ebp),%edx
087a9cd2 +0x0fb2:  mov    %eax,-0x10(%ebp)
087a9cd5 +0x0fb5:  mov    -0xc(%ebp),%eax
087a9cd8 +0x0fb8:  ror    $0x16,%edx
087a9cdb +0x0fbb:  not    %eax
087a9cdd +0x0fbd:  or     %esi,%eax
087a9cdf +0x0fbf:  xor    %ecx,%eax
087a9ce1 +0x0fc1:  add    -0x10(%ebp),%eax
087a9ce4 +0x0fc4:  ror    $0x19,%eax
087a9ce7 +0x0fc7:  add    %edi,%eax
087a9ce9 +0x0fc9:  mov    %eax,-0x10(%ebp)
087a9cec +0x0fcc:  mov    -0x84(%ebp),%eax
087a9cf2 +0x0fd2:  lea    0x6d703ef3(%edi,%eax,1),%edi
087a9cf9 +0x0fd9:  mov    -0x7c(%ebp),%eax
087a9cfc +0x0fdc:  mov    %edi,-0xc(%ebp)
087a9cff +0x0fdf:  mov    %esi,%edi
087a9d01 +0x0fe1:  not    %edi
087a9d03 +0x0fe3:  or     -0x10(%ebp),%edi
087a9d06 +0x0fe6:  ror    $0x16,%esi
087a9d09 +0x0fe9:  xor    %edx,%edi
087a9d0b +0x0feb:  add    -0xc(%ebp),%edi
087a9d0e +0x0fee:  ror    $0x11,%edi
087a9d11 +0x0ff1:  add    %ecx,%edi
087a9d13 +0x0ff3:  mov    %edi,-0xc(%ebp)
087a9d16 +0x0ff6:  lea    0x6d703ef3(%ecx,%eax,1),%edi
087a9d1d +0x0ffd:  mov    -0x10(%ebp),%ecx
087a9d20 +0x1000:  mov    -0x10(%ebp),%eax
087a9d23 +0x1003:  not    %ecx
087a9d25 +0x1005:  or     -0xc(%ebp),%ecx
087a9d28 +0x1008:  xor    %esi,%ecx
087a9d2a +0x100a:  lea    (%edi,%ecx,1),%ecx
087a9d2d +0x100d:  mov    -0x6c(%ebp),%edi
087a9d30 +0x1010:  ror    $0x15,%ecx
087a9d33 +0x1013:  add    %edx,%ecx
087a9d35 +0x1015:  ror    $0x16,%eax
087a9d38 +0x1018:  lea    0x6d703ef3(%edx,%edi,1),%edx
087a9d3f +0x101f:  mov    -0xc(%ebp),%edi
087a9d42 +0x1022:  mov    %edx,-0x10(%ebp)
087a9d45 +0x1025:  mov    -0xc(%ebp),%edx
087a9d48 +0x1028:  ror    $0x16,%edi
087a9d4b +0x102b:  not    %edx
087a9d4d +0x102d:  or     %ecx,%edx
087a9d4f +0x102f:  xor    %eax,%edx
087a9d51 +0x1031:  add    -0x10(%ebp),%edx
087a9d54 +0x1034:  ror    $0x18,%edx
087a9d57 +0x1037:  add    %esi,%edx
087a9d59 +0x1039:  mov    %edx,-0x14(%ebp)
087a9d5c +0x103c:  mov    -0x50(%ebp),%edx
087a9d5f +0x103f:  lea    0x6d703ef3(%esi,%edx,1),%esi
087a9d66 +0x1046:  mov    -0x70(%ebp),%edx
087a9d69 +0x1049:  mov    %esi,-0xc(%ebp)
087a9d6c +0x104c:  mov    %ecx,%esi
087a9d6e +0x104e:  not    %esi
087a9d70 +0x1050:  or     -0x14(%ebp),%esi
087a9d73 +0x1053:  ror    $0x16,%ecx
087a9d76 +0x1056:  xor    %edi,%esi
087a9d78 +0x1058:  add    -0xc(%ebp),%esi
087a9d7b +0x105b:  ror    $0x1a,%esi
087a9d7e +0x105e:  add    %eax,%esi
087a9d80 +0x1060:  mov    %esi,-0xc(%ebp)
087a9d83 +0x1063:  lea    0x6d703ef3(%eax,%edx,1),%esi
087a9d8a +0x106a:  mov    -0x14(%ebp),%eax
087a9d8d +0x106d:  not    %eax
087a9d8f +0x106f:  or     -0xc(%ebp),%eax
087a9d92 +0x1072:  xor    %ecx,%eax
087a9d94 +0x1074:  lea    (%esi,%eax,1),%eax
087a9d97 +0x1077:  ror    $0x1a,%eax
087a9d9a +0x107a:  add    %edi,%eax
087a9d9c +0x107c:  mov    %eax,-0x10(%ebp)
087a9d9f +0x107f:  mov    -0x64(%ebp),%esi
087a9da2 +0x1082:  mov    -0x14(%ebp),%edx
087a9da5 +0x1085:  lea    0x6d703ef3(%edi,%esi,1),%edi
087a9dac +0x108c:  mov    -0xc(%ebp),%esi
087a9daf +0x108f:  ror    $0x16,%edx
087a9db2 +0x1092:  not    %esi
087a9db4 +0x1094:  or     %eax,%esi
087a9db6 +0x1096:  mov    -0x5c(%ebp),%eax
087a9db9 +0x1099:  xor    %edx,%esi
087a9dbb +0x109b:  add    %esi,%edi
087a9dbd +0x109d:  mov    -0xc(%ebp),%esi
087a9dc0 +0x10a0:  ror    $0x12,%edi
087a9dc3 +0x10a3:  add    %ecx,%edi
087a9dc5 +0x10a5:  lea    0x6d703ef3(%ecx,%eax,1),%ecx
087a9dcc +0x10ac:  mov    -0x10(%ebp),%eax
087a9dcf +0x10af:  mov    %ecx,-0xc(%ebp)
087a9dd2 +0x10b2:  mov    -0x10(%ebp),%ecx
087a9dd5 +0x10b5:  ror    $0x16,%esi
087a9dd8 +0x10b8:  ror    $0x16,%eax
087a9ddb +0x10bb:  not    %ecx
087a9ddd +0x10bd:  or     %edi,%ecx
087a9ddf +0x10bf:  xor    %esi,%ecx
087a9de1 +0x10c1:  add    -0xc(%ebp),%ecx
087a9de4 +0x10c4:  ror    $0x14,%ecx
087a9de7 +0x10c7:  add    %edx,%ecx
087a9de9 +0x10c9:  mov    %ecx,-0xc(%ebp)
087a9dec +0x10cc:  mov    -0x68(%ebp),%ecx
087a9def +0x10cf:  lea    0x6d703ef3(%edx,%ecx,1),%edx
087a9df6 +0x10d6:  mov    -0xc(%ebp),%ecx
087a9df9 +0x10d9:  mov    %edx,-0x10(%ebp)
087a9dfc +0x10dc:  mov    %edi,%edx
087a9dfe +0x10de:  not    %edx
087a9e00 +0x10e0:  or     -0xc(%ebp),%edx
087a9e03 +0x10e3:  not    %ecx
087a9e05 +0x10e5:  xor    %eax,%edx
087a9e07 +0x10e7:  add    -0x10(%ebp),%edx
087a9e0a +0x10ea:  ror    $0x16,%edi
087a9e0d +0x10ed:  ror    $0x13,%edx
087a9e10 +0x10f0:  add    %esi,%edx
087a9e12 +0x10f2:  mov    %edx,-0x10(%ebp)
087a9e15 +0x10f5:  mov    -0x58(%ebp),%edx
087a9e18 +0x10f8:  or     -0x10(%ebp),%ecx
087a9e1b +0x10fb:  lea    0x6d703ef3(%esi,%edx,1),%esi
087a9e22 +0x1102:  mov    -0x80(%ebp),%edx
087a9e25 +0x1105:  xor    %edi,%ecx
087a9e27 +0x1107:  add    %ecx,%esi
087a9e29 +0x1109:  mov    -0xc(%ebp),%ecx
087a9e2c +0x110c:  ror    $0x1b,%esi
087a9e2f +0x110f:  add    %eax,%esi
087a9e31 +0x1111:  lea    0x6d703ef3(%eax,%edx,1),%eax
087a9e38 +0x1118:  mov    -0x10(%ebp),%edx
087a9e3b +0x111b:  mov    %eax,-0xc(%ebp)
087a9e3e +0x111e:  mov    -0x10(%ebp),%eax
087a9e41 +0x1121:  ror    $0x16,%ecx
087a9e44 +0x1124:  ror    $0x16,%edx
087a9e47 +0x1127:  not    %eax
087a9e49 +0x1129:  or     %esi,%eax
087a9e4b +0x112b:  xor    %ecx,%eax
087a9e4d +0x112d:  add    -0xc(%ebp),%eax
087a9e50 +0x1130:  ror    $0x12,%eax
087a9e53 +0x1133:  add    %edi,%eax
087a9e55 +0x1135:  mov    %eax,-0xc(%ebp)
087a9e58 +0x1138:  mov    -0x60(%ebp),%eax
087a9e5b +0x113b:  lea    0x6d703ef3(%edi,%eax,1),%edi
087a9e62 +0x1142:  mov    %esi,%eax
087a9e64 +0x1144:  not    %eax
087a9e66 +0x1146:  or     -0xc(%ebp),%eax
087a9e69 +0x1149:  ror    $0x16,%esi
087a9e6c +0x114c:  xor    %edx,%eax
087a9e6e +0x114e:  add    %eax,%edi
087a9e70 +0x1150:  mov    -0x88(%ebp),%eax
087a9e76 +0x1156:  ror    $0x13,%edi
087a9e79 +0x1159:  add    %ecx,%edi
087a9e7b +0x115b:  lea    0x6d703ef3(%ecx,%eax,1),%ecx
087a9e82 +0x1162:  mov    -0xc(%ebp),%eax
087a9e85 +0x1165:  not    %eax
087a9e87 +0x1167:  or     %edi,%eax
087a9e89 +0x1169:  xor    %esi,%eax
087a9e8b +0x116b:  add    %eax,%ecx
087a9e8d +0x116d:  mov    -0xc(%ebp),%eax
087a9e90 +0x1170:  ror    $0x13,%ecx
087a9e93 +0x1173:  add    %edx,%ecx
087a9e95 +0x1175:  mov    %ecx,-0x10(%ebp)
087a9e98 +0x1178:  mov    -0x78(%ebp),%ecx
087a9e9b +0x117b:  ror    $0x16,%eax
087a9e9e +0x117e:  lea    0x6d703ef3(%edx,%ecx,1),%edx
087a9ea5 +0x1185:  mov    %edx,-0xc(%ebp)
087a9ea8 +0x1188:  mov    %edi,%edx
087a9eaa +0x118a:  not    %edx
087a9eac +0x118c:  or     -0x10(%ebp),%edx
087a9eaf +0x118f:  xor    %eax,%edx
087a9eb1 +0x1191:  add    -0xc(%ebp),%edx
087a9eb4 +0x1194:  ror    $0x19,%edx
087a9eb7 +0x1197:  add    %esi,%edx
087a9eb9 +0x1199:  mov    %edx,-0xc(%ebp)
087a9ebc +0x119c:  mov    -0x54(%ebp),%edx
087a9ebf +0x119f:  ror    $0x16,%edi
087a9ec2 +0x11a2:  mov    -0x10(%ebp),%ecx
087a9ec5 +0x11a5:  lea    0x6d703ef3(%esi,%edx,1),%esi
087a9ecc +0x11ac:  mov    -0x10(%ebp),%edx
087a9ecf +0x11af:  ror    $0x16,%ecx
087a9ed2 +0x11b2:  not    %edx
087a9ed4 +0x11b4:  or     -0xc(%ebp),%edx
087a9ed7 +0x11b7:  xor    %edi,%edx
087a9ed9 +0x11b9:  add    %edx,%esi
087a9edb +0x11bb:  mov    -0x68(%ebp),%edx
087a9ede +0x11be:  ror    $0x1b,%esi
087a9ee1 +0x11c1:  add    %eax,%esi
087a9ee3 +0x11c3:  lea    0x7a6d76e9(%eax,%edx,1),%eax
087a9eea +0x11ca:  mov    -0xc(%ebp),%edx
087a9eed +0x11cd:  mov    %eax,-0x10(%ebp)
087a9ef0 +0x11d0:  mov    -0xc(%ebp),%eax
087a9ef3 +0x11d3:  ror    $0x16,%edx
087a9ef6 +0x11d6:  xor    %ecx,%eax
087a9ef8 +0x11d8:  and    %esi,%eax
087a9efa +0x11da:  xor    %ecx,%eax
087a9efc +0x11dc:  add    -0x10(%ebp),%eax
087a9eff +0x11df:  ror    $0x11,%eax
087a9f02 +0x11e2:  add    %edi,%eax
087a9f04 +0x11e4:  mov    %eax,-0x10(%ebp)
087a9f07 +0x11e7:  mov    -0x70(%ebp),%eax
087a9f0a +0x11ea:  lea    0x7a6d76e9(%edi,%eax,1),%edi
087a9f11 +0x11f1:  mov    -0x78(%ebp),%eax
087a9f14 +0x11f4:  mov    %edi,-0xc(%ebp)
087a9f17 +0x11f7:  mov    %esi,%edi
087a9f19 +0x11f9:  xor    %edx,%edi
087a9f1b +0x11fb:  and    -0x10(%ebp),%edi
087a9f1e +0x11fe:  ror    $0x16,%esi
087a9f21 +0x1201:  xor    %edx,%edi
087a9f23 +0x1203:  add    -0xc(%ebp),%edi
087a9f26 +0x1206:  ror    $0x1b,%edi
087a9f29 +0x1209:  add    %ecx,%edi
087a9f2b +0x120b:  mov    %edi,-0xc(%ebp)
087a9f2e +0x120e:  lea    0x7a6d76e9(%ecx,%eax,1),%edi
087a9f35 +0x1215:  mov    -0x10(%ebp),%ecx
087a9f38 +0x1218:  mov    -0x10(%ebp),%eax
087a9f3b +0x121b:  xor    %esi,%ecx
087a9f3d +0x121d:  and    -0xc(%ebp),%ecx
087a9f40 +0x1220:  ror    $0x16,%eax
087a9f43 +0x1223:  xor    %esi,%ecx
087a9f45 +0x1225:  lea    (%edi,%ecx,1),%ecx
087a9f48 +0x1228:  mov    -0x84(%ebp),%edi
087a9f4e +0x122e:  ror    $0x18,%ecx
087a9f51 +0x1231:  add    %edx,%ecx
087a9f53 +0x1233:  lea    0x7a6d76e9(%edx,%edi,1),%edx
087a9f5a +0x123a:  mov    -0xc(%ebp),%edi
087a9f5d +0x123d:  mov    %edx,-0x10(%ebp)
087a9f60 +0x1240:  mov    -0xc(%ebp),%edx
087a9f63 +0x1243:  xor    %eax,%edx
087a9f65 +0x1245:  and    %ecx,%edx
087a9f67 +0x1247:  xor    %eax,%edx
087a9f69 +0x1249:  add    -0x10(%ebp),%edx
087a9f6c +0x124c:  ror    $0x15,%edx
087a9f6f +0x124f:  add    %esi,%edx
087a9f71 +0x1251:  mov    %edx,-0x14(%ebp)
087a9f74 +0x1254:  mov    -0x7c(%ebp),%edx
087a9f77 +0x1257:  ror    $0x16,%edi
087a9f7a +0x125a:  lea    0x7a6d76e9(%esi,%edx,1),%esi
087a9f81 +0x1261:  mov    -0x5c(%ebp),%edx
087a9f84 +0x1264:  mov    %esi,-0xc(%ebp)
087a9f87 +0x1267:  mov    %ecx,%esi
087a9f89 +0x1269:  xor    %edi,%esi
087a9f8b +0x126b:  and    -0x14(%ebp),%esi
087a9f8e +0x126e:  ror    $0x16,%ecx
087a9f91 +0x1271:  xor    %edi,%esi
087a9f93 +0x1273:  add    -0xc(%ebp),%esi
087a9f96 +0x1276:  ror    $0x12,%esi
087a9f99 +0x1279:  add    %eax,%esi
087a9f9b +0x127b:  mov    %esi,-0xc(%ebp)
087a9f9e +0x127e:  lea    0x7a6d76e9(%eax,%edx,1),%esi
087a9fa5 +0x1285:  mov    -0x14(%ebp),%eax
087a9fa8 +0x1288:  xor    %ecx,%eax
087a9faa +0x128a:  and    -0xc(%ebp),%eax
087a9fad +0x128d:  xor    %ecx,%eax
087a9faf +0x128f:  lea    (%esi,%eax,1),%eax
087a9fb2 +0x1292:  ror    $0x12,%eax
087a9fb5 +0x1295:  add    %edi,%eax
087a9fb7 +0x1297:  mov    %eax,-0x10(%ebp)
087a9fba +0x129a:  mov    -0x4c(%ebp),%esi
087a9fbd +0x129d:  mov    -0x14(%ebp),%edx
087a9fc0 +0x12a0:  lea    0x7a6d76e9(%edi,%esi,1),%edi
087a9fc7 +0x12a7:  mov    -0xc(%ebp),%esi
087a9fca +0x12aa:  ror    $0x16,%edx
087a9fcd +0x12ad:  xor    %edx,%esi
087a9fcf +0x12af:  and    %eax,%esi
087a9fd1 +0x12b1:  mov    -0x88(%ebp),%eax
087a9fd7 +0x12b7:  xor    %edx,%esi
087a9fd9 +0x12b9:  add    %esi,%edi
087a9fdb +0x12bb:  mov    -0xc(%ebp),%esi
087a9fde +0x12be:  ror    $0x1a,%edi
087a9fe1 +0x12c1:  add    %ecx,%edi
087a9fe3 +0x12c3:  lea    0x7a6d76e9(%ecx,%eax,1),%ecx
087a9fea +0x12ca:  mov    -0x10(%ebp),%eax
087a9fed +0x12cd:  mov    %ecx,-0xc(%ebp)
087a9ff0 +0x12d0:  mov    -0x10(%ebp),%ecx
087a9ff3 +0x12d3:  ror    $0x16,%esi
087a9ff6 +0x12d6:  ror    $0x16,%eax
087a9ff9 +0x12d9:  xor    %esi,%ecx
087a9ffb +0x12db:  and    %edi,%ecx
087a9ffd +0x12dd:  xor    %esi,%ecx
087a9fff +0x12df:  add    -0xc(%ebp),%ecx
087aa002 +0x12e2:  ror    $0x12,%ecx
087aa005 +0x12e5:  add    %edx,%ecx
087aa007 +0x12e7:  mov    %ecx,-0xc(%ebp)
087aa00a +0x12ea:  mov    -0x74(%ebp),%ecx
087aa00d +0x12ed:  lea    0x7a6d76e9(%edx,%ecx,1),%edx
087aa014 +0x12f4:  mov    -0xc(%ebp),%ecx
087aa017 +0x12f7:  mov    %edx,-0x10(%ebp)
087aa01a +0x12fa:  mov    %edi,%edx
087aa01c +0x12fc:  xor    %eax,%edx
087aa01e +0x12fe:  and    -0xc(%ebp),%edx
087aa021 +0x1301:  xor    %eax,%edx
087aa023 +0x1303:  add    -0x10(%ebp),%edx
087aa026 +0x1306:  ror    $0x1a,%edx
087aa029 +0x1309:  add    %esi,%edx
087aa02b +0x130b:  mov    %edx,-0x10(%ebp)
087aa02e +0x130e:  mov    -0x58(%ebp),%edx
087aa031 +0x1311:  ror    $0x16,%edi
087aa034 +0x1314:  xor    %edi,%ecx
087aa036 +0x1316:  and    -0x10(%ebp),%ecx
087aa039 +0x1319:  lea    0x7a6d76e9(%esi,%edx,1),%esi
087aa040 +0x1320:  mov    -0x80(%ebp),%edx
087aa043 +0x1323:  xor    %edi,%ecx
087aa045 +0x1325:  add    %ecx,%esi
087aa047 +0x1327:  mov    -0xc(%ebp),%ecx
087aa04a +0x132a:  ror    $0x17,%esi
087aa04d +0x132d:  add    %eax,%esi
087aa04f +0x132f:  lea    0x7a6d76e9(%eax,%edx,1),%eax
087aa056 +0x1336:  mov    -0x10(%ebp),%edx
087aa059 +0x1339:  mov    %eax,-0xc(%ebp)
087aa05c +0x133c:  mov    -0x10(%ebp),%eax
087aa05f +0x133f:  ror    $0x16,%ecx
087aa062 +0x1342:  ror    $0x16,%edx
087aa065 +0x1345:  xor    %ecx,%eax
087aa067 +0x1347:  and    %esi,%eax
087aa069 +0x1349:  xor    %ecx,%eax
087aa06b +0x134b:  add    -0xc(%ebp),%eax
087aa06e +0x134e:  ror    $0x14,%eax
087aa071 +0x1351:  add    %edi,%eax
087aa073 +0x1353:  mov    %eax,-0xc(%ebp)
087aa076 +0x1356:  mov    -0x54(%ebp),%eax
087aa079 +0x1359:  lea    0x7a6d76e9(%edi,%eax,1),%edi
087aa080 +0x1360:  mov    %esi,%eax
087aa082 +0x1362:  xor    %edx,%eax
087aa084 +0x1364:  and    -0xc(%ebp),%eax
087aa087 +0x1367:  ror    $0x16,%esi
087aa08a +0x136a:  xor    %edx,%eax
087aa08c +0x136c:  add    %eax,%edi
087aa08e +0x136e:  mov    -0x64(%ebp),%eax
087aa091 +0x1371:  ror    $0x17,%edi
087aa094 +0x1374:  add    %ecx,%edi
087aa096 +0x1376:  lea    0x7a6d76e9(%ecx,%eax,1),%ecx
087aa09d +0x137d:  mov    -0xc(%ebp),%eax
087aa0a0 +0x1380:  xor    %esi,%eax
087aa0a2 +0x1382:  and    %edi,%eax
087aa0a4 +0x1384:  xor    %esi,%eax
087aa0a6 +0x1386:  add    %eax,%ecx
087aa0a8 +0x1388:  mov    -0xc(%ebp),%eax
087aa0ab +0x138b:  ror    $0x14,%ecx
087aa0ae +0x138e:  add    %edx,%ecx
087aa0b0 +0x1390:  mov    %ecx,-0x10(%ebp)
087aa0b3 +0x1393:  mov    -0x6c(%ebp),%ecx
087aa0b6 +0x1396:  ror    $0x16,%eax
087aa0b9 +0x1399:  lea    0x7a6d76e9(%edx,%ecx,1),%edx
087aa0c0 +0x13a0:  mov    %edx,-0xc(%ebp)
087aa0c3 +0x13a3:  mov    %edi,%edx
087aa0c5 +0x13a5:  xor    %eax,%edx
087aa0c7 +0x13a7:  and    -0x10(%ebp),%edx
087aa0ca +0x13aa:  xor    %eax,%edx
087aa0cc +0x13ac:  add    -0xc(%ebp),%edx
087aa0cf +0x13af:  ror    $0x16,%edi
087aa0d2 +0x13b2:  ror    $0x1b,%edx
087aa0d5 +0x13b5:  add    %esi,%edx
087aa0d7 +0x13b7:  mov    %edx,-0xc(%ebp)
087aa0da +0x13ba:  mov    -0x60(%ebp),%edx
087aa0dd +0x13bd:  mov    -0x10(%ebp),%ecx
087aa0e0 +0x13c0:  lea    0x7a6d76e9(%esi,%edx,1),%esi
087aa0e7 +0x13c7:  mov    -0x10(%ebp),%edx
087aa0ea +0x13ca:  ror    $0x16,%ecx
087aa0ed +0x13cd:  xor    %edi,%edx
087aa0ef +0x13cf:  and    -0xc(%ebp),%edx
087aa0f2 +0x13d2:  xor    %edi,%edx
087aa0f4 +0x13d4:  add    %edx,%esi
087aa0f6 +0x13d6:  mov    -0x50(%ebp),%edx
087aa0f9 +0x13d9:  ror    $0x11,%esi
087aa0fc +0x13dc:  add    %eax,%esi
087aa0fe +0x13de:  lea    0x7a6d76e9(%eax,%edx,1),%eax
087aa105 +0x13e5:  mov    -0xc(%ebp),%edx
087aa108 +0x13e8:  mov    %eax,-0x10(%ebp)
087aa10b +0x13eb:  mov    -0xc(%ebp),%eax
087aa10e +0x13ee:  ror    $0x16,%edx
087aa111 +0x13f1:  xor    %ecx,%eax
087aa113 +0x13f3:  and    %esi,%eax
087aa115 +0x13f5:  xor    %ecx,%eax
087aa117 +0x13f7:  add    -0x10(%ebp),%eax
087aa11a +0x13fa:  ror    $0x18,%eax
087aa11d +0x13fd:  add    %edi,%eax
087aa11f +0x13ff:  add    -0x58(%ebp),%edi
087aa122 +0x1402:  mov    %edi,-0x14(%ebp)
087aa125 +0x1405:  mov    %esi,%edi
087aa127 +0x1407:  xor    %edx,%edi
087aa129 +0x1409:  xor    %eax,%edi
087aa12b +0x140b:  add    -0x14(%ebp),%edi
087aa12e +0x140e:  ror    $0x16,%esi
087aa131 +0x1411:  ror    $0x18,%edi
087aa134 +0x1414:  add    %ecx,%edi
087aa136 +0x1416:  mov    %edi,-0x14(%ebp)
087aa139 +0x1419:  mov    %eax,%edi
087aa13b +0x141b:  add    -0x4c(%ebp),%ecx
087aa13e +0x141e:  xor    %esi,%edi
087aa140 +0x1420:  xor    -0x14(%ebp),%edi
087aa143 +0x1423:  ror    $0x16,%eax
087aa146 +0x1426:  add    %edi,%ecx
087aa148 +0x1428:  mov    -0x14(%ebp),%edi
087aa14b +0x142b:  ror    $0x1b,%ecx
087aa14e +0x142e:  add    %edx,%ecx
087aa150 +0x1430:  add    -0x60(%ebp),%edx
087aa153 +0x1433:  xor    %eax,%edi
087aa155 +0x1435:  xor    %ecx,%edi
087aa157 +0x1437:  add    %edi,%edx
087aa159 +0x1439:  mov    -0x14(%ebp),%edi
087aa15c +0x143c:  ror    $0x14,%edx
087aa15f +0x143f:  add    %esi,%edx
087aa161 +0x1441:  add    -0x78(%ebp),%esi
087aa164 +0x1444:  ror    $0x16,%edi
087aa167 +0x1447:  mov    %edi,-0x14(%ebp)
087aa16a +0x144a:  xor    %ecx,%edi
087aa16c +0x144c:  xor    %edx,%edi
087aa16e +0x144e:  add    %edi,%esi
087aa170 +0x1450:  mov    %edx,%edi
087aa172 +0x1452:  ror    $0x17,%esi
087aa175 +0x1455:  add    %eax,%esi
087aa177 +0x1457:  ror    $0x16,%ecx
087aa17a +0x145a:  add    -0x84(%ebp),%eax
087aa180 +0x1460:  xor    %ecx,%edi
087aa182 +0x1462:  xor    %esi,%edi
087aa184 +0x1464:  ror    $0x16,%edx
087aa187 +0x1467:  add    %edi,%eax
087aa189 +0x1469:  mov    -0x14(%ebp),%edi
087aa18c +0x146c:  add    -0x74(%ebp),%edi
087aa18f +0x146f:  ror    $0x14,%eax
087aa192 +0x1472:  add    -0x14(%ebp),%eax
087aa195 +0x1475:  mov    %edi,-0x10(%ebp)
087aa198 +0x1478:  mov    %esi,%edi
087aa19a +0x147a:  xor    %edx,%edi
087aa19c +0x147c:  xor    %eax,%edi
087aa19e +0x147e:  add    -0x10(%ebp),%edi
087aa1a1 +0x1481:  ror    $0x16,%esi
087aa1a4 +0x1484:  ror    $0x1b,%edi
087aa1a7 +0x1487:  add    %ecx,%edi
087aa1a9 +0x1489:  mov    %edi,-0x10(%ebp)
087aa1ac +0x148c:  mov    %eax,%edi
087aa1ae +0x148e:  add    -0x68(%ebp),%ecx
087aa1b1 +0x1491:  xor    %esi,%edi
087aa1b3 +0x1493:  xor    -0x10(%ebp),%edi
087aa1b6 +0x1496:  add    %edi,%ecx
087aa1b8 +0x1498:  mov    -0x10(%ebp),%edi
087aa1bb +0x149b:  ror    $0x12,%ecx
087aa1be +0x149e:  add    %edx,%ecx
087aa1c0 +0x14a0:  ror    $0x16,%eax
087aa1c3 +0x14a3:  add    -0x6c(%ebp),%edx
087aa1c6 +0x14a6:  xor    %eax,%edi
087aa1c8 +0x14a8:  xor    %ecx,%edi
087aa1ca +0x14aa:  add    %edi,%edx
087aa1cc +0x14ac:  mov    -0x10(%ebp),%edi
087aa1cf +0x14af:  ror    $0x1a,%edx
087aa1d2 +0x14b2:  add    %esi,%edx
087aa1d4 +0x14b4:  add    -0x70(%ebp),%esi
087aa1d7 +0x14b7:  ror    $0x16,%edi
087aa1da +0x14ba:  mov    %edi,-0x10(%ebp)
087aa1dd +0x14bd:  xor    %ecx,%edi
087aa1df +0x14bf:  xor    %edx,%edi
087aa1e1 +0x14c1:  add    %edi,%esi
087aa1e3 +0x14c3:  mov    %edx,%edi
087aa1e5 +0x14c5:  ror    $0x18,%esi
087aa1e8 +0x14c8:  add    %eax,%esi
087aa1ea +0x14ca:  ror    $0x16,%ecx
087aa1ed +0x14cd:  add    -0x80(%ebp),%eax
087aa1f0 +0x14d0:  xor    %ecx,%edi
087aa1f2 +0x14d2:  xor    %esi,%edi
087aa1f4 +0x14d4:  ror    $0x16,%edx
087aa1f7 +0x14d7:  add    %edi,%eax
087aa1f9 +0x14d9:  mov    -0x10(%ebp),%edi
087aa1fc +0x14dc:  add    -0x54(%ebp),%edi
087aa1ff +0x14df:  ror    $0x13,%eax
087aa202 +0x14e2:  add    -0x10(%ebp),%eax
087aa205 +0x14e5:  mov    %edi,-0x10(%ebp)
087aa208 +0x14e8:  mov    %esi,%edi
087aa20a +0x14ea:  xor    %edx,%edi
087aa20c +0x14ec:  xor    %eax,%edi
087aa20e +0x14ee:  add    -0x10(%ebp),%edi
087aa211 +0x14f1:  ror    $0x16,%esi
087aa214 +0x14f4:  ror    $0x1a,%edi
087aa217 +0x14f7:  add    %ecx,%edi
087aa219 +0x14f9:  mov    %edi,-0x10(%ebp)
087aa21c +0x14fc:  mov    %eax,%edi
087aa21e +0x14fe:  add    -0x50(%ebp),%ecx
087aa221 +0x1501:  xor    %esi,%edi
087aa223 +0x1503:  xor    -0x10(%ebp),%edi
087aa226 +0x1506:  add    %edi,%ecx
087aa228 +0x1508:  mov    -0x10(%ebp),%edi
087aa22b +0x150b:  ror    $0x1b,%ecx
087aa22e +0x150e:  add    %edx,%ecx
087aa230 +0x1510:  ror    $0x16,%eax
087aa233 +0x1513:  add    -0x88(%ebp),%edx
087aa239 +0x1519:  xor    %eax,%edi
087aa23b +0x151b:  xor    %ecx,%edi
087aa23d +0x151d:  add    %edi,%edx
087aa23f +0x151f:  mov    -0x10(%ebp),%edi
087aa242 +0x1522:  ror    $0x11,%edx
087aa245 +0x1525:  add    %esi,%edx
087aa247 +0x1527:  add    -0x7c(%ebp),%esi
087aa24a +0x152a:  ror    $0x16,%edi
087aa24d +0x152d:  mov    %edi,-0x10(%ebp)
087aa250 +0x1530:  xor    %ecx,%edi
087aa252 +0x1532:  xor    %edx,%edi
087aa254 +0x1534:  add    %edi,%esi
087aa256 +0x1536:  mov    %edx,%edi
087aa258 +0x1538:  ror    $0x13,%esi
087aa25b +0x153b:  add    %eax,%esi
087aa25d +0x153d:  ror    $0x16,%ecx
087aa260 +0x1540:  add    -0x64(%ebp),%eax
087aa263 +0x1543:  xor    %ecx,%edi
087aa265 +0x1545:  xor    %esi,%edi
087aa267 +0x1547:  ror    $0x16,%edx
087aa26a +0x154a:  add    %edi,%eax
087aa26c +0x154c:  mov    -0x2c(%ebp),%edi
087aa26f +0x154f:  ror    $0x15,%eax
087aa272 +0x1552:  add    -0x10(%ebp),%eax
087aa275 +0x1555:  ror    $0x16,%edi
087aa278 +0x1558:  mov    %eax,-0x14(%ebp)
087aa27b +0x155b:  mov    -0x10(%ebp),%eax
087aa27e +0x155e:  add    -0x5c(%ebp),%eax
087aa281 +0x1561:  mov    %eax,-0x10(%ebp)
087aa284 +0x1564:  mov    -0x44(%ebp),%eax
087aa287 +0x1567:  add    %edx,%eax
087aa289 +0x1569:  xor    %esi,%edx
087aa28b +0x156b:  add    %edi,%eax
087aa28d +0x156d:  mov    0x8(%ebp),%edi
087aa290 +0x1570:  mov    %eax,0x14(%edi)
087aa293 +0x1573:  mov    0x1c(%edi),%eax
087aa296 +0x1576:  add    %ecx,%eax
087aa298 +0x1578:  add    -0x30(%ebp),%eax
087aa29b +0x157b:  mov    %eax,0x18(%edi)
087aa29e +0x157e:  mov    -0x28(%ebp),%eax
087aa2a1 +0x1581:  add    0x20(%edi),%eax
087aa2a4 +0x1584:  add    %eax,%ecx
087aa2a6 +0x1586:  mov    -0x14(%ebp),%eax
087aa2a9 +0x1589:  xor    -0x14(%ebp),%edx
087aa2ac +0x158c:  add    -0x10(%ebp),%edx
087aa2af +0x158f:  ror    $0x16,%esi
087aa2b2 +0x1592:  ror    $0x15,%edx
087aa2b5 +0x1595:  add    %edx,%ecx
087aa2b7 +0x1597:  mov    0x8(%ebp),%edx
087aa2ba +0x159a:  mov    %ecx,0x1c(%edi)
087aa2bd +0x159d:  mov    -0x28(%ebp),%ecx
087aa2c0 +0x15a0:  add    0x10(%edi),%ecx
087aa2c3 +0x15a3:  mov    -0x30(%ebp),%edi
087aa2c6 +0x15a6:  lea    (%ecx,%eax,1),%eax
087aa2c9 +0x15a9:  not    %edi
087aa2cb +0x15ab:  or     -0x2c(%ebp),%edi
087aa2ce +0x15ae:  xor    -0x34(%ebp),%edi
087aa2d1 +0x15b1:  add    -0x38(%ebp),%edi
087aa2d4 +0x15b4:  ror    $0x1a,%edi
087aa2d7 +0x15b7:  add    %edi,%eax
087aa2d9 +0x15b9:  mov    %eax,0x20(%edx)
087aa2dc +0x15bc:  mov    -0x24(%ebp),%eax
087aa2df +0x15bf:  lea    (%esi,%eax,1),%eax
087aa2e2 +0x15c2:  add    -0x34(%ebp),%eax
087aa2e5 +0x15c5:  mov    %eax,0x10(%edx)
087aa2e8 +0x15c8:  add    $0x88,%esp
087aa2ee +0x15ce:  pop    %esi
087aa2ef +0x15cf:  pop    %edi
087aa2f0 +0x15d0:  pop    %ebp
087aa2f1 +0x15d1:  ret
087aa2f2 +0x15d2:  lea    0x0(%esi,%eiz,1),%esi
087aa2f9 +0x15d9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RIPEMD160::Transform @ 0x87a8d20

/* TaoCrypt::RIPEMD160::Transform() */

void __thiscall TaoCrypt::RIPEMD160::Transform(RIPEMD160 *this)

{
  uint uVar1;
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
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  
  uVar24 = *(uint *)(this + 0x18);
  uVar1 = *(uint *)(this + 0x14);
  uVar22 = *(uint *)(this + 0x1c);
  iVar2 = *(int *)(this + 0x30);
  iVar3 = *(int *)(this + 0x20);
  uVar20 = *(int *)(this + 0x10) + iVar2 + (uVar24 ^ uVar1 ^ uVar22);
  uVar23 = uVar24 >> 0x16 | uVar24 << 10;
  uVar21 = (uVar20 >> 0x15 | uVar20 * 0x800) + iVar3;
  iVar4 = *(int *)(this + 0x34);
  uVar20 = iVar4 + iVar3 + (uVar23 ^ uVar1 ^ uVar21);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar22;
  uVar27 = uVar1 >> 0x16 | uVar1 << 10;
  iVar5 = *(int *)(this + 0x38);
  uVar25 = uVar22 + iVar5 + (uVar27 ^ uVar21 ^ uVar20);
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  iVar6 = *(int *)(this + 0x3c);
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar26 = (uVar25 >> 0x11 | uVar25 * 0x8000) + uVar23;
  iVar7 = *(int *)(this + 0x40);
  uVar20 = uVar23 + iVar6 + (uVar20 ^ uVar21 ^ uVar26);
  uVar25 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar27;
  uVar20 = (uVar19 ^ uVar26 ^ uVar25) + uVar27 + iVar7;
  uVar28 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar21;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  iVar8 = *(int *)(this + 0x44);
  uVar20 = (uVar25 ^ uVar26 ^ uVar28) + uVar21 + iVar8;
  uVar21 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar19;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  iVar9 = *(int *)(this + 0x48);
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar20 = uVar19 + iVar9 + (uVar28 ^ uVar25 ^ uVar21);
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar26;
  iVar10 = *(int *)(this + 0x4c);
  uVar19 = uVar26 + iVar10 + (uVar21 ^ uVar29 ^ uVar20);
  uVar26 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar25;
  uVar19 = uVar21 >> 0x16 | uVar21 * 0x400;
  iVar11 = *(int *)(this + 0x50);
  uVar21 = uVar25 + iVar11 + (uVar19 ^ uVar20 ^ uVar26);
  uVar25 = (uVar21 >> 0x15 | uVar21 * 0x800) + uVar29;
  uVar21 = uVar20 >> 0x16 | uVar20 * 0x400;
  iVar12 = *(int *)(this + 0x54);
  uVar20 = uVar29 + iVar12 + (uVar26 ^ uVar21 ^ uVar25);
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar19;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  iVar13 = *(int *)(this + 0x58);
  uVar19 = (uVar25 ^ uVar26 ^ uVar20) + uVar19 + iVar13;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar28 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar21;
  iVar14 = *(int *)(this + 0x5c);
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar21 + iVar14 + (uVar20 ^ uVar25 ^ uVar28);
  uVar20 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar26;
  iVar15 = *(int *)(this + 0x60);
  uVar21 = uVar26 + iVar15 + (uVar28 ^ uVar19 ^ uVar20);
  uVar26 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar25;
  uVar28 = uVar28 >> 0x16 | uVar28 * 0x400;
  iVar16 = *(int *)(this + 100);
  uVar21 = uVar25 + iVar16 + (uVar28 ^ uVar20 ^ uVar26);
  uVar25 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar19;
  uVar21 = uVar20 >> 0x16 | uVar20 * 0x400;
  iVar17 = *(int *)(this + 0x68);
  uVar20 = uVar19 + iVar17 + (uVar26 ^ uVar21 ^ uVar25);
  uVar19 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar28;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  iVar18 = *(int *)(this + 0x6c);
  uVar20 = (uVar25 ^ uVar26 ^ uVar19) + uVar28 + iVar18;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar21;
  uVar28 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = uVar21 + 0x5a827999 + iVar10 + ((uVar19 ^ uVar25) & uVar20 ^ uVar25);
  uVar19 = (uVar19 >> 0x19 | uVar19 * 0x80) + uVar26;
  uVar21 = uVar26 + 0x5a827999 + iVar7 + ((uVar20 ^ uVar28) & uVar19 ^ uVar28);
  uVar26 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar25;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((uVar19 ^ uVar20) & uVar26 ^ uVar20) + uVar25 + 0x5a827999 + iVar16;
  uVar19 = (uVar19 >> 0x18 | uVar19 * 0x100) + uVar28;
  uVar25 = uVar28 + 0x5a827999 + iVar4 + ((uVar26 ^ uVar21) & uVar19 ^ uVar21);
  uVar28 = (uVar25 >> 0x13 | uVar25 * 0x2000) + uVar20;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar20 = ((uVar19 ^ uVar26) & uVar28 ^ uVar26) + uVar20 + 0x5a827999 + iVar13;
  uVar20 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = ((uVar28 ^ uVar25) & uVar20 ^ uVar25) + uVar21 + 0x5a827999 + iVar9;
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar26;
  uVar20 = uVar26 + 0x5a827999 + iVar18 + ((uVar20 ^ uVar29) & uVar21 ^ uVar29);
  uVar26 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar25;
  uVar20 = ((uVar21 ^ uVar19) & uVar26 ^ uVar19) + uVar25 + 0x5a827999 + iVar6;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar29;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = ((uVar26 ^ uVar21) & uVar20 ^ uVar21) + uVar29 + 0x5a827999 + iVar15;
  uVar26 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar19;
  uVar25 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar19 + 0x5a827999 + iVar2 + ((uVar20 ^ uVar28) & uVar26 ^ uVar28);
  uVar19 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar21;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar21 + 0x5a827999 + iVar12 + ((uVar26 ^ uVar25) & uVar19 ^ uVar25);
  uVar21 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar28;
  uVar20 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((uVar19 ^ uVar29) & uVar21 ^ uVar29) + uVar28 + 0x5a827999 + iVar8;
  uVar26 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar25;
  uVar19 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar21 = ((uVar21 ^ uVar20) & uVar26 ^ uVar20) + uVar25 + 0x5a827999 + iVar5;
  uVar21 = (uVar21 >> 0x15 | uVar21 * 0x800) + uVar29;
  uVar25 = uVar29 + 0x5a827999 + iVar17 + ((uVar26 ^ uVar19) & uVar21 ^ uVar19);
  uVar28 = (uVar25 >> 0x19 | uVar25 * 0x80) + uVar20;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar21 ^ uVar26) & uVar28 ^ uVar26) + uVar20 + 0x5a827999 + iVar14;
  uVar25 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar19;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar19 = uVar19 + 0x5a827999 + iVar11 + ((uVar28 ^ uVar25) & uVar20 ^ uVar25);
  uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar26;
  uVar21 = uVar26 + 0x6ed9eba1 + iVar6 + ((~uVar20 | uVar19) ^ uVar29);
  uVar26 = (uVar21 >> 0x15 | uVar21 * 0x800) + uVar25;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((~uVar19 | uVar26) ^ uVar20) + uVar25 + 0x6ed9eba1 + iVar13;
  uVar19 = (uVar19 >> 0x13 | uVar19 * 0x2000) + uVar29;
  uVar25 = uVar29 + 0x6ed9eba1 + iVar17 + ((~uVar26 | uVar19) ^ uVar21);
  uVar28 = (uVar25 >> 0x1a | uVar25 * 0x40) + uVar20;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar20 = ((~uVar19 | uVar28) ^ uVar26) + uVar20 + 0x6ed9eba1 + iVar7;
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar21 = ((~uVar28 | uVar20) ^ uVar25) + uVar21 + 0x6ed9eba1 + iVar12;
  uVar21 = (uVar21 >> 0x12 | uVar21 * 0x4000) + uVar26;
  uVar20 = uVar26 + 0x6ed9eba1 + iVar18 + ((~uVar20 | uVar21) ^ uVar29);
  uVar26 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar25;
  uVar20 = ((~uVar21 | uVar26) ^ uVar19) + uVar25 + 0x6ed9eba1 + iVar11;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar25 = ((~uVar26 | uVar20) ^ uVar21) + uVar29 + 0x6ed9eba1 + iVar4;
  uVar28 = (uVar25 >> 0x11 | uVar25 * 0x8000) + uVar19;
  uVar25 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar26 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar19 + 0x6ed9eba1 + iVar5 + ((~uVar20 | uVar28) ^ uVar25);
  uVar19 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar20 = uVar21 + 0x6ed9eba1 + iVar10 + ((~uVar28 | uVar19) ^ uVar26);
  uVar21 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar25;
  uVar20 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((~uVar19 | uVar21) ^ uVar29) + uVar25 + 0x6ed9eba1 + iVar2;
  uVar28 = (uVar19 >> 0x13 | uVar19 * 0x2000) + uVar26;
  uVar25 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar19 = ((~uVar21 | uVar28) ^ uVar20) + uVar26 + 0x6ed9eba1 + iVar9;
  uVar21 = (uVar19 >> 0x1a | uVar19 * 0x40) + uVar29;
  uVar19 = uVar29 + 0x6ed9eba1 + iVar16 + ((~uVar28 | uVar21) ^ uVar25);
  uVar29 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar20;
  uVar28 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar20 = ((~uVar21 | uVar29) ^ uVar28) + uVar20 + 0x6ed9eba1 + iVar14;
  uVar19 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar25;
  uVar26 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar30 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar20 = uVar25 + 0x6ed9eba1 + iVar8 + ((~uVar29 | uVar19) ^ uVar26);
  uVar21 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar28;
  uVar20 = uVar28 + 0x6ed9eba1 + iVar15 + ((~uVar19 | uVar21) ^ uVar30);
  uVar20 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar26;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar28 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar19 = ((uVar20 ^ uVar21) & uVar25 ^ uVar21) + uVar26 + 0x8f1bbcdc + iVar4;
  uVar19 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar30;
  uVar21 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar30 + 0x8f1bbcdc + iVar12 + ((uVar19 ^ uVar20) & uVar28 ^ uVar20);
  uVar29 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar25;
  uVar20 = ((uVar29 ^ uVar19) & uVar21 ^ uVar19) + uVar25 + 0x8f1bbcdc + iVar14;
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar28;
  uVar25 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = uVar28 + 0x8f1bbcdc + iVar13 + ((uVar20 ^ uVar29) & uVar25 ^ uVar29);
  uVar26 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar21;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar21 + 0x8f1bbcdc + iVar2 + ((uVar26 ^ uVar20) & uVar29 ^ uVar20);
  uVar21 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar25;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar21 ^ uVar26) & uVar19 ^ uVar26) + uVar25 + 0x8f1bbcdc + iVar11;
  uVar25 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar29;
  uVar20 = uVar29 + 0x8f1bbcdc + iVar15 + ((uVar25 ^ uVar21) & uVar28 ^ uVar21);
  uVar26 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar19;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar20 = uVar19 + 0x8f1bbcdc + iVar7 + ((uVar26 ^ uVar25) & uVar21 ^ uVar25);
  uVar29 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar28;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = ((uVar29 ^ uVar26) & uVar25 ^ uVar26) + uVar28 + 0x8f1bbcdc + iVar16;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar19 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar21;
  uVar20 = uVar21 + 0x8f1bbcdc + iVar6 + ((uVar19 ^ uVar29) & uVar26 ^ uVar29);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar25;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = uVar25 + 0x8f1bbcdc + iVar10 + ((uVar20 ^ uVar19) & uVar29 ^ uVar19);
  uVar28 = (uVar19 >> 0x1b | uVar19 * 0x20) + uVar26;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar28 ^ uVar20) & uVar21 ^ uVar20) + uVar26 + 0x8f1bbcdc + iVar18;
  uVar26 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar29;
  uVar20 = uVar29 + 0x8f1bbcdc + iVar17 + ((uVar26 ^ uVar28) & uVar19 ^ uVar28);
  uVar25 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar21;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar21 + 0x8f1bbcdc + iVar8 + ((uVar25 ^ uVar26) & uVar29 ^ uVar26);
  uVar26 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar19;
  uVar20 = ((uVar26 ^ uVar25) & uVar28 ^ uVar25) + uVar19 + 0x8f1bbcdc + iVar9;
  uVar19 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar29;
  uVar21 = uVar29 + 0x8f1bbcdc + iVar5 + ((uVar20 ^ uVar26) & uVar19 ^ uVar26);
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar25 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar28;
  uVar21 = uVar28 + 0xa953fd4e + iVar7 + ((~uVar29 | uVar20) ^ uVar25);
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar19;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar19 = ((~uVar20 | uVar25) ^ uVar21) + uVar19 + 0xa953fd4e + iVar2;
  uVar19 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar29;
  uVar26 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar25 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar21 = uVar29 + 0xa953fd4e + iVar8 + ((~uVar26 | uVar21) ^ uVar19);
  uVar28 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar20;
  uVar21 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar20 = ((~uVar25 | uVar19) ^ uVar28) + uVar20 + 0xa953fd4e + iVar12;
  uVar20 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar26;
  uVar19 = ((~uVar21 | uVar28) ^ uVar20) + uVar26 + 0xa953fd4e + iVar10;
  uVar29 = uVar28 >> 0x16 | uVar28 * 0x400;
  uVar26 = (uVar19 >> 0x1a | uVar19 * 0x40) + uVar25;
  uVar19 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar25 + 0xa953fd4e + iVar15 + ((~uVar29 | uVar20) ^ uVar26);
  uVar25 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar21;
  uVar28 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar21 + 0xa953fd4e + iVar5 + ((~uVar19 | uVar26) ^ uVar25);
  uVar21 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar20 = ((~uVar28 | uVar25) ^ uVar21) + uVar29 + 0xa953fd4e + iVar13;
  uVar26 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar19;
  uVar25 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = ((~uVar25 | uVar21) ^ uVar26) + uVar19 + 0xa953fd4e + iVar17;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar19 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar28;
  uVar30 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar28 + 0xa953fd4e + iVar4 + ((~uVar21 | uVar26) ^ uVar19);
  uVar26 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar25;
  uVar20 = uVar19 >> 0x16 | uVar19 * 0x400;
  uVar19 = ((~uVar30 | uVar19) ^ uVar26) + uVar25 + 0xa953fd4e + iVar6;
  uVar25 = (uVar19 >> 0x13 | uVar19 * 0x2000) + uVar21;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar19 = uVar21 + 0xa953fd4e + iVar11 + ((~uVar20 | uVar26) ^ uVar25);
  uVar21 = (uVar19 >> 0x12 | uVar19 * 0x4000) + uVar30;
  uVar19 = uVar30 + 0xa953fd4e + iVar14 + ((~uVar29 | uVar25) ^ uVar21);
  uVar26 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar20;
  uVar28 = uVar25 >> 0x16 | uVar25 * 0x400;
  uVar20 = ((~uVar28 | uVar21) ^ uVar26) + uVar20 + 0xa953fd4e + iVar9;
  uVar19 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar29;
  uVar21 = uVar21 >> 0x16 | uVar21 * 0x400;
  uVar31 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar29 + 0xa953fd4e + iVar18 + ((~uVar21 | uVar26) ^ uVar19);
  uVar25 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar28;
  uVar20 = *(int *)(this + 0x10) + 0x50a28be6 + iVar8 + ((~uVar22 | uVar24) ^ uVar1);
  uVar29 = (uVar20 >> 0x18 | uVar20 * 0x100) + iVar3;
  uVar20 = iVar3 + 0x50a28be6 + iVar17 + ((~uVar23 | uVar1) ^ uVar29);
  uVar26 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar22;
  uVar20 = uVar22 + 0x50a28be6 + iVar10 + ((~uVar27 | uVar29) ^ uVar26);
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar30 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar23;
  uVar20 = uVar23 + 0x50a28be6 + iVar2 + ((~uVar29 | uVar26) ^ uVar30);
  uVar22 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar27;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar32 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar20 = ((~uVar26 | uVar30) ^ uVar22) + uVar27 + 0x50a28be6 + iVar12;
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar29 + 0x50a28be6 + iVar5 + ((~uVar32 | uVar22) ^ uVar20);
  uVar29 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar26;
  uVar22 = uVar26 + 0x50a28be6 + iVar14 + ((~uVar23 | uVar20) ^ uVar29);
  uVar26 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar32;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((~uVar22 | uVar29) ^ uVar26) + uVar32 + 0x50a28be6 + iVar7;
  uVar27 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar30 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar23;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar23 + 0x50a28be6 + iVar16 + ((~uVar27 | uVar26) ^ uVar30);
  uVar23 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar22;
  uVar20 = ((~uVar29 | uVar30) ^ uVar23) + uVar22 + 0x50a28be6 + iVar9;
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar27;
  uVar30 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar22 = ((~uVar30 | uVar23) ^ uVar20) + uVar27 + 0x50a28be6 + iVar18;
  uVar23 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar27 = (uVar22 >> 0x18 | uVar22 * 0x100) + uVar29;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar29 + 0x50a28be6 + iVar11 + ((~uVar23 | uVar20) ^ uVar27);
  uVar26 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar30;
  uVar20 = uVar30 + 0x50a28be6 + iVar4 + ((~uVar22 | uVar27) ^ uVar26);
  uVar30 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar23;
  uVar29 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar20 = ((~uVar29 | uVar26) ^ uVar30) + uVar23 + 0x50a28be6 + iVar13;
  uVar23 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar22;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar27 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar20 = uVar22 + 0x50a28be6 + iVar6 + ((~uVar26 | uVar30) ^ uVar23);
  uVar22 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar29;
  uVar20 = uVar29 + 0x50a28be6 + iVar15 + ((~uVar27 | uVar23) ^ uVar22);
  uVar20 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar26;
  uVar29 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = ((uVar20 ^ uVar22) & uVar29 ^ uVar22) + uVar26 + 0x5c4dd124 + iVar9;
  uVar26 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar27;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar27 + 0x5c4dd124 + iVar14 + ((uVar26 ^ uVar20) & uVar23 ^ uVar20);
  uVar30 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar29;
  uVar20 = uVar29 + 0x5c4dd124 + iVar6 + ((uVar30 ^ uVar26) & uVar22 ^ uVar26);
  uVar27 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar23;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar32 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar20 = ((uVar27 ^ uVar30) & uVar29 ^ uVar30) + uVar23 + 0x5c4dd124 + iVar10;
  uVar20 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar22;
  uVar22 = uVar22 + 0x5c4dd124 + iVar2 + ((uVar20 ^ uVar27) & uVar32 ^ uVar27);
  uVar22 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar29;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar29 + 0x5c4dd124 + iVar16 + ((uVar22 ^ uVar20) & uVar27 ^ uVar20);
  uVar23 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar32;
  uVar30 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar20 = ((uVar23 ^ uVar22) & uVar26 ^ uVar22) + uVar32 + 0x5c4dd124 + iVar8;
  uVar22 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar27;
  uVar20 = uVar27 + 0x5c4dd124 + iVar13 + ((uVar22 ^ uVar23) & uVar30 ^ uVar23);
  uVar27 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar26;
  uVar29 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar20 = uVar26 + 0x5c4dd124 + iVar17 + ((uVar27 ^ uVar22) & uVar29 ^ uVar22);
  uVar26 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar30;
  uVar20 = ((uVar26 ^ uVar27) & uVar23 ^ uVar27) + uVar30 + 0x5c4dd124 + iVar18;
  uVar22 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar29;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar20 = uVar29 + 0x5c4dd124 + iVar11 + ((uVar22 ^ uVar26) & uVar27 ^ uVar26);
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar23;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar26 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar23 + 0x5c4dd124 + iVar15 + ((uVar20 ^ uVar22) & uVar29 ^ uVar22);
  uVar22 = (uVar22 >> 0x19 | uVar22 * 0x80) + uVar27;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar22 ^ uVar20) & uVar26 ^ uVar20) + uVar27 + 0x5c4dd124 + iVar7;
  uVar20 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar29;
  uVar29 = uVar29 + 0x5c4dd124 + iVar12 + ((uVar20 ^ uVar22) & uVar23 ^ uVar22);
  uVar27 = (uVar29 >> 0x11 | uVar29 * 0x8000) + uVar26;
  uVar29 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar26 + 0x5c4dd124 + iVar4 + ((uVar27 ^ uVar20) & uVar29 ^ uVar20);
  uVar22 = (uVar22 >> 0x13 | uVar22 * 0x2000) + uVar23;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = ((uVar22 ^ uVar27) & uVar20 ^ uVar27) + uVar23 + 0x5c4dd124 + iVar5;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar29;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar29 + 0x6d703ef3 + iVar18 + ((~uVar22 | uVar26) ^ uVar32);
  uVar27 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar20;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((~uVar26 | uVar27) ^ uVar23) + uVar20 + 0x6d703ef3 + iVar8;
  uVar22 = (uVar20 >> 0x19 | uVar20 * 0x80) + uVar32;
  uVar30 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar20 = ((~uVar27 | uVar22) ^ uVar29) + uVar32 + 0x6d703ef3 + iVar4;
  uVar26 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar23;
  uVar20 = uVar23 + 0x6d703ef3 + iVar6 + ((~uVar22 | uVar26) ^ uVar30);
  uVar23 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar29;
  uVar20 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar27 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar22 = ((~uVar26 | uVar23) ^ uVar20) + uVar29 + 0x6d703ef3 + iVar10;
  uVar22 = (uVar22 >> 0x18 | uVar22 * 0x100) + uVar30;
  uVar26 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar23 = ((~uVar23 | uVar22) ^ uVar27) + uVar30 + 0x6d703ef3 + iVar17;
  uVar29 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar20;
  uVar20 = uVar20 + 0x6d703ef3 + iVar9 + ((~uVar22 | uVar29) ^ uVar26);
  uVar20 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar27;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar27 + 0x6d703ef3 + iVar12 + ((~uVar29 | uVar20) ^ uVar23);
  uVar27 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar26;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((~uVar20 | uVar27) ^ uVar29) + uVar26 + 0x6d703ef3 + iVar14;
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar23;
  uVar23 = ((~uVar27 | uVar20) ^ uVar22) + uVar23 + 0x6d703ef3 + iVar11;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = (uVar23 >> 0x13 | uVar23 * 0x2000) + uVar29;
  uVar23 = uVar29 + 0x6d703ef3 + iVar15 + ((~uVar20 | uVar26) ^ uVar32);
  uVar27 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar22;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((~uVar26 | uVar27) ^ uVar23) + uVar22 + 0x6d703ef3 + iVar5;
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar32;
  uVar30 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar22 = uVar32 + 0x6d703ef3 + iVar13 + ((~uVar27 | uVar20) ^ uVar29);
  uVar27 = (uVar22 >> 0x13 | uVar22 * 0x2000) + uVar23;
  uVar22 = uVar23 + 0x6d703ef3 + iVar2 + ((~uVar20 | uVar27) ^ uVar30);
  uVar22 = (uVar22 >> 0x13 | uVar22 * 0x2000) + uVar29;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = ((~uVar27 | uVar22) ^ uVar20) + uVar29 + 0x6d703ef3 + iVar7;
  uVar26 = (uVar23 >> 0x19 | uVar23 * 0x80) + uVar30;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar30 + 0x6d703ef3 + iVar16 + ((~uVar22 | uVar26) ^ uVar32);
  uVar22 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar20;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar26 ^ uVar23) & uVar22 ^ uVar23) + uVar20 + 0x7a6d76e9 + iVar11;
  uVar20 = (uVar20 >> 0x11 | uVar20 * 0x8000) + uVar32;
  uVar27 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = ((uVar22 ^ uVar29) & uVar20 ^ uVar29) + uVar32 + 0x7a6d76e9 + iVar9;
  uVar30 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar23 + 0x7a6d76e9 + iVar7 + ((uVar20 ^ uVar27) & uVar30 ^ uVar27);
  uVar20 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar29;
  uVar23 = ((uVar30 ^ uVar22) & uVar20 ^ uVar22) + uVar29 + 0x7a6d76e9 + iVar4;
  uVar26 = (uVar23 >> 0x15 | uVar23 * 0x800) + uVar27;
  uVar30 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar20 ^ uVar30) & uVar26 ^ uVar30) + uVar27 + 0x7a6d76e9 + iVar6;
  uVar29 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar22;
  uVar20 = uVar22 + 0x7a6d76e9 + iVar14 + ((uVar26 ^ uVar23) & uVar29 ^ uVar23);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar30;
  uVar26 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar22 = uVar30 + 0x7a6d76e9 + iVar18 + ((uVar29 ^ uVar26) & uVar20 ^ uVar26);
  uVar27 = (uVar22 >> 0x1a | uVar22 * 0x40) + uVar23;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = ((uVar20 ^ uVar29) & uVar27 ^ uVar29) + uVar23 + 0x7a6d76e9 + iVar2;
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar26;
  uVar23 = ((uVar27 ^ uVar22) & uVar20 ^ uVar22) + uVar26 + 0x7a6d76e9 + iVar8;
  uVar26 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar29;
  uVar32 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar23 = uVar29 + 0x7a6d76e9 + iVar15 + ((uVar20 ^ uVar32) & uVar26 ^ uVar32);
  uVar27 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar22;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar26 ^ uVar23) & uVar27 ^ uVar23) + uVar22 + 0x7a6d76e9 + iVar5;
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar32;
  uVar30 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar22 = uVar32 + 0x7a6d76e9 + iVar16 + ((uVar27 ^ uVar29) & uVar20 ^ uVar29);
  uVar26 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar23;
  uVar22 = uVar23 + 0x7a6d76e9 + iVar12 + ((uVar20 ^ uVar30) & uVar26 ^ uVar30);
  uVar22 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar29;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = ((uVar26 ^ uVar20) & uVar22 ^ uVar20) + uVar29 + 0x7a6d76e9 + iVar10;
  uVar27 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar26 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar30;
  uVar23 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar22 = uVar30 + 0x7a6d76e9 + iVar13 + ((uVar22 ^ uVar27) & uVar26 ^ uVar27);
  uVar22 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar20;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = ((uVar26 ^ uVar23) & uVar22 ^ uVar23) + uVar20 + 0x7a6d76e9 + iVar17;
  uVar20 = (uVar20 >> 0x18 | uVar20 * 0x100) + uVar27;
  uVar26 = (uVar22 ^ uVar29 ^ uVar20) + uVar27 + iVar15;
  uVar27 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar30 = (uVar26 >> 0x18 | uVar26 * 0x100) + uVar23;
  uVar22 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar20 = uVar23 + iVar18 + (uVar20 ^ uVar27 ^ uVar30);
  uVar20 = (uVar20 >> 0x1b | uVar20 * 0x20) + uVar29;
  uVar23 = uVar29 + iVar13 + (uVar30 ^ uVar22 ^ uVar20);
  uVar26 = (uVar23 >> 0x14 | uVar23 * 0x1000) + uVar27;
  uVar30 = uVar30 >> 0x16 | uVar30 * 0x400;
  uVar23 = uVar27 + iVar7 + (uVar30 ^ uVar20 ^ uVar26);
  uVar27 = (uVar23 >> 0x17 | uVar23 * 0x200) + uVar22;
  uVar23 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar29 = uVar26 >> 0x16 | uVar26 * 0x400;
  uVar20 = uVar22 + iVar4 + (uVar26 ^ uVar23 ^ uVar27);
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar30;
  uVar22 = (uVar27 ^ uVar29 ^ uVar20) + uVar30 + iVar8;
  uVar26 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar27 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar22 = uVar23 + iVar11 + (uVar20 ^ uVar26 ^ uVar27);
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar29;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = uVar29 + iVar10 + (uVar27 ^ uVar20 ^ uVar22);
  uVar23 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar26;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = uVar26 + iVar9 + (uVar27 ^ uVar22 ^ uVar23);
  uVar29 = (uVar26 >> 0x18 | uVar26 * 0x100) + uVar20;
  uVar22 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar26 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar20 = uVar20 + iVar5 + (uVar23 ^ uVar22 ^ uVar29);
  uVar20 = (uVar20 >> 0x13 | uVar20 * 0x2000) + uVar27;
  uVar23 = (uVar29 ^ uVar26 ^ uVar20) + uVar27 + iVar16;
  uVar29 = uVar29 >> 0x16 | uVar29 * 0x400;
  uVar27 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar22;
  uVar22 = uVar22 + iVar17 + (uVar20 ^ uVar29 ^ uVar27);
  uVar22 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar26;
  uVar20 = uVar20 >> 0x16 | uVar20 * 0x400;
  uVar23 = uVar26 + iVar2 + (uVar27 ^ uVar20 ^ uVar22);
  uVar23 = (uVar23 >> 0x11 | uVar23 * 0x8000) + uVar29;
  uVar27 = uVar27 >> 0x16 | uVar27 * 0x400;
  uVar26 = uVar29 + iVar6 + (uVar27 ^ uVar22 ^ uVar23);
  uVar29 = (uVar26 >> 0x13 | uVar26 * 0x2000) + uVar20;
  uVar22 = uVar22 >> 0x16 | uVar22 * 0x400;
  uVar26 = uVar23 >> 0x16 | uVar23 * 0x400;
  uVar20 = uVar20 + iVar12 + (uVar23 ^ uVar22 ^ uVar29);
  uVar20 = (uVar20 >> 0x15 | uVar20 * 0x800) + uVar27;
  *(uint *)(this + 0x14) = uVar24 + uVar26 + (uVar19 >> 0x16 | uVar19 * 0x400);
  *(uint *)(this + 0x18) = *(int *)(this + 0x1c) + uVar22 + uVar31;
  uVar24 = (uVar26 ^ uVar29 ^ uVar20) + uVar27 + iVar14;
  *(uint *)(this + 0x1c) =
       uVar22 + uVar21 + *(int *)(this + 0x20) + (uVar24 >> 0x15 | uVar24 * 0x800);
  uVar24 = ((~uVar31 | uVar19) ^ uVar25) + uVar28 + 0xa953fd4e + iVar16;
  *(uint *)(this + 0x20) =
       uVar21 + *(int *)(this + 0x10) + uVar20 + (uVar24 >> 0x1a | uVar24 * 0x40);
  *(uint *)(this + 0x10) = (uVar29 >> 0x16 | uVar29 * 0x400) + uVar1 + uVar25;
  return;
}
```
