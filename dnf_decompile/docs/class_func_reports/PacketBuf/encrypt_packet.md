# encrypt_packet

`_ZN9PacketBuf14encrypt_packetEv`

`PacketBuf::encrypt_packet()`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d86a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d86a  _ZN9PacketBuf14encrypt_packetEv
#           PacketBuf::encrypt_packet()
# range [0x0858d86a, 0x0858da27]
0858d86a +0x000:  push   %ebp
0858d86b +0x001:  mov    %esp,%ebp
0858d86d +0x003:  push   %edi
0858d86e +0x004:  push   %esi
0858d86f +0x005:  push   %ebx
0858d870 +0x006:  sub    $&_ZL14gUnicodeBuffer+0xce40,%esp
0858d876 +0x00c:  mov    0x8(%ebp),%eax
0858d879 +0x00f:  mov    0x14(%eax),%eax
0858d87c +0x012:  movzbl (%eax),%eax
0858d87f +0x015:  test   %al,%al
0858d881 +0x017:  jne    0858d899 <+0x2f>
0858d883 +0x019:  mov    0x8(%ebp),%eax
0858d886 +0x01c:  mov    0x14(%eax),%eax
0858d889 +0x01f:  add    $0x1,%eax
0858d88c +0x022:  movzwl (%eax),%eax
0858d88f +0x025:  cmp    $0x1,%ax
0858d893 +0x029:  je     0858d9eb <+0x181>
0858d899 +0x02f:  movb   $0x0,-0x1d(%ebp)
0858d89d +0x033:  lea    -&_ZL14gUnicodeBuffer+0xce18(%ebp),%eax
0858d8a3 +0x039:  mov    %eax,-0x1c(%ebp)
0858d8a6 +0x03c:  movl   $&_ZL14gUnicodeBuffer+0xcdec,-0x24(%ebp)
0858d8ad +0x043:  mov    0x8(%ebp),%eax
0858d8b0 +0x046:  mov    0x8(%eax),%eax
0858d8b3 +0x049:  sub    $0xf,%eax
0858d8b6 +0x04c:  mov    %eax,-0x28(%ebp)
0858d8b9 +0x04f:  mov    0x8(%ebp),%eax
0858d8bc +0x052:  mov    0x14(%eax),%eax
0858d8bf +0x055:  add    $0x1,%eax
0858d8c2 +0x058:  movzwl (%eax),%eax
0858d8c5 +0x05b:  movzwl %ax,%ebx
0858d8c8 +0x05e:  call   082a713a <_GLOBAL__I__ZN4CLog5this_E+0x3561>  ; global constructors keyed to CLog::this_+0x3561
0858d8cd +0x063:  lea    -0x28(%ebp),%edx
0858d8d0 +0x066:  mov    %edx,0x8(%esp)
0858d8d4 +0x06a:  mov    %ebx,0x4(%esp)
0858d8d8 +0x06e:  mov    %eax,(%esp)
0858d8db +0x071:  call   080973c0 <_ZNK6Cipher14AdjustDataSizeEiPi>  ; Cipher::AdjustDataSize(int, int*) const
0858d8e0 +0x076:  mov    -0x28(%ebp),%eax
0858d8e3 +0x079:  cmp    $&_ZL14gUnicodeBuffer+0xcdec,%eax
0858d8e8 +0x07e:  jle    0858d937 <+0xcd>
0858d8ea +0x080:  mov    -0x28(%ebp),%eax
0858d8ed +0x083:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0x18(%esp)
0858d8f5 +0x08b:  mov    %eax,0x14(%esp)
0858d8f9 +0x08f:  movl   $"Buffer overflow[Cipher] : EncryptDataSize[%d]>[%d]",0x10(%esp)
0858d901 +0x097:  movl   $0x302,0xc(%esp)
0858d909 +0x09f:  movl   $&_ZZN9PacketBuf14encrypt_packetEvE19__PRETTY_FUNCTION__,0x8(%esp)
0858d911 +0x0a7:  movl   $"packet_buf.cpp",0x4(%esp)
0858d919 +0x0af:  movl   $0x1,(%esp)
0858d920 +0x0b6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d925 +0x0bb:  mov    -0x28(%ebp),%eax
0858d928 +0x0be:  mov    %eax,(%esp)
0858d92b +0x0c1:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0858d930 +0x0c6:  mov    %eax,-0x1c(%ebp)
0858d933 +0x0c9:  movb   $0x1,-0x1d(%ebp)
0858d937 +0x0cd:  mov    -0x1c(%ebp),%esi
0858d93a +0x0d0:  mov    0x8(%ebp),%eax
0858d93d +0x0d3:  mov    0x8(%eax),%eax
0858d940 +0x0d6:  sub    $0xf,%eax
0858d943 +0x0d9:  mov    %eax,-&_ZL14gUnicodeBuffer+0xce20(%ebp)
0858d949 +0x0df:  mov    0x8(%ebp),%eax
0858d94c +0x0e2:  mov    0x14(%eax),%eax
0858d94f +0x0e5:  lea    0xf(%eax),%edi
0858d952 +0x0e8:  mov    0x8(%ebp),%eax
0858d955 +0x0eb:  mov    0x14(%eax),%eax
0858d958 +0x0ee:  add    $0x1,%eax
0858d95b +0x0f1:  movzwl (%eax),%eax
0858d95e +0x0f4:  movzwl %ax,%ebx
0858d961 +0x0f7:  call   082a713a <_GLOBAL__I__ZN4CLog5this_E+0x3561>  ; global constructors keyed to CLog::this_+0x3561
0858d966 +0x0fc:  lea    -0x24(%ebp),%edx
0858d969 +0x0ff:  mov    %edx,0x14(%esp)
0858d96d +0x103:  mov    %esi,0x10(%esp)
0858d971 +0x107:  mov    -&_ZL14gUnicodeBuffer+0xce20(%ebp),%edx
0858d977 +0x10d:  mov    %edx,0xc(%esp)
0858d97b +0x111:  mov    %edi,0x8(%esp)
0858d97f +0x115:  mov    %ebx,0x4(%esp)
0858d983 +0x119:  mov    %eax,(%esp)
0858d986 +0x11c:  call   08097436 <_ZN6Cipher7EncryptEiPKhiPhPi>  ; Cipher::Encrypt(int, unsigned char const*, int, unsigned char*, int*)
0858d98b +0x121:  mov    0x8(%ebp),%eax
0858d98e +0x124:  mov    0x8(%eax),%edx
0858d991 +0x127:  mov    0x8(%ebp),%eax
0858d994 +0x12a:  mov    0x8(%eax),%eax
0858d997 +0x12d:  mov    $0xf,%ecx
0858d99c +0x132:  sub    %eax,%ecx
0858d99e +0x134:  mov    -0x24(%ebp),%eax
0858d9a1 +0x137:  lea    (%ecx,%eax,1),%eax
0858d9a4 +0x13a:  add    %eax,%edx
0858d9a6 +0x13c:  mov    0x8(%ebp),%eax
0858d9a9 +0x13f:  mov    %edx,0x8(%eax)
0858d9ac +0x142:  mov    -0x24(%ebp),%eax
0858d9af +0x145:  test   %eax,%eax
0858d9b1 +0x147:  jle    0858d9d2 <+0x168>
0858d9b3 +0x149:  mov    -0x24(%ebp),%eax
0858d9b6 +0x14c:  mov    0x8(%ebp),%edx
0858d9b9 +0x14f:  mov    0x14(%edx),%edx
0858d9bc +0x152:  add    $0xf,%edx
0858d9bf +0x155:  mov    %eax,0x8(%esp)
0858d9c3 +0x159:  mov    -0x1c(%ebp),%eax
0858d9c6 +0x15c:  mov    %eax,0x4(%esp)
0858d9ca +0x160:  mov    %edx,(%esp)
0858d9cd +0x163:  call   0807d8a0 <_init+0x198>
0858d9d2 +0x168:  cmpb   $0x0,-0x1d(%ebp)
0858d9d6 +0x16c:  je     0858da19 <+0x1af>
0858d9d8 +0x16e:  cmpl   $0x0,-0x1c(%ebp)
0858d9dc +0x172:  je     0858da1c <+0x1b2>
0858d9de +0x174:  mov    -0x1c(%ebp),%eax
0858d9e1 +0x177:  mov    %eax,(%esp)
0858d9e4 +0x17a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0858d9e9 +0x17f:  jmp    0858da1d <+0x1b3>
0858d9eb +0x181:  movl   $0x0,-0x2c(%ebp)
0858d9f2 +0x188:  mov    0x8(%ebp),%eax
0858d9f5 +0x18b:  mov    0x8(%eax),%eax
0858d9f8 +0x18e:  lea    -0xf(%eax),%ecx
0858d9fb +0x191:  mov    0x8(%ebp),%eax
0858d9fe +0x194:  mov    0x14(%eax),%eax
0858da01 +0x197:  lea    0xf(%eax),%edx
0858da04 +0x19a:  lea    -0x2c(%ebp),%eax
0858da07 +0x19d:  mov    %eax,0x8(%esp)
0858da0b +0x1a1:  mov    %ecx,0x4(%esp)
0858da0f +0x1a5:  mov    %edx,(%esp)
0858da12 +0x1a8:  call   0848da70 <_ZN10Encryption7EncryptEPviRj>  ; Encryption::Encrypt(void*, int, unsigned int&)
0858da17 +0x1ad:  jmp    0858da1d <+0x1b3>
0858da19 +0x1af:  nop
0858da1a +0x1b0:  jmp    0858da1d <+0x1b3>
0858da1c +0x1b2:  nop
0858da1d +0x1b3:  add    $&_ZL14gUnicodeBuffer+0xce40,%esp
0858da23 +0x1b9:  pop    %ebx
0858da24 +0x1ba:  pop    %esi
0858da25 +0x1bb:  pop    %edi
0858da26 +0x1bc:  pop    %ebp
0858da27 +0x1bd:  ret
```

## 反编译 C

```c
// PacketBuf::encrypt_packet @ 0x858d86a

