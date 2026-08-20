# CTitleBook

`_GLOBAL__I__ZN10CTitleBookC2Ev`

`global constructors keyed to CTitleBook::CTitleBook()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CTitleBook` | `0x0864312f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864312f  _GLOBAL__I__ZN10CTitleBookC2Ev
#           global constructors keyed to CTitleBook::CTitleBook()
# range [0x0864312f, 0x0864344b]
0864312f +0x000:  push   %ebp
08643130 +0x001:  mov    %esp,%ebp
08643132 +0x003:  sub    $0x18,%esp
08643135 +0x006:  movl   $0xffff,0x4(%esp)
0864313d +0x00e:  movl   $0x1,(%esp)
08643144 +0x015:  call   086430ef <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08643149 +0x01a:  leave
0864314a +0x01b:  ret
0864314b +0x01c:  nop
0864314c +0x01d:  push   %ebp
0864314d +0x01e:  mov    %esp,%ebp
0864314f +0x020:  sub    $0x18,%esp
08643152 +0x023:  mov    0x8(%ebp),%eax
08643155 +0x026:  mov    (%eax),%eax
08643157 +0x028:  mov    %eax,(%esp)
0864315a +0x02b:  call   086431d0 <+0xa1>
0864315f +0x030:  leave
08643160 +0x031:  ret
08643161 +0x032:  nop
08643162 +0x033:  push   %ebp
08643163 +0x034:  mov    %esp,%ebp
08643165 +0x036:  mov    0x8(%ebp),%eax
08643168 +0x039:  mov    (%eax),%ecx
0864316a +0x03b:  mov    0xc(%ebp),%edx
0864316d +0x03e:  mov    %edx,%eax
0864316f +0x040:  shl    $0x2,%eax
08643172 +0x043:  add    %edx,%eax
08643174 +0x045:  shl    $0x3,%eax
08643177 +0x048:  lea    (%ecx,%eax,1),%eax
0864317a +0x04b:  pop    %ebp
0864317b +0x04c:  ret
0864317c +0x04d:  push   %ebp
0864317d +0x04e:  mov    %esp,%ebp
0864317f +0x050:  push   %esi
08643180 +0x051:  push   %ebx
08643181 +0x052:  sub    $0x30,%esp
08643184 +0x055:  mov    0x8(%ebp),%ebx
08643187 +0x058:  lea    -0x9(%ebp),%eax
0864318a +0x05b:  lea    0xc(%ebp),%edx
0864318d +0x05e:  mov    %edx,0x4(%esp)
08643191 +0x062:  mov    %eax,(%esp)
08643194 +0x065:  call   080fa195 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x9a1>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x9a1
08643199 +0x06a:  sub    $0x4,%esp
0864319c +0x06d:  mov    %esi,%eax
0864319e +0x06f:  mov    %al,0x10(%esp)
086431a2 +0x073:  mov    0x14(%ebp),%eax
086431a5 +0x076:  mov    %eax,0xc(%esp)
086431a9 +0x07a:  mov    0x10(%ebp),%eax
086431ac +0x07d:  mov    %eax,0x8(%esp)
086431b0 +0x081:  mov    0xc(%ebp),%eax
086431b3 +0x084:  mov    %eax,0x4(%esp)
086431b7 +0x088:  mov    %ebx,(%esp)
086431ba +0x08b:  call   0864323a <+0x10b>
086431bf +0x090:  sub    $0x4,%esp
086431c2 +0x093:  mov    %ebx,%eax
086431c4 +0x095:  lea    -0x8(%ebp),%esp
086431c7 +0x098:  add    $0x0,%esp
086431ca +0x09b:  pop    %ebx
086431cb +0x09c:  pop    %esi
086431cc +0x09d:  pop    %ebp
086431cd +0x09e:  ret    $0x4
086431d0 +0x0a1:  push   %ebp
086431d1 +0x0a2:  mov    %esp,%ebp
086431d3 +0x0a4:  sub    $0x28,%esp
086431d6 +0x0a7:  jmp    086431f4 <+0xc5>
086431d8 +0x0a9:  mov    0x8(%ebp),%eax
086431db +0x0ac:  mov    %eax,(%esp)
086431de +0x0af:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
086431e3 +0x0b4:  add    %eax,%eax
086431e5 +0x0b6:  mov    %eax,0x4(%esp)
086431e9 +0x0ba:  mov    0x8(%ebp),%eax
086431ec +0x0bd:  mov    %eax,(%esp)
086431ef +0x0c0:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
086431f4 +0x0c5:  movl   $0x6b3e,0x4(%esp)
086431fc +0x0cd:  mov    0x8(%ebp),%eax
086431ff +0x0d0:  mov    %eax,(%esp)
08643202 +0x0d3:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08643207 +0x0d8:  xor    $0x1,%eax
0864320a +0x0db:  test   %al,%al
0864320c +0x0dd:  jne    086431d8 <+0xa9>
0864320e +0x0df:  mov    0x8(%ebp),%eax
08643211 +0x0e2:  mov    0x8(%eax),%eax
08643214 +0x0e5:  mov    %eax,%edx
08643216 +0x0e7:  mov    0x8(%ebp),%eax
08643219 +0x0ea:  mov    0xc(%eax),%eax
0864321c +0x0ed:  lea    (%edx,%eax,1),%eax
0864321f +0x0f0:  mov    %eax,-0xc(%ebp)
08643222 +0x0f3:  movl   $0x6b3e,0x4(%esp)
0864322a +0x0fb:  mov    0x8(%ebp),%eax
0864322d +0x0fe:  mov    %eax,(%esp)
08643230 +0x101:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08643235 +0x106:  mov    -0xc(%ebp),%eax
08643238 +0x109:  leave
08643239 +0x10a:  ret
0864323a +0x10b:  push   %ebp
0864323b +0x10c:  mov    %esp,%ebp
0864323d +0x10e:  push   %ebx
0864323e +0x10f:  sub    $0x24,%esp
08643241 +0x112:  mov    0x8(%ebp),%ebx
08643244 +0x115:  lea    0xc(%ebp),%eax
08643247 +0x118:  mov    %eax,0x4(%esp)
0864324b +0x11c:  lea    0x10(%ebp),%eax
0864324e +0x11f:  mov    %eax,(%esp)
08643251 +0x122:  call   0808e87b <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x6eb>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x6eb
08643256 +0x127:  sar    $0x2,%eax
08643259 +0x12a:  mov    %eax,-0xc(%ebp)
0864325c +0x12d:  jmp    0864332d <+0x1fe>
08643261 +0x132:  lea    0xc(%ebp),%eax
08643264 +0x135:  mov    %eax,(%esp)
08643267 +0x138:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0864326c +0x13d:  mov    (%eax),%eax
0864326e +0x13f:  mov    %eax,%edx
08643270 +0x141:  mov    0x14(%ebp),%eax
08643273 +0x144:  mov    (%eax),%eax
08643275 +0x146:  cmp    %eax,%edx
08643277 +0x148:  sete   %al
0864327a +0x14b:  test   %al,%al
0864327c +0x14d:  je     08643288 <+0x159>
0864327e +0x14f:  mov    0xc(%ebp),%eax
08643281 +0x152:  mov    %eax,(%ebx)
08643283 +0x154:  jmp    086433f4 <+0x2c5>
08643288 +0x159:  lea    0xc(%ebp),%eax
0864328b +0x15c:  mov    %eax,(%esp)
0864328e +0x15f:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08643293 +0x164:  lea    0xc(%ebp),%eax
08643296 +0x167:  mov    %eax,(%esp)
08643299 +0x16a:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0864329e +0x16f:  mov    (%eax),%eax
086432a0 +0x171:  mov    %eax,%edx
086432a2 +0x173:  mov    0x14(%ebp),%eax
086432a5 +0x176:  mov    (%eax),%eax
086432a7 +0x178:  cmp    %eax,%edx
086432a9 +0x17a:  sete   %al
086432ac +0x17d:  test   %al,%al
086432ae +0x17f:  je     086432ba <+0x18b>
086432b0 +0x181:  mov    0xc(%ebp),%eax
086432b3 +0x184:  mov    %eax,(%ebx)
086432b5 +0x186:  jmp    086433f4 <+0x2c5>
086432ba +0x18b:  lea    0xc(%ebp),%eax
086432bd +0x18e:  mov    %eax,(%esp)
086432c0 +0x191:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
086432c5 +0x196:  lea    0xc(%ebp),%eax
086432c8 +0x199:  mov    %eax,(%esp)
086432cb +0x19c:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086432d0 +0x1a1:  mov    (%eax),%eax
086432d2 +0x1a3:  mov    %eax,%edx
086432d4 +0x1a5:  mov    0x14(%ebp),%eax
086432d7 +0x1a8:  mov    (%eax),%eax
086432d9 +0x1aa:  cmp    %eax,%edx
086432db +0x1ac:  sete   %al
086432de +0x1af:  test   %al,%al
086432e0 +0x1b1:  je     086432ec <+0x1bd>
086432e2 +0x1b3:  mov    0xc(%ebp),%eax
086432e5 +0x1b6:  mov    %eax,(%ebx)
086432e7 +0x1b8:  jmp    086433f4 <+0x2c5>
086432ec +0x1bd:  lea    0xc(%ebp),%eax
086432ef +0x1c0:  mov    %eax,(%esp)
086432f2 +0x1c3:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
086432f7 +0x1c8:  lea    0xc(%ebp),%eax
086432fa +0x1cb:  mov    %eax,(%esp)
086432fd +0x1ce:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08643302 +0x1d3:  mov    (%eax),%eax
08643304 +0x1d5:  mov    %eax,%edx
08643306 +0x1d7:  mov    0x14(%ebp),%eax
08643309 +0x1da:  mov    (%eax),%eax
0864330b +0x1dc:  cmp    %eax,%edx
0864330d +0x1de:  sete   %al
08643310 +0x1e1:  test   %al,%al
08643312 +0x1e3:  je     0864331e <+0x1ef>
08643314 +0x1e5:  mov    0xc(%ebp),%eax
08643317 +0x1e8:  mov    %eax,(%ebx)
08643319 +0x1ea:  jmp    086433f4 <+0x2c5>
0864331e +0x1ef:  lea    0xc(%ebp),%eax
08643321 +0x1f2:  mov    %eax,(%esp)
08643324 +0x1f5:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08643329 +0x1fa:  subl   $0x1,-0xc(%ebp)
0864332d +0x1fe:  cmpl   $0x0,-0xc(%ebp)
08643331 +0x202:  setg   %al
08643334 +0x205:  test   %al,%al
08643336 +0x207:  jne    08643261 <+0x132>
0864333c +0x20d:  lea    0xc(%ebp),%eax
0864333f +0x210:  mov    %eax,0x4(%esp)
08643343 +0x214:  lea    0x10(%ebp),%eax
08643346 +0x217:  mov    %eax,(%esp)
08643349 +0x21a:  call   0808e87b <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x6eb>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x6eb
0864334e +0x21f:  cmp    $0x2,%eax
08643351 +0x222:  je     08643391 <+0x262>
08643353 +0x224:  cmp    $0x3,%eax
08643356 +0x227:  je     08643362 <+0x233>
08643358 +0x229:  cmp    $0x1,%eax
0864335b +0x22c:  je     086433c0 <+0x291>
0864335d +0x22e:  jmp    086433ef <+0x2c0>
08643362 +0x233:  lea    0xc(%ebp),%eax
08643365 +0x236:  mov    %eax,(%esp)
08643368 +0x239:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0864336d +0x23e:  mov    (%eax),%eax
0864336f +0x240:  mov    %eax,%edx
08643371 +0x242:  mov    0x14(%ebp),%eax
08643374 +0x245:  mov    (%eax),%eax
08643376 +0x247:  cmp    %eax,%edx
08643378 +0x249:  sete   %al
0864337b +0x24c:  test   %al,%al
0864337d +0x24e:  je     08643386 <+0x257>
0864337f +0x250:  mov    0xc(%ebp),%eax
08643382 +0x253:  mov    %eax,(%ebx)
08643384 +0x255:  jmp    086433f4 <+0x2c5>
08643386 +0x257:  lea    0xc(%ebp),%eax
08643389 +0x25a:  mov    %eax,(%esp)
0864338c +0x25d:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08643391 +0x262:  lea    0xc(%ebp),%eax
08643394 +0x265:  mov    %eax,(%esp)
08643397 +0x268:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0864339c +0x26d:  mov    (%eax),%eax
0864339e +0x26f:  mov    %eax,%edx
086433a0 +0x271:  mov    0x14(%ebp),%eax
086433a3 +0x274:  mov    (%eax),%eax
086433a5 +0x276:  cmp    %eax,%edx
086433a7 +0x278:  sete   %al
086433aa +0x27b:  test   %al,%al
086433ac +0x27d:  je     086433b5 <+0x286>
086433ae +0x27f:  mov    0xc(%ebp),%eax
086433b1 +0x282:  mov    %eax,(%ebx)
086433b3 +0x284:  jmp    086433f4 <+0x2c5>
086433b5 +0x286:  lea    0xc(%ebp),%eax
086433b8 +0x289:  mov    %eax,(%esp)
086433bb +0x28c:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
086433c0 +0x291:  lea    0xc(%ebp),%eax
086433c3 +0x294:  mov    %eax,(%esp)
086433c6 +0x297:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086433cb +0x29c:  mov    (%eax),%eax
086433cd +0x29e:  mov    %eax,%edx
086433cf +0x2a0:  mov    0x14(%ebp),%eax
086433d2 +0x2a3:  mov    (%eax),%eax
086433d4 +0x2a5:  cmp    %eax,%edx
086433d6 +0x2a7:  sete   %al
086433d9 +0x2aa:  test   %al,%al
086433db +0x2ac:  je     086433e4 <+0x2b5>
086433dd +0x2ae:  mov    0xc(%ebp),%eax
086433e0 +0x2b1:  mov    %eax,(%ebx)
086433e2 +0x2b3:  jmp    086433f4 <+0x2c5>
086433e4 +0x2b5:  lea    0xc(%ebp),%eax
086433e7 +0x2b8:  mov    %eax,(%esp)
086433ea +0x2bb:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
086433ef +0x2c0:  mov    0x10(%ebp),%eax
086433f2 +0x2c3:  mov    %eax,(%ebx)
086433f4 +0x2c5:  mov    %ebx,%eax
086433f6 +0x2c7:  add    $0x24,%esp
086433f9 +0x2ca:  pop    %ebx
086433fa +0x2cb:  pop    %ebp
086433fb +0x2cc:  ret    $0x4
086433fe +0x2cf:  push   %ebp
086433ff +0x2d0:  mov    %esp,%ebp
08643401 +0x2d2:  sub    $0x18,%esp
08643404 +0x2d5:  mov    0x8(%ebp),%eax
08643407 +0x2d8:  movl   $&_ZTV10CTitleBook+0x8,(%eax)
0864340d +0x2de:  mov    0x8(%ebp),%eax
08643410 +0x2e1:  mov    %eax,(%esp)
08643413 +0x2e4:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
08643418 +0x2e9:  mov    $0x0,%eax
0864341d +0x2ee:  test   %al,%al
0864341f +0x2f0:  je     0864342c <+0x2fd>
08643421 +0x2f2:  mov    0x8(%ebp),%eax
08643424 +0x2f5:  mov    %eax,(%esp)
08643427 +0x2f8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864342c +0x2fd:  leave
0864342d +0x2fe:  ret
0864342e +0x2ff:  push   %ebp
0864342f +0x300:  mov    %esp,%ebp
08643431 +0x302:  sub    $0x18,%esp
08643434 +0x305:  mov    0x8(%ebp),%eax
08643437 +0x308:  mov    %eax,(%esp)
0864343a +0x30b:  call   086433fe <+0x2cf>
0864343f +0x310:  mov    0x8(%ebp),%eax
08643442 +0x313:  mov    %eax,(%esp)
08643445 +0x316:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0864344a +0x31b:  leave
0864344b +0x31c:  ret
```

## 反编译 C

```c
// <global>::global @ 0x864312f

/* CTitleBook::CTitleBook() */

void CTitleBook::_GLOBAL__I_CTitleBook(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
