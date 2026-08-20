# generateRandomItem

`_ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CMonsterDrop::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x08536da8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08536da8  _ZN8WongWork12CMonsterDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CMonsterDrop::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x08536da8, 0x08536fcd]
08536da8 +0x000:  push   %ebp
08536da9 +0x001:  mov    %esp,%ebp
08536dab +0x003:  push   %edi
08536dac +0x004:  push   %esi
08536dad +0x005:  push   %ebx
08536dae +0x006:  sub    $0x6c,%esp
08536db1 +0x009:  mov    0xc(%ebp),%eax
08536db4 +0x00c:  movzbl 0x35(%eax),%eax
08536db8 +0x010:  cmp    $0x3,%al
08536dba +0x012:  jg     08536fc5 <+0x21d>
08536dc0 +0x018:  movb   $0x0,-0x21(%ebp)
08536dc4 +0x01c:  mov    0xc(%ebp),%eax
08536dc7 +0x01f:  movzbl 0x40(%eax),%eax
08536dcb +0x023:  test   %al,%al
08536dcd +0x025:  jne    08536e99 <+0xf1>
08536dd3 +0x02b:  movl   $0x0,-0x20(%ebp)
08536dda +0x032:  jmp    08536e81 <+0xd9>
08536ddf +0x037:  mov    0xc(%ebp),%eax
08536de2 +0x03a:  mov    (%eax),%esi
08536de4 +0x03c:  mov    0xc(%ebp),%eax
08536de7 +0x03f:  movzbl 0x41(%eax),%eax
08536deb +0x043:  movzbl %al,%edi
08536dee +0x046:  mov    0xc(%ebp),%eax
08536df1 +0x049:  mov    0x3c(%eax),%eax
08536df4 +0x04c:  mov    %eax,-0x40(%ebp)
08536df7 +0x04f:  mov    0xc(%ebp),%eax
08536dfa +0x052:  movzbl 0x38(%eax),%eax
08536dfe +0x056:  movzbl %al,%eax
08536e01 +0x059:  mov    %eax,-0x3c(%ebp)
08536e04 +0x05c:  mov    0xc(%ebp),%eax
08536e07 +0x05f:  movzbl 0x37(%eax),%eax
08536e0b +0x063:  movzbl %al,%eax
08536e0e +0x066:  mov    %eax,-0x38(%ebp)
08536e11 +0x069:  mov    0xc(%ebp),%eax
08536e14 +0x06c:  movzbl 0x36(%eax),%eax
08536e18 +0x070:  movzbl %al,%eax
08536e1b +0x073:  mov    %eax,-0x34(%ebp)
08536e1e +0x076:  mov    0xc(%ebp),%eax
08536e21 +0x079:  movzbl 0x35(%eax),%eax
08536e25 +0x07d:  movsbl %al,%ebx
08536e28 +0x080:  mov    0xc(%ebp),%eax
08536e2b +0x083:  movzbl 0x34(%eax),%eax
08536e2f +0x087:  movzbl %al,%ecx
08536e32 +0x08a:  mov    0x8(%ebp),%eax
08536e35 +0x08d:  lea    0x4706c(%eax),%edx
08536e3b +0x093:  lea    -0x21(%ebp),%eax
08536e3e +0x096:  mov    %eax,0x28(%esp)
08536e42 +0x09a:  mov    0x10(%ebp),%eax
08536e45 +0x09d:  mov    %eax,0x24(%esp)
08536e49 +0x0a1:  mov    %esi,0x20(%esp)
08536e4d +0x0a5:  mov    %edi,0x1c(%esp)
08536e51 +0x0a9:  mov    -0x40(%ebp),%eax
08536e54 +0x0ac:  mov    %eax,0x18(%esp)
08536e58 +0x0b0:  mov    -0x3c(%ebp),%eax
08536e5b +0x0b3:  mov    %eax,0x14(%esp)
08536e5f +0x0b7:  mov    -0x38(%ebp),%eax
08536e62 +0x0ba:  mov    %eax,0x10(%esp)
08536e66 +0x0be:  mov    -0x34(%ebp),%eax
08536e69 +0x0c1:  mov    %eax,0xc(%esp)
08536e6d +0x0c5:  mov    %ebx,0x8(%esp)
08536e71 +0x0c9:  mov    %ecx,0x4(%esp)
08536e75 +0x0cd:  mov    %edx,(%esp)
08536e78 +0x0d0:  call   08536882 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb>  ; WongWork::CSpecialMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char, unsigned char, int, unsigned char, int, WongWork::stGenerateResult_t&, bool&)
08536e7d +0x0d5:  addl   $0x1,-0x20(%ebp)
08536e81 +0x0d9:  mov    0xc(%ebp),%eax
08536e84 +0x0dc:  movzbl 0x39(%eax),%eax
08536e88 +0x0e0:  movsbl %al,%eax
08536e8b +0x0e3:  cmp    -0x20(%ebp),%eax
08536e8e +0x0e6:  setg   %al
08536e91 +0x0e9:  test   %al,%al
08536e93 +0x0eb:  jne    08536ddf <+0x37>
08536e99 +0x0f1:  movl   $0x0,-0x1c(%ebp)
08536ea0 +0x0f8:  jmp    08536fab <+0x203>
08536ea5 +0x0fd:  mov    0xc(%ebp),%eax
08536ea8 +0x100:  add    $0x8,%eax
08536eab +0x103:  movl   $0x0,0x4(%esp)
08536eb3 +0x10b:  mov    %eax,(%esp)
08536eb6 +0x10e:  call   0853b926 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1bb2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1bb2
08536ebb +0x113:  test   %al,%al
08536ebd +0x115:  je     08536ed3 <+0x12b>
08536ebf +0x117:  mov    0x8(%ebp),%eax
08536ec2 +0x11a:  mov    0x259378(%eax),%edx
08536ec8 +0x120:  mov    0x8(%ebp),%eax
08536ecb +0x123:  mov    %edx,0x259380(%eax)
08536ed1 +0x129:  jmp    08536eff <+0x157>
08536ed3 +0x12b:  mov    0xc(%ebp),%eax
08536ed6 +0x12e:  add    $0x8,%eax
08536ed9 +0x131:  movl   $0x1,0x4(%esp)
08536ee1 +0x139:  mov    %eax,(%esp)
08536ee4 +0x13c:  call   0853b926 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1bb2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1bb2
08536ee9 +0x141:  test   %al,%al
08536eeb +0x143:  je     08536eff <+0x157>
08536eed +0x145:  mov    0x8(%ebp),%eax
08536ef0 +0x148:  mov    0x25937c(%eax),%edx
08536ef6 +0x14e:  mov    0x8(%ebp),%eax
08536ef9 +0x151:  mov    %edx,0x259380(%eax)
08536eff +0x157:  mov    0xc(%ebp),%eax
08536f02 +0x15a:  mov    0x1c(%eax),%edx
08536f05 +0x15d:  mov    0x8(%ebp),%eax
08536f08 +0x160:  mov    %edx,0x259384(%eax)
08536f0e +0x166:  mov    0xc(%ebp),%eax
08536f11 +0x169:  mov    (%eax),%eax
08536f13 +0x16b:  mov    %eax,-0x30(%ebp)
08536f16 +0x16e:  mov    0xc(%ebp),%eax
08536f19 +0x171:  mov    0x3c(%eax),%eax
08536f1c +0x174:  mov    %eax,-0x2c(%ebp)
08536f1f +0x177:  mov    0xc(%ebp),%eax
08536f22 +0x17a:  movzbl 0x38(%eax),%eax
08536f26 +0x17e:  movzbl %al,%edi
08536f29 +0x181:  mov    0xc(%ebp),%eax
08536f2c +0x184:  movzbl 0x37(%eax),%eax
08536f30 +0x188:  movzbl %al,%esi
08536f33 +0x18b:  mov    0xc(%ebp),%eax
08536f36 +0x18e:  movzbl 0x36(%eax),%eax
08536f3a +0x192:  movzbl %al,%ebx
08536f3d +0x195:  mov    0xc(%ebp),%eax
08536f40 +0x198:  movzbl 0x35(%eax),%eax
08536f44 +0x19c:  movsbl %al,%ecx
08536f47 +0x19f:  mov    0xc(%ebp),%eax
08536f4a +0x1a2:  movzbl 0x34(%eax),%eax
08536f4e +0x1a6:  movzbl %al,%edx
08536f51 +0x1a9:  lea    -0x21(%ebp),%eax
08536f54 +0x1ac:  mov    %eax,0x24(%esp)
08536f58 +0x1b0:  mov    0x10(%ebp),%eax
08536f5b +0x1b3:  mov    %eax,0x20(%esp)
08536f5f +0x1b7:  mov    -0x30(%ebp),%eax
08536f62 +0x1ba:  mov    %eax,0x1c(%esp)
08536f66 +0x1be:  mov    -0x2c(%ebp),%eax
08536f69 +0x1c1:  mov    %eax,0x18(%esp)
08536f6d +0x1c5:  mov    %edi,0x14(%esp)
08536f71 +0x1c9:  mov    %esi,0x10(%esp)
08536f75 +0x1cd:  mov    %ebx,0xc(%esp)
08536f79 +0x1d1:  mov    %ecx,0x8(%esp)
08536f7d +0x1d5:  mov    %edx,0x4(%esp)
08536f81 +0x1d9:  mov    0x8(%ebp),%eax
08536f84 +0x1dc:  mov    %eax,(%esp)
08536f87 +0x1df:  call   08535ed2 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb>  ; WongWork::CMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char, unsigned char, int, int, WongWork::stGenerateResult_t&, bool&)
08536f8c +0x1e4:  mov    0x8(%ebp),%eax
08536f8f +0x1e7:  movl   $0x1,0x259380(%eax)
08536f99 +0x1f1:  mov    0x8(%ebp),%eax
08536f9c +0x1f4:  mov    $0x3f800000,%edx
08536fa1 +0x1f9:  mov    %edx,0x259384(%eax)
08536fa7 +0x1ff:  addl   $0x1,-0x1c(%ebp)
08536fab +0x203:  mov    0xc(%ebp),%eax
08536fae +0x206:  movzbl 0x39(%eax),%eax
08536fb2 +0x20a:  movsbl %al,%eax
08536fb5 +0x20d:  cmp    -0x1c(%ebp),%eax
08536fb8 +0x210:  setg   %al
08536fbb +0x213:  test   %al,%al
08536fbd +0x215:  jne    08536ea5 <+0xfd>
08536fc3 +0x21b:  jmp    08536fc6 <+0x21e>
08536fc5 +0x21d:  nop
08536fc6 +0x21e:  add    $0x6c,%esp
08536fc9 +0x221:  pop    %ebx
08536fca +0x222:  pop    %esi
08536fcb +0x223:  pop    %edi
08536fcc +0x224:  pop    %ebp
08536fcd +0x225:  ret
```

