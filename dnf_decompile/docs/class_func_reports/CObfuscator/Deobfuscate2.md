# Deobfuscate2

`_ZN11CObfuscator12Deobfuscate2Ev`

`CObfuscator::Deobfuscate2()`

| 类 | 地址 |
|---|---|
| `CObfuscator` | `0x08585d2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585d2e  _ZN11CObfuscator12Deobfuscate2Ev
#           CObfuscator::Deobfuscate2()
# range [0x08585d2e, 0x08585ec2]
08585d2e +0x000:  push   %ebp
08585d2f +0x001:  mov    %esp,%ebp
08585d31 +0x003:  push   %ebx
08585d32 +0x004:  sub    $0x34,%esp
08585d35 +0x007:  movl   $0x0,-0x1c(%ebp)
08585d3c +0x00e:  movl   $0x0,-0x18(%ebp)
08585d43 +0x015:  movl   $0x0,-0x14(%ebp)
08585d4a +0x01c:  mov    0x8(%ebp),%eax
08585d4d +0x01f:  mov    0x8(%eax),%eax
08585d50 +0x022:  shl    $0x3,%eax
08585d53 +0x025:  mov    %eax,-0x10(%ebp)
08585d56 +0x028:  mov    0x8(%ebp),%eax
08585d59 +0x02b:  mov    0x8(%eax),%ecx
08585d5c +0x02e:  mov    $0x92492493,%edx
08585d61 +0x033:  mov    %ecx,%eax
08585d63 +0x035:  imul   %edx
08585d65 +0x037:  lea    (%edx,%ecx,1),%eax
08585d68 +0x03a:  mov    %eax,%edx
08585d6a +0x03c:  sar    $0x2,%edx
08585d6d +0x03f:  mov    %ecx,%eax
08585d6f +0x041:  sar    $0x1f,%eax
08585d72 +0x044:  mov    %edx,%ebx
08585d74 +0x046:  sub    %eax,%ebx
08585d76 +0x048:  mov    %ebx,%eax
08585d78 +0x04a:  mov    %eax,-0x14(%ebp)
08585d7b +0x04d:  mov    -0x14(%ebp),%edx
08585d7e +0x050:  mov    %edx,%eax
08585d80 +0x052:  shl    $0x3,%eax
08585d83 +0x055:  sub    %edx,%eax
08585d85 +0x057:  mov    %ecx,%edx
08585d87 +0x059:  sub    %eax,%edx
08585d89 +0x05b:  mov    %edx,%eax
08585d8b +0x05d:  mov    %eax,-0x14(%ebp)
08585d8e +0x060:  cmpl   $0x0,-0x14(%ebp)
08585d92 +0x064:  jne    08585d9d <+0x6f>
08585d94 +0x066:  movl   $0x6,-0x14(%ebp)
08585d9b +0x06d:  jmp    08585da1 <+0x73>
08585d9d +0x06f:  subl   $0x1,-0x14(%ebp)
08585da1 +0x073:  mov    0x8(%ebp),%eax
08585da4 +0x076:  mov    0x8(%eax),%eax
08585da7 +0x079:  sub    $0x1,%eax
08585daa +0x07c:  mov    %eax,-0x1c(%ebp)
08585dad +0x07f:  jmp    08585ea8 <+0x17a>
08585db2 +0x084:  mov    0x8(%ebp),%eax
08585db5 +0x087:  mov    -0x14(%ebp),%edx
08585db8 +0x08a:  mov    %edx,0xc(%esp)
08585dbc +0x08e:  movl   $0x0,0x8(%esp)
08585dc4 +0x096:  mov    -0x1c(%ebp),%edx
08585dc7 +0x099:  mov    %edx,0x4(%esp)
08585dcb +0x09d:  mov    %eax,(%esp)
08585dce +0x0a0:  call   0831c2fc <_ZN11CBitManager6GetBitEiii>  ; CBitManager::GetBit(int, int, int)
08585dd3 +0x0a5:  mov    %al,-0x9(%ebp)
08585dd6 +0x0a8:  movzbl -0x9(%ebp),%edx
08585dda +0x0ac:  mov    $0x7,%eax
08585ddf +0x0b1:  sub    -0x14(%ebp),%eax
08585de2 +0x0b4:  mov    %edx,%ebx
08585de4 +0x0b6:  mov    %eax,%ecx
08585de6 +0x0b8:  shl    %cl,%ebx
08585de8 +0x0ba:  mov    %ebx,%eax
08585dea +0x0bc:  mov    %al,-0x9(%ebp)
08585ded +0x0bf:  mov    0x8(%ebp),%eax
08585df0 +0x0c2:  mov    0x4(%eax),%edx
08585df3 +0x0c5:  mov    0x8(%ebp),%eax
08585df6 +0x0c8:  mov    0x8(%eax),%eax
08585df9 +0x0cb:  sub    $0x1,%eax
08585dfc +0x0ce:  add    %eax,%edx
08585dfe +0x0d0:  movzbl -0x9(%ebp),%eax
08585e02 +0x0d4:  mov    %al,(%edx)
08585e04 +0x0d6:  mov    -0x14(%ebp),%eax
08585e07 +0x0d9:  lea    0x1(%eax),%edx
08585e0a +0x0dc:  mov    0x8(%ebp),%eax
08585e0d +0x0df:  movl   $0x7,0xc(%esp)
08585e15 +0x0e7:  mov    %edx,0x8(%esp)
08585e19 +0x0eb:  mov    -0x1c(%ebp),%edx
08585e1c +0x0ee:  mov    %edx,0x4(%esp)
08585e20 +0x0f2:  mov    %eax,(%esp)
08585e23 +0x0f5:  call   0831c2fc <_ZN11CBitManager6GetBitEiii>  ; CBitManager::GetBit(int, int, int)
08585e28 +0x0fa:  mov    %al,-0x9(%ebp)
08585e2b +0x0fd:  movzbl -0x9(%ebp),%edx
08585e2f +0x101:  mov    -0x14(%ebp),%eax
08585e32 +0x104:  add    $0x1,%eax
08585e35 +0x107:  mov    %edx,%ebx
08585e37 +0x109:  mov    %eax,%ecx
08585e39 +0x10b:  sar    %cl,%ebx
08585e3b +0x10d:  mov    %ebx,%eax
08585e3d +0x10f:  mov    %al,-0x9(%ebp)
08585e40 +0x112:  mov    0x8(%ebp),%eax
08585e43 +0x115:  mov    0x4(%eax),%edx
08585e46 +0x118:  mov    0x8(%ebp),%eax
08585e49 +0x11b:  mov    0x8(%eax),%eax
08585e4c +0x11e:  sub    $0x1,%eax
08585e4f +0x121:  add    %eax,%edx
08585e51 +0x123:  mov    0x8(%ebp),%eax
08585e54 +0x126:  mov    0x4(%eax),%ecx
08585e57 +0x129:  mov    0x8(%ebp),%eax
08585e5a +0x12c:  mov    0x8(%eax),%eax
08585e5d +0x12f:  sub    $0x1,%eax
08585e60 +0x132:  lea    (%ecx,%eax,1),%eax
08585e63 +0x135:  movzbl (%eax),%eax
08585e66 +0x138:  or     -0x9(%ebp),%al
08585e69 +0x13b:  mov    %al,(%edx)
08585e6b +0x13d:  mov    0x8(%ebp),%eax
08585e6e +0x140:  mov    0x4(%eax),%edx
08585e71 +0x143:  mov    -0x18(%ebp),%eax
08585e74 +0x146:  add    %eax,%edx
08585e76 +0x148:  mov    0x8(%ebp),%eax
08585e79 +0x14b:  mov    0x4(%eax),%ecx
08585e7c +0x14e:  mov    0x8(%ebp),%eax
08585e7f +0x151:  mov    0x8(%eax),%eax
08585e82 +0x154:  sub    $0x1,%eax
08585e85 +0x157:  lea    (%ecx,%eax,1),%eax
08585e88 +0x15a:  movzbl (%eax),%eax
08585e8b +0x15d:  mov    %al,(%edx)
08585e8d +0x15f:  addl   $0x1,-0x18(%ebp)
08585e91 +0x163:  cmpl   $0x0,-0x14(%ebp)
08585e95 +0x167:  jne    08585ea0 <+0x172>
08585e97 +0x169:  movl   $0x6,-0x14(%ebp)
08585e9e +0x170:  jmp    08585ea4 <+0x176>
08585ea0 +0x172:  subl   $0x1,-0x14(%ebp)
08585ea4 +0x176:  subl   $0x1,-0x1c(%ebp)
08585ea8 +0x17a:  mov    -0x1c(%ebp),%eax
08585eab +0x17d:  not    %eax
08585ead +0x17f:  shr    $0x1f,%eax
08585eb0 +0x182:  test   %al,%al
08585eb2 +0x184:  jne    08585db2 <+0x84>
08585eb8 +0x18a:  mov    $0x0,%eax
08585ebd +0x18f:  add    $0x34,%esp
08585ec0 +0x192:  pop    %ebx
08585ec1 +0x193:  pop    %ebp
08585ec2 +0x194:  ret
```

