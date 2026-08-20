# LoadScript

`_ZN28CAutoMarketConditionsControl10LoadScriptEPKc`

`CAutoMarketConditionsControl::LoadScript(char const*)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f815c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f815c  _ZN28CAutoMarketConditionsControl10LoadScriptEPKc
#           CAutoMarketConditionsControl::LoadScript(char const*)
# range [0x082f815c, 0x082f843e]
082f815c +0x000:  push   %ebp
082f815d +0x001:  mov    %esp,%ebp
082f815f +0x003:  push   %esi
082f8160 +0x004:  push   %ebx
082f8161 +0x005:  sub    $0x30,%esp
082f8164 +0x008:  mov    0xc(%ebp),%eax
082f8167 +0x00b:  mov    %eax,0x4(%esp)
082f816b +0x00f:  movl   $"",(%esp)
082f8172 +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
082f8177 +0x01b:  xor    $0x1,%eax
082f817a +0x01e:  test   %al,%al
082f817c +0x020:  je     082f8188 <+0x2c>
082f817e +0x022:  mov    $0x1e,%ebx
082f8183 +0x027:  jmp    082f8436 <+0x2da>
082f8188 +0x02c:  lea    -0x1c(%ebp),%eax
082f818b +0x02f:  mov    %eax,(%esp)
082f818e +0x032:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
082f8193 +0x037:  movl   $0x0,-0x20(%ebp)
082f819a +0x03e:  movb   $0x0,-0x21(%ebp)
082f819e +0x042:  movl   $0x1,0x4(%esp)
082f81a6 +0x04a:  lea    -0x1c(%ebp),%eax
082f81a9 +0x04d:  mov    %eax,(%esp)
082f81ac +0x050:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
082f81b1 +0x055:  xor    $0x1,%eax
082f81b4 +0x058:  test   %al,%al
082f81b6 +0x05a:  jne    082f8408 <+0x2ac>
082f81bc +0x060:  movl   $"[control of gold drop amount rate]",0x4(%esp)
082f81c4 +0x068:  lea    -0x1c(%ebp),%eax
082f81c7 +0x06b:  mov    %eax,(%esp)
082f81ca +0x06e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082f81cf +0x073:  test   %al,%al
082f81d1 +0x075:  je     082f8222 <+0xc6>
082f81d3 +0x077:  movl   $0x0,-0x18(%ebp)
082f81da +0x07e:  jmp    082f8212 <+0xb6>
082f81dc +0x080:  mov    -0x18(%ebp),%ebx
082f81df +0x083:  lea    -0x21(%ebp),%eax
082f81e2 +0x086:  mov    %eax,0x4(%esp)
082f81e6 +0x08a:  movl   $0x3,(%esp)
082f81ed +0x091:  call   088bc451 <_Z9ScanFloatiPb>  ; ScanFloat(int, bool*)
082f81f2 +0x096:  mov    0x8(%ebp),%eax
082f81f5 +0x099:  fstpl  0x4(%eax,%ebx,8)
082f81f9 +0x09d:  movzbl -0x21(%ebp),%eax
082f81fd +0x0a1:  xor    $0x1,%eax
082f8200 +0x0a4:  test   %al,%al
082f8202 +0x0a6:  je     082f820e <+0xb2>
082f8204 +0x0a8:  mov    $0x2f,%ebx
082f8209 +0x0ad:  jmp    082f842b <+0x2cf>
082f820e +0x0b2:  addl   $0x1,-0x18(%ebp)
082f8212 +0x0b6:  cmpl   $0x9,-0x18(%ebp)
082f8216 +0x0ba:  setle  %al
082f8219 +0x0bd:  test   %al,%al
082f821b +0x0bf:  jne    082f81dc <+0x80>
082f821d +0x0c1:  jmp    082f819e <+0x42>
082f8222 +0x0c6:  movl   $"[control of gold drop amount rate per level]",0x4(%esp)
082f822a +0x0ce:  lea    -0x1c(%ebp),%eax
082f822d +0x0d1:  mov    %eax,(%esp)
082f8230 +0x0d4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082f8235 +0x0d9:  test   %al,%al
082f8237 +0x0db:  je     082f82c5 <+0x169>
082f823d +0x0e1:  mov    0x8(%ebp),%eax
082f8240 +0x0e4:  add    $0x5c,%eax
082f8243 +0x0e7:  movl   $0x324,0x8(%esp)
082f824b +0x0ef:  movl   $0x0,0x4(%esp)
082f8253 +0x0f7:  mov    %eax,(%esp)
082f8256 +0x0fa:  call   0807dcc0 <_init+0x5b8>
082f825b +0x0ff:  jmp    082f825e <+0x102>
082f825d +0x101:  nop
082f825e +0x102:  lea    -0x21(%ebp),%eax
082f8261 +0x105:  mov    %eax,(%esp)
082f8264 +0x108:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
082f8269 +0x10d:  mov    %eax,-0x20(%ebp)
082f826c +0x110:  movzbl -0x21(%ebp),%eax
082f8270 +0x114:  xor    $0x1,%eax
082f8273 +0x117:  test   %al,%al
082f8275 +0x119:  je     082f827d <+0x121>
082f8277 +0x11b:  nop
082f8278 +0x11c:  jmp    082f819e <+0x42>
082f827d +0x121:  mov    -0x20(%ebp),%eax
082f8280 +0x124:  test   %eax,%eax
082f8282 +0x126:  jle    082f828e <+0x132>
082f8284 +0x128:  mov    -0x20(%ebp),%eax
082f8287 +0x12b:  cmp    $0xc8,%eax
082f828c +0x130:  jle    082f8298 <+0x13c>
082f828e +0x132:  mov    $0x3c,%ebx
082f8293 +0x137:  jmp    082f842b <+0x2cf>
082f8298 +0x13c:  mov    -0x20(%ebp),%ebx
082f829b +0x13f:  lea    -0x21(%ebp),%eax
082f829e +0x142:  mov    %eax,(%esp)
082f82a1 +0x145:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
082f82a6 +0x14a:  mov    0x8(%ebp),%edx
082f82a9 +0x14d:  lea    0x14(%ebx),%ecx
082f82ac +0x150:  mov    %eax,0xc(%edx,%ecx,4)
082f82b0 +0x154:  movzbl -0x21(%ebp),%eax
082f82b4 +0x158:  xor    $0x1,%eax
082f82b7 +0x15b:  test   %al,%al
082f82b9 +0x15d:  je     082f825d <+0x101>
082f82bb +0x15f:  mov    $0x40,%ebx
082f82c0 +0x164:  jmp    082f842b <+0x2cf>
082f82c5 +0x169:  movl   $"[control of equipment drop prob]",0x4(%esp)
082f82cd +0x171:  lea    -0x1c(%ebp),%eax
082f82d0 +0x174:  mov    %eax,(%esp)
082f82d3 +0x177:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082f82d8 +0x17c:  test   %al,%al
082f82da +0x17e:  je     082f832e <+0x1d2>
082f82dc +0x180:  movl   $0x0,-0x14(%ebp)
082f82e3 +0x187:  jmp    082f831e <+0x1c2>
082f82e5 +0x189:  mov    -0x14(%ebp),%ebx
082f82e8 +0x18c:  lea    -0x21(%ebp),%eax
082f82eb +0x18f:  mov    %eax,0x4(%esp)
082f82ef +0x193:  movl   $0x3,(%esp)
082f82f6 +0x19a:  call   088bc451 <_Z9ScanFloatiPb>  ; ScanFloat(int, bool*)
082f82fb +0x19f:  mov    0x8(%ebp),%eax
082f82fe +0x1a2:  lea    0x70(%ebx),%edx
082f8301 +0x1a5:  fstpl  0x4(%eax,%edx,8)
082f8305 +0x1a9:  movzbl -0x21(%ebp),%eax
082f8309 +0x1ad:  xor    $0x1,%eax
082f830c +0x1b0:  test   %al,%al
082f830e +0x1b2:  je     082f831a <+0x1be>
082f8310 +0x1b4:  mov    $0x49,%ebx
082f8315 +0x1b9:  jmp    082f842b <+0x2cf>
082f831a +0x1be:  addl   $0x1,-0x14(%ebp)
082f831e +0x1c2:  cmpl   $0x9,-0x14(%ebp)
082f8322 +0x1c6:  setle  %al
082f8325 +0x1c9:  test   %al,%al
082f8327 +0x1cb:  jne    082f82e5 <+0x189>
082f8329 +0x1cd:  jmp    082f819e <+0x42>
082f832e +0x1d2:  movl   $"[control of equipment drop prob per level range]",0x4(%esp)
082f8336 +0x1da:  lea    -0x1c(%ebp),%eax
082f8339 +0x1dd:  mov    %eax,(%esp)
082f833c +0x1e0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082f8341 +0x1e5:  test   %al,%al
082f8343 +0x1e7:  je     082f839b <+0x23f>
082f8345 +0x1e9:  movl   $0x0,-0x10(%ebp)
082f834c +0x1f0:  jmp    082f834f <+0x1f3>
082f834e +0x1f2:  nop
082f834f +0x1f3:  lea    -0x21(%ebp),%eax
082f8352 +0x1f6:  mov    %eax,(%esp)
082f8355 +0x1f9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
082f835a +0x1fe:  mov    %eax,-0x20(%ebp)
082f835d +0x201:  movzbl -0x21(%ebp),%eax
082f8361 +0x205:  xor    $0x1,%eax
082f8364 +0x208:  test   %al,%al
082f8366 +0x20a:  je     082f836e <+0x212>
082f8368 +0x20c:  nop
082f8369 +0x20d:  jmp    082f819e <+0x42>
082f836e +0x212:  mov    0x8(%ebp),%eax
082f8371 +0x215:  lea    0x3dc(%eax),%edx
082f8377 +0x21b:  lea    -0x20(%ebp),%eax
082f837a +0x21e:  mov    %eax,0x4(%esp)
082f837e +0x222:  mov    %edx,(%esp)
082f8381 +0x225:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
082f8386 +0x22a:  movzbl -0x21(%ebp),%eax
082f838a +0x22e:  xor    $0x1,%eax
082f838d +0x231:  test   %al,%al
082f838f +0x233:  je     082f834e <+0x1f2>
082f8391 +0x235:  mov    $0x57,%ebx
082f8396 +0x23a:  jmp    082f842b <+0x2cf>
082f839b +0x23f:  movl   $"[control of durability decrease rate]",0x4(%esp)
082f83a3 +0x247:  lea    -0x1c(%ebp),%eax
082f83a6 +0x24a:  mov    %eax,(%esp)
082f83a9 +0x24d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
082f83ae +0x252:  test   %al,%al
082f83b0 +0x254:  je     082f8401 <+0x2a5>
082f83b2 +0x256:  movl   $0x0,-0xc(%ebp)
082f83b9 +0x25d:  jmp    082f83f1 <+0x295>
082f83bb +0x25f:  mov    -0xc(%ebp),%ebx
082f83be +0x262:  lea    -0x21(%ebp),%eax
082f83c1 +0x265:  mov    %eax,0x4(%esp)
082f83c5 +0x269:  movl   $0x3,(%esp)
082f83cc +0x270:  call   088bc451 <_Z9ScanFloatiPb>  ; ScanFloat(int, bool*)
082f83d1 +0x275:  mov    0x8(%ebp),%eax
082f83d4 +0x278:  lea    0x7c(%ebx),%edx
082f83d7 +0x27b:  fstpl  0xc(%eax,%edx,8)
082f83db +0x27f:  movzbl -0x21(%ebp),%eax
082f83df +0x283:  xor    $0x1,%eax
082f83e2 +0x286:  test   %al,%al
082f83e4 +0x288:  je     082f83ed <+0x291>
082f83e6 +0x28a:  mov    $0x60,%ebx
082f83eb +0x28f:  jmp    082f842b <+0x2cf>
082f83ed +0x291:  addl   $0x1,-0xc(%ebp)
082f83f1 +0x295:  cmpl   $0x9,-0xc(%ebp)
082f83f5 +0x299:  setle  %al
082f83f8 +0x29c:  test   %al,%al
082f83fa +0x29e:  jne    082f83bb <+0x25f>
082f83fc +0x2a0:  jmp    082f819e <+0x42>
082f8401 +0x2a5:  mov    $0x64,%ebx
082f8406 +0x2aa:  jmp    082f842b <+0x2cf>
082f8408 +0x2ac:  nop
082f8409 +0x2ad:  mov    $0x0,%ebx
082f840e +0x2b2:  jmp    082f842b <+0x2cf>
082f8410 +0x2b4:  mov    %edx,%ebx
082f8412 +0x2b6:  mov    %eax,%esi
082f8414 +0x2b8:  lea    -0x1c(%ebp),%eax
082f8417 +0x2bb:  mov    %eax,(%esp)
082f841a +0x2be:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082f841f +0x2c3:  mov    %esi,%eax
082f8421 +0x2c5:  mov    %ebx,%edx
082f8423 +0x2c7:  mov    %eax,(%esp)
082f8426 +0x2ca:  call   08ae3750 <_Unwind_Resume>
082f842b +0x2cf:  lea    -0x1c(%ebp),%eax
082f842e +0x2d2:  mov    %eax,(%esp)
082f8431 +0x2d5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082f8436 +0x2da:  mov    %ebx,%eax
082f8438 +0x2dc:  add    $0x30,%esp
082f843b +0x2df:  pop    %ebx
082f843c +0x2e0:  pop    %esi
082f843d +0x2e1:  pop    %ebp
082f843e +0x2e2:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControl::LoadScript @ 0x82f815c

/* CAutoMarketConditionsControl::LoadScript(char const*) */

undefined4 __thiscall
CAutoMarketConditionsControl::LoadScript(CAutoMarketConditionsControl *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longdouble lVar5;
  bool local_25;
  int local_24;
  string local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_20);
    local_24 = 0;
    local_25 = false;
                    /* try { // try from 082f81ac to 082f83d0 has its CatchHandler @ 082f8410 */
    while (cVar1 = ScanType((string *)&local_20,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_20,"[control of gold drop amount rate]");
      if (bVar2) {
        for (local_1c = 0; iVar3 = local_1c, local_1c < 10; local_1c = local_1c + 1) {
          lVar5 = (longdouble)ScanFloat(3,&local_25);
          *(double *)(this + iVar3 * 8 + 4) = (double)lVar5;
          if (local_25 != true) {
            uVar4 = 0x2f;
            goto LAB_082f842b;
          }
        }
      }
      else {
        bVar2 = std::operator==(&local_20,"[control of gold drop amount rate per level]");
        if (bVar2) {
          memset(this + 0x5c,0,0x324);
          while (iVar3 = ScanInt(&local_25), local_24 = iVar3, local_25 == true) {
            if ((iVar3 < 1) || (200 < iVar3)) {
              uVar4 = 0x3c;
              goto LAB_082f842b;
            }
            uVar4 = ScanInt(&local_25);
            *(undefined4 *)(this + (iVar3 + 0x14) * 4 + 0xc) = uVar4;
            if (local_25 != true) {
              uVar4 = 0x40;
              goto LAB_082f842b;
            }
          }
        }
        else {
          bVar2 = std::operator==(&local_20,"[control of equipment drop prob]");
          if (bVar2) {
            for (local_18 = 0; iVar3 = local_18, local_18 < 10; local_18 = local_18 + 1) {
              lVar5 = (longdouble)ScanFloat(3,&local_25);
              *(double *)(this + (iVar3 + 0x70) * 8 + 4) = (double)lVar5;
              if (local_25 != true) {
                uVar4 = 0x49;
                goto LAB_082f842b;
              }
            }
          }
          else {
            bVar2 = std::operator==(&local_20,"[control of equipment drop prob per level range]");
            if (bVar2) {
              local_14 = 0;
              while (local_24 = ScanInt(&local_25), local_25 == true) {
                std::vector<int,std::allocator<int>>::push_back
                          ((vector<int,std::allocator<int>> *)(this + 0x3dc),&local_24);
                if (local_25 != true) {
                  uVar4 = 0x57;
                  goto LAB_082f842b;
                }
              }
            }
            else {
              bVar2 = std::operator==(&local_20,"[control of durability decrease rate]");
              if (!bVar2) {
                uVar4 = 100;
                goto LAB_082f842b;
              }
              for (local_10 = 0; iVar3 = local_10, local_10 < 10; local_10 = local_10 + 1) {
                lVar5 = (longdouble)ScanFloat(3,&local_25);
                *(double *)(this + (iVar3 + 0x7c) * 8 + 0xc) = (double)lVar5;
                if (local_25 != true) {
                  uVar4 = 0x60;
                  goto LAB_082f842b;
                }
              }
            }
          }
        }
      }
    }
    uVar4 = 0;
LAB_082f842b:
    std::string::~string((string *)&local_20);
  }
  else {
    uVar4 = 0x1e;
  }
  return uVar4;
}
```