## 反编译 C

```c
// WongWork::CMonsterDrop::generateRandomItem @ 0x8536da8

/* WongWork::CMonsterDrop::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop::generateRandomItem
          (CMonsterDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  char cVar1;
  bool local_25;
  int local_24;
  int local_20;
  
  if ((char)param_1[0x35] < '\x04') {
    local_25 = false;
    if (param_1[0x40] == (stGenerateRefData_t)0x0) {
      for (local_24 = 0; local_24 < (char)param_1[0x39]; local_24 = local_24 + 1) {
        CSpecialMonsterDrop::_generateRandomItem
                  ((CSpecialMonsterDrop *)(this + 0x4706c),(uchar)param_1[0x34],(char)param_1[0x35],
                   (uchar)param_1[0x36],(uchar)param_1[0x37],(uchar)param_1[0x38],
                   *(int *)(param_1 + 0x3c),(uchar)param_1[0x41],*(int *)param_1,param_2,&local_25);
      }
    }
    for (local_20 = 0; local_20 < (char)param_1[0x39]; local_20 = local_20 + 1) {
      cVar1 = std::vector<bool,std::allocator<bool>>::operator[]
                        ((vector<bool,std::allocator<bool>> *)(param_1 + 8),0);
      if (cVar1 == '\0') {
        cVar1 = std::vector<bool,std::allocator<bool>>::operator[]
                          ((vector<bool,std::allocator<bool>> *)(param_1 + 8),1);
        if (cVar1 != '\0') {
          *(undefined4 *)(this + 0x259380) = *(undefined4 *)(this + 0x25937c);
        }
      }
      else {
        *(undefined4 *)(this + 0x259380) = *(undefined4 *)(this + 0x259378);
      }
      *(undefined4 *)(this + 0x259384) = *(undefined4 *)(param_1 + 0x1c);
      _generateRandomItem(this,(uchar)param_1[0x34],(char)param_1[0x35],(uchar)param_1[0x36],
                          (uchar)param_1[0x37],(uchar)param_1[0x38],*(int *)(param_1 + 0x3c),
                          *(int *)param_1,param_2,&local_25);
      *(undefined4 *)(this + 0x259380) = 1;
      *(undefined4 *)(this + 0x259384) = 0x3f800000;
    }
  }
  return;
}
```