/* PacketBuf::encrypt_packet() */

void __thiscall PacketBuf::encrypt_packet(PacketBuf *this)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  Cipher *pCVar5;
  uchar auStack_17348 [95000];
  uint local_30;
  uint local_2c;
  size_t local_28;
  char local_21;
  uchar *local_20;
  
  if ((**(char **)(this + 0x14) == '\0') && (*(short *)(*(int *)(this + 0x14) + 1) == 1)) {
    local_30 = 0;
    Encryption::Encrypt((void *)(*(int *)(this + 0x14) + 0xf),*(int *)(this + 8) + -0xf,&local_30);
  }
  else {
    local_21 = '\0';
    local_20 = auStack_17348;
    local_28 = 95000;
    local_2c = *(int *)(this + 8) - 0xf;
    uVar1 = *(ushort *)(*(int *)(this + 0x14) + 1);
    pCVar5 = (Cipher *)G_Cipher();
    Cipher::AdjustDataSize(pCVar5,(uint)uVar1,(int *)&local_2c);
    if (95000 < (int)local_2c) {
      LogManager::logFormat
                (1,"packet_buf.cpp","void PacketBuf::encrypt_packet()",0x302,
                 "Buffer overflow[Cipher] : EncryptDataSize[%d]>[%d]",local_2c,95000);
      local_20 = operator_new__(local_2c);
      local_21 = '\x01';
    }
    puVar4 = local_20;
    iVar2 = *(int *)(this + 8);
    iVar3 = *(int *)(this + 0x14);
    uVar1 = *(ushort *)(*(int *)(this + 0x14) + 1);
    pCVar5 = (Cipher *)G_Cipher();
    Cipher::Encrypt(pCVar5,(uint)uVar1,(uchar *)(iVar3 + 0xf),iVar2 + -0xf,puVar4,(int *)&local_28);
    *(size_t *)(this + 8) = *(int *)(this + 8) + (0xf - *(int *)(this + 8)) + local_28;
    if (0 < (int)local_28) {
      memcpy((void *)(*(int *)(this + 0x14) + 0xf),local_20,local_28);
    }
    if ((local_21 != '\0') && (local_20 != (uchar *)0x0)) {
      operator_delete__(local_20);
    }
  }
  return;
}
```