## 反编译 C

```c
// CObfuscator::Deobfuscate2 @ 0x8585d2e

/* CObfuscator::Deobfuscate2() */

undefined4 __thiscall CObfuscator::Deobfuscate2(CObfuscator *this)

{
  char cVar1;
  byte bVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  if (*(int *)(this + 8) % 7 == 0) {
    local_18 = 6;
  }
  else {
    local_18 = *(int *)(this + 8) % 7 + -1;
  }
  local_20 = *(int *)(this + 8);
  while (local_20 = local_20 + -1, -1 < local_20) {
    cVar1 = CBitManager::GetBit((CBitManager *)this,local_20,0,local_18);
    *(char *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) = cVar1 << (7U - (char)local_18 & 0x1f);
    bVar2 = CBitManager::GetBit((CBitManager *)this,local_20,local_18 + 1,7);
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) |
         (byte)((int)(uint)bVar2 >> ((char)local_18 + 1U & 0x1f));
    *(undefined1 *)(*(int *)(this + 4) + local_1c) =
         *(undefined1 *)(*(int *)(this + 4) + *(int *)(this + 8) + -1);
    local_1c = local_1c + 1;
    if (local_18 == 0) {
      local_18 = 6;
    }
    else {
      local_18 = local_18 + -1;
    }
  }
  return 0;
}
```
