# yy_get_next_buffer

`_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv`

`__dnf_script__FlexLexer::yy_get_next_buffer()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1ea0  _ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv
#           __dnf_script__FlexLexer::yy_get_next_buffer()
# range [0x08ad1ea0, 0x08ad21b9]
08ad1ea0 +0x000:  push   %ebp
08ad1ea1 +0x001:  mov    %esp,%ebp
08ad1ea3 +0x003:  push   %edi
08ad1ea4 +0x004:  push   %esi
08ad1ea5 +0x005:  push   %ebx
08ad1ea6 +0x006:  sub    $0x5c,%esp
08ad1ea9 +0x009:  mov    0x8(%ebp),%ebx
08ad1eac +0x00c:  mov    0x48(%ebx),%eax
08ad1eaf +0x00f:  mov    0x40(%ebx),%edx
08ad1eb2 +0x012:  mov    0x30(%ebx),%edi
08ad1eb5 +0x015:  mov    %eax,-0x20(%ebp)
08ad1eb8 +0x018:  mov    (%eax,%edx,4),%ecx
08ad1ebb +0x01b:  mov    %edi,-0x1c(%ebp)
08ad1ebe +0x01e:  mov    %eax,-0x4c(%ebp)
08ad1ec1 +0x021:  mov    0x2c(%ebx),%eax
08ad1ec4 +0x024:  mov    0x4(%ecx),%esi
08ad1ec7 +0x027:  mov    %esi,-0x24(%ebp)
08ad1eca +0x02a:  mov    -0x24(%ebp),%edi
08ad1ecd +0x02d:  mov    0x4(%ebx),%esi
08ad1ed0 +0x030:  lea    0x1(%edi,%eax,1),%eax
08ad1ed4 +0x034:  cmp    %eax,-0x1c(%ebp)
08ad1ed7 +0x037:  mov    %esi,-0x3c(%ebp)
08ad1eda +0x03a:  ja     08ad20b8 <+0x218>
08ad1ee0 +0x040:  mov    0x28(%ecx),%edi
08ad1ee3 +0x043:  test   %edi,%edi
08ad1ee5 +0x045:  jne    08ad1f08 <+0x68>
08ad1ee7 +0x047:  mov    -0x1c(%ebp),%edi
08ad1eea +0x04a:  sub    -0x3c(%ebp),%edi
08ad1eed +0x04d:  cmp    $0x1,%edi
08ad1ef0 +0x050:  setne  %al
08ad1ef3 +0x053:  add    $0x5c,%esp
08ad1ef6 +0x056:  movzbl %al,%esi
08ad1ef9 +0x059:  add    $0x1,%esi
08ad1efc +0x05c:  mov    %esi,%eax
08ad1efe +0x05e:  pop    %ebx
08ad1eff +0x05f:  pop    %esi
08ad1f00 +0x060:  pop    %edi
08ad1f01 +0x061:  pop    %ebp
08ad1f02 +0x062:  ret
08ad1f03 +0x063:  nop
08ad1f04 +0x064:  lea    0x0(%esi,%eiz,1),%esi
08ad1f08 +0x068:  mov    -0x1c(%ebp),%eax
08ad1f0b +0x06b:  mov    -0x3c(%ebp),%edi
08ad1f0e +0x06e:  sub    $0x1,%eax
08ad1f11 +0x071:  sub    %edi,%eax
08ad1f13 +0x073:  test   %eax,%eax
08ad1f15 +0x075:  mov    %eax,-0x1c(%ebp)
08ad1f18 +0x078:  jle    08ad1f45 <+0xa5>
08ad1f1a +0x07a:  mov    -0x1c(%ebp),%ecx
08ad1f1d +0x07d:  xor    %eax,%eax
08ad1f1f +0x07f:  mov    -0x24(%ebp),%edi
08ad1f22 +0x082:  lea    0x0(%esi),%esi
08ad1f28 +0x088:  movzbl (%esi,%eax,1),%edx
08ad1f2c +0x08c:  mov    %dl,(%edi,%eax,1)
08ad1f2f +0x08f:  add    $0x1,%eax
08ad1f32 +0x092:  cmp    %ecx,%eax
08ad1f34 +0x094:  jne    08ad1f28 <+0x88>
08ad1f36 +0x096:  mov    0x48(%ebx),%eax
08ad1f39 +0x099:  mov    0x40(%ebx),%edx
08ad1f3c +0x09c:  mov    %eax,-0x20(%ebp)
08ad1f3f +0x09f:  mov    (%eax,%edx,4),%ecx
08ad1f42 +0x0a2:  mov    %eax,-0x4c(%ebp)
08ad1f45 +0x0a5:  cmpl   $0x2,0x2c(%ecx)
08ad1f49 +0x0a9:  je     08ad2100 <+0x260>
08ad1f4f +0x0af:  mov    -0x1c(%ebp),%esi
08ad1f52 +0x0b2:  not    %esi
08ad1f54 +0x0b4:  add    0xc(%ecx),%esi
08ad1f57 +0x0b7:  test   %esi,%esi
08ad1f59 +0x0b9:  jg     08ad1ff8 <+0x158>
08ad1f5f +0x0bf:  mov    0x30(%ebx),%edi
08ad1f62 +0x0c2:  mov    -0x4c(%ebp),%eax
08ad1f65 +0x0c5:  jmp    08ad1fb1 <+0x111>
08ad1f67 +0x0c7:  nop
08ad1f68 +0x0c8:  mov    0xc(%esi),%ecx
08ad1f6b +0x0cb:  lea    (%ecx,%ecx,1),%eax
08ad1f6e +0x0ce:  test   %eax,%eax
08ad1f70 +0x0d0:  jle    08ad1fe8 <+0x148>
08ad1f72 +0x0d2:  mov    %eax,0xc(%esi)
08ad1f75 +0x0d5:  add    $0x2,%eax
08ad1f78 +0x0d8:  mov    %eax,0x4(%esp)
08ad1f7c +0x0dc:  mov    0x4(%esi),%eax
08ad1f7f +0x0df:  mov    %edx,-0x2c(%ebp)
08ad1f82 +0x0e2:  mov    %eax,(%esp)
08ad1f85 +0x0e5:  call   0807e220 <_init+0xb18>
08ad1f8a +0x0ea:  mov    -0x2c(%ebp),%edx
08ad1f8d +0x0ed:  test   %eax,%eax
08ad1f8f +0x0ef:  mov    %eax,0x4(%esi)
08ad1f92 +0x0f2:  je     08ad1fcb <+0x12b>
08ad1f94 +0x0f4:  sub    %edx,%edi
08ad1f96 +0x0f6:  mov    0x40(%ebx),%edx
08ad1f99 +0x0f9:  lea    (%eax,%edi,1),%edi
08ad1f9c +0x0fc:  mov    0x48(%ebx),%eax
08ad1f9f +0x0ff:  mov    -0x1c(%ebp),%esi
08ad1fa2 +0x102:  mov    %edi,0x30(%ebx)
08ad1fa5 +0x105:  mov    (%eax,%edx,4),%ecx
08ad1fa8 +0x108:  not    %esi
08ad1faa +0x10a:  add    0xc(%ecx),%esi
08ad1fad +0x10d:  test   %esi,%esi
08ad1faf +0x10f:  jg     08ad1ff8 <+0x158>
08ad1fb1 +0x111:  xor    %esi,%esi
08ad1fb3 +0x113:  test   %eax,%eax
08ad1fb5 +0x115:  je     08ad1fba <+0x11a>
08ad1fb7 +0x117:  mov    (%eax,%edx,4),%esi
08ad1fba +0x11a:  mov    0x14(%esi),%eax
08ad1fbd +0x11d:  mov    0x4(%esi),%edx
08ad1fc0 +0x120:  test   %eax,%eax
08ad1fc2 +0x122:  jne    08ad1f68 <+0xc8>
08ad1fc4 +0x124:  movl   $0x0,0x4(%esi)
08ad1fcb +0x12b:  mov    (%ebx),%eax
08ad1fcd +0x12d:  mov    %edx,-0x2c(%ebp)
08ad1fd0 +0x130:  movl   $"fatal error - scanner input buffer overflow",0x4(%esp)
08ad1fd8 +0x138:  mov    %ebx,(%esp)
08ad1fdb +0x13b:  call   *0x2c(%eax)
08ad1fde +0x13e:  mov    0x4(%esi),%eax
08ad1fe1 +0x141:  mov    -0x2c(%ebp),%edx
08ad1fe4 +0x144:  jmp    08ad1f94 <+0xf4>
08ad1fe6 +0x146:  xchg   %ax,%ax
08ad1fe8 +0x148:  mov    %ecx,%eax
08ad1fea +0x14a:  shr    $0x3,%eax
08ad1fed +0x14d:  add    %ecx,%eax
08ad1fef +0x14f:  mov    %eax,0xc(%esi)
08ad1ff2 +0x152:  jmp    08ad1f75 <+0xd5>
08ad1ff4 +0x154:  lea    0x0(%esi,%eiz,1),%esi
08ad1ff8 +0x158:  cmp    $0x2000,%esi
08ad1ffe +0x15e:  mov    (%ebx),%eax
08ad2000 +0x160:  jg     08ad20f0 <+0x250>
08ad2006 +0x166:  mov    -0x1c(%ebp),%edx
08ad2009 +0x169:  mov    %esi,0x8(%esp)
08ad200d +0x16d:  add    0x4(%ecx),%edx
08ad2010 +0x170:  mov    %ebx,(%esp)
08ad2013 +0x173:  mov    %edx,0x4(%esp)
08ad2017 +0x177:  call   *0x24(%eax)
08ad201a +0x17a:  test   %eax,%eax
08ad201c +0x17c:  mov    %eax,0x2c(%ebx)
08ad201f +0x17f:  js     08ad2175 <+0x2d5>
08ad2025 +0x185:  mov    0x40(%ebx),%edx
08ad2028 +0x188:  mov    0x48(%ebx),%ecx
08ad202b +0x18b:  mov    (%ecx,%edx,4),%edx
08ad202e +0x18e:  mov    %ecx,-0x20(%ebp)
08ad2031 +0x191:  mov    %eax,0x10(%edx)
08ad2034 +0x194:  mov    0x2c(%ebx),%ecx
08ad2037 +0x197:  xor    %esi,%esi
08ad2039 +0x199:  test   %ecx,%ecx
08ad203b +0x19b:  jne    08ad2060 <+0x1c0>
08ad203d +0x19d:  mov    -0x1c(%ebp),%edi
08ad2040 +0x1a0:  test   %edi,%edi
08ad2042 +0x1a2:  je     08ad2118 <+0x278>
08ad2048 +0x1a8:  mov    0x40(%ebx),%eax
08ad204b +0x1ab:  mov    $0x2,%esi
08ad2050 +0x1b0:  mov    -0x20(%ebp),%edx
08ad2053 +0x1b3:  mov    (%edx,%eax,4),%eax
08ad2056 +0x1b6:  movl   $0x2,0x2c(%eax)
08ad205d +0x1bd:  mov    0x2c(%ebx),%ecx
08ad2060 +0x1c0:  mov    0x40(%ebx),%edx
08ad2063 +0x1c3:  mov    -0x20(%ebp),%edi
08ad2066 +0x1c6:  mov    -0x1c(%ebp),%eax
08ad2069 +0x1c9:  mov    (%edi,%edx,4),%edi
08ad206c +0x1cc:  lea    (%ecx,%eax,1),%eax
08ad206f +0x1cf:  cmp    0xc(%edi),%eax
08ad2072 +0x1d2:  mov    %edi,-0x24(%ebp)
08ad2075 +0x1d5:  ja     08ad2140 <+0x2a0>
08ad207b +0x1db:  mov    -0x20(%ebp),%ecx
08ad207e +0x1de:  mov    %eax,0x2c(%ebx)
08ad2081 +0x1e1:  mov    (%ecx,%edx,4),%edx
08ad2084 +0x1e4:  mov    0x4(%edx),%edx
08ad2087 +0x1e7:  movb   $0x0,(%edx,%eax,1)
08ad208b +0x1eb:  mov    0x40(%ebx),%edx
08ad208e +0x1ee:  mov    0x48(%ebx),%eax
08ad2091 +0x1f1:  mov    (%eax,%edx,4),%eax
08ad2094 +0x1f4:  mov    0x4(%eax),%edx
08ad2097 +0x1f7:  mov    0x2c(%ebx),%eax
08ad209a +0x1fa:  movb   $0x0,0x1(%edx,%eax,1)
08ad209f +0x1ff:  mov    0x40(%ebx),%edx
08ad20a2 +0x202:  mov    0x48(%ebx),%eax
08ad20a5 +0x205:  mov    (%eax,%edx,4),%eax
08ad20a8 +0x208:  mov    0x4(%eax),%eax
08ad20ab +0x20b:  mov    %eax,0x4(%ebx)
08ad20ae +0x20e:  add    $0x5c,%esp
08ad20b1 +0x211:  mov    %esi,%eax
08ad20b3 +0x213:  pop    %ebx
08ad20b4 +0x214:  pop    %esi
08ad20b5 +0x215:  pop    %edi
08ad20b6 +0x216:  pop    %ebp
08ad20b7 +0x217:  ret
08ad20b8 +0x218:  mov    (%ebx),%eax
08ad20ba +0x21a:  movl   $"fatal flex scanner internal error--end of buffer missed",0x4(%esp)
08ad20c2 +0x222:  mov    %ebx,(%esp)
08ad20c5 +0x225:  call   *0x2c(%eax)
08ad20c8 +0x228:  mov    0x48(%ebx),%edx
08ad20cb +0x22b:  mov    0x30(%ebx),%eax
08ad20ce +0x22e:  mov    %edx,-0x20(%ebp)
08ad20d1 +0x231:  mov    -0x20(%ebp),%edi
08ad20d4 +0x234:  mov    %edx,-0x4c(%ebp)
08ad20d7 +0x237:  mov    0x40(%ebx),%edx
08ad20da +0x23a:  mov    %eax,-0x1c(%ebp)
08ad20dd +0x23d:  mov    (%edi,%edx,4),%ecx
08ad20e0 +0x240:  mov    0x4(%ebx),%edi
08ad20e3 +0x243:  mov    %edi,-0x3c(%ebp)
08ad20e6 +0x246:  jmp    08ad1ee0 <+0x40>
08ad20eb +0x24b:  nop
08ad20ec +0x24c:  lea    0x0(%esi,%eiz,1),%esi
08ad20f0 +0x250:  mov    $0x2000,%esi
08ad20f5 +0x255:  jmp    08ad2006 <+0x166>
08ad20fa +0x25a:  lea    0x0(%esi),%esi
08ad2100 +0x260:  movl   $0x0,0x2c(%ebx)
08ad2107 +0x267:  movl   $0x0,0x10(%ecx)
08ad210e +0x26e:  jmp    08ad2034 <+0x194>
08ad2113 +0x273:  nop
08ad2114 +0x274:  lea    0x0(%esi,%eiz,1),%esi
08ad2118 +0x278:  mov    (%ebx),%eax
08ad211a +0x27a:  mov    $0x1,%si
08ad211e +0x27e:  mov    0x20(%ebx),%edx
08ad2121 +0x281:  mov    %ebx,(%esp)
08ad2124 +0x284:  mov    %edx,0x4(%esp)
08ad2128 +0x288:  call   *0x14(%eax)
08ad212b +0x28b:  mov    0x48(%ebx),%edi
08ad212e +0x28e:  mov    0x2c(%ebx),%ecx
08ad2131 +0x291:  mov    %edi,-0x20(%ebp)
08ad2134 +0x294:  jmp    08ad2060 <+0x1c0>
08ad2139 +0x299:  lea    0x0(%esi,%eiz,1),%esi
08ad2140 +0x2a0:  sar    %ecx
08ad2142 +0x2a2:  lea    (%ecx,%eax,1),%eax
08ad2145 +0x2a5:  mov    %eax,0x4(%esp)
08ad2149 +0x2a9:  mov    0x4(%edi),%eax
08ad214c +0x2ac:  mov    %eax,(%esp)
08ad214f +0x2af:  call   0807e220 <_init+0xb18>
08ad2154 +0x2b4:  mov    0x40(%ebx),%edx
08ad2157 +0x2b7:  mov    %eax,0x4(%edi)
08ad215a +0x2ba:  mov    0x48(%ebx),%eax
08ad215d +0x2bd:  mov    %eax,-0x20(%ebp)
08ad2160 +0x2c0:  mov    (%eax,%edx,4),%eax
08ad2163 +0x2c3:  mov    0x4(%eax),%ecx
08ad2166 +0x2c6:  test   %ecx,%ecx
08ad2168 +0x2c8:  je     08ad218d <+0x2ed>
08ad216a +0x2ca:  mov    -0x1c(%ebp),%eax
08ad216d +0x2cd:  add    0x2c(%ebx),%eax
08ad2170 +0x2d0:  jmp    08ad207b <+0x1db>
08ad2175 +0x2d5:  mov    (%ebx),%eax
08ad2177 +0x2d7:  movl   $"input in flex scanner failed",0x4(%esp)
08ad217f +0x2df:  mov    %ebx,(%esp)
08ad2182 +0x2e2:  call   *0x2c(%eax)
08ad2185 +0x2e5:  mov    0x2c(%ebx),%eax
08ad2188 +0x2e8:  jmp    08ad2025 <+0x185>
08ad218d +0x2ed:  mov    (%ebx),%eax
08ad218f +0x2ef:  movl   $"out of dynamic memory in yy_get_next_buffer()",0x4(%esp)
08ad2197 +0x2f7:  mov    %ebx,(%esp)
08ad219a +0x2fa:  call   *0x2c(%eax)
08ad219d +0x2fd:  mov    0x48(%ebx),%edi
08ad21a0 +0x300:  mov    -0x1c(%ebp),%eax
08ad21a3 +0x303:  add    0x2c(%ebx),%eax
08ad21a6 +0x306:  mov    0x40(%ebx),%edx
08ad21a9 +0x309:  mov    %edi,-0x20(%ebp)
08ad21ac +0x30c:  jmp    08ad207b <+0x1db>
08ad21b1 +0x311:  nop
08ad21b2 +0x312:  lea    0x0(%esi,%eiz,1),%esi
08ad21b9 +0x319:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_get_next_buffer @ 0x8ad1ea0

/* DWARF original prototype: int yy_get_next_buffer(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yy_get_next_buffer(__dnf_script__FlexLexer *this)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  yy_size_t yVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  yy_buffer_state *pyVar8;
  int iVar9;
  char *local_40;
  yy_buffer_state **local_24;
  char *local_20;
  
                    /* Unresolved local var: char * dest@[???]
                       Unresolved local var: char * source@[???]
                       Unresolved local var: int number_to_move@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int ret_val@[???] */
  local_24 = this->yy_buffer_stack;
  sVar6 = this->yy_buffer_stack_top;
  local_20 = this->yy_c_buf_p;
  pyVar8 = local_24[sVar6];
  pcVar5 = pyVar8->yy_ch_buf;
  pcVar1 = (this->super_FlexLexer).yytext;
  local_40 = pcVar1;
  if (pcVar5 + this->yy_n_chars + 1 < local_20) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
              (this,"fatal flex scanner internal error--end of buffer missed");
    local_24 = this->yy_buffer_stack;
    local_20 = this->yy_c_buf_p;
    sVar6 = this->yy_buffer_stack_top;
    pyVar8 = local_24[sVar6];
    local_40 = (this->super_FlexLexer).yytext;
  }
  if (pyVar8->yy_fill_buffer == 0) {
    return ((int)local_20 - (int)local_40 != 1) + 1;
  }
  local_20 = local_20 + (-1 - (int)local_40);
  if (0 < (int)local_20) {
    pcVar3 = (char *)0x0;
    do {
      pcVar5[(int)pcVar3] = pcVar1[(int)pcVar3];
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != local_20);
    local_24 = this->yy_buffer_stack;
    sVar6 = this->yy_buffer_stack_top;
    pyVar8 = local_24[sVar6];
  }
  if (pyVar8->yy_buffer_status == 2) {
    this->yy_n_chars = 0;
    pyVar8->yy_n_chars = 0;
  }
  else {
                    /* Unresolved local var: int num_to_read@[???] */
    iVar7 = ~(uint)local_20 + pyVar8->yy_buf_size;
    if (iVar7 < 1) {
      pcVar5 = this->yy_c_buf_p;
      do {
        pyVar8 = (yy_buffer_state *)0x0;
        if (local_24 != (yy_buffer_state **)0x0) {
          pyVar8 = local_24[sVar6];
        }
        pcVar1 = pyVar8->yy_ch_buf;
        if (pyVar8->yy_is_our_buffer == 0) {
          pyVar8->yy_ch_buf = (char *)0x0;
LAB_08ad1fcb:
          (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                    (this,"fatal error - scanner input buffer overflow");
          pcVar3 = pyVar8->yy_ch_buf;
        }
        else {
                    /* Unresolved local var: YY_BUFFER_STATE b@[???]
                       Unresolved local var: int yy_c_buf_p_offset@[???]
                       Unresolved local var: int new_size@[???] */
          uVar2 = pyVar8->yy_buf_size;
          yVar4 = uVar2 * 2;
          if ((int)yVar4 < 1) {
            yVar4 = (uVar2 >> 3) + uVar2;
            pyVar8->yy_buf_size = yVar4;
          }
          else {
            pyVar8->yy_buf_size = yVar4;
          }
          pcVar3 = realloc(pyVar8->yy_ch_buf,yVar4 + 2);
          pyVar8->yy_ch_buf = pcVar3;
          if (pcVar3 == (char *)0x0) goto LAB_08ad1fcb;
        }
        sVar6 = this->yy_buffer_stack_top;
        pcVar5 = pcVar3 + ((int)pcVar5 - (int)pcVar1);
        local_24 = this->yy_buffer_stack;
        this->yy_c_buf_p = pcVar5;
        pyVar8 = local_24[sVar6];
        iVar7 = ~(uint)local_20 + pyVar8->yy_buf_size;
      } while (iVar7 < 1);
    }
    if (0x2000 < iVar7) {
      iVar7 = 0x2000;
    }
    iVar7 = (*(this->super_FlexLexer)._vptr_FlexLexer[9])
                      (this,pyVar8->yy_ch_buf + (int)local_20,iVar7);
    this->yy_n_chars = iVar7;
    if (iVar7 < 0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])(this,"input in flex scanner failed");
      iVar7 = this->yy_n_chars;
    }
    local_24 = this->yy_buffer_stack;
    local_24[this->yy_buffer_stack_top]->yy_n_chars = iVar7;
  }
  iVar7 = this->yy_n_chars;
  iVar9 = 0;
  if (iVar7 == 0) {
    if (local_20 == (char *)0x0) {
      iVar9 = 1;
      (*(this->super_FlexLexer)._vptr_FlexLexer[5])(this,this->yyin);
      local_24 = this->yy_buffer_stack;
      iVar7 = this->yy_n_chars;
    }
    else {
      iVar9 = 2;
      local_24[this->yy_buffer_stack_top]->yy_buffer_status = 2;
      iVar7 = this->yy_n_chars;
    }
  }
  sVar6 = this->yy_buffer_stack_top;
  pyVar8 = local_24[sVar6];
  pcVar5 = local_20 + iVar7;
  if ((char *)pyVar8->yy_buf_size < pcVar5) {
                    /* Unresolved local var: yy_size_t new_size@[???] */
    pcVar5 = realloc(pyVar8->yy_ch_buf,(size_t)(pcVar5 + (iVar7 >> 1)));
    sVar6 = this->yy_buffer_stack_top;
    pyVar8->yy_ch_buf = pcVar5;
    local_24 = this->yy_buffer_stack;
    if (local_24[sVar6]->yy_ch_buf == (char *)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of dynamic memory in yy_get_next_buffer()");
      local_24 = this->yy_buffer_stack;
      pcVar5 = local_20 + this->yy_n_chars;
      sVar6 = this->yy_buffer_stack_top;
    }
    else {
      pcVar5 = local_20 + this->yy_n_chars;
    }
  }
  this->yy_n_chars = (int)pcVar5;
  local_24[sVar6]->yy_ch_buf[(int)pcVar5] = '\0';
  this->yy_buffer_stack[this->yy_buffer_stack_top]->yy_ch_buf[this->yy_n_chars + 1] = '\0';
  (this->super_FlexLexer).yytext = this->yy_buffer_stack[this->yy_buffer_stack_top]->yy_ch_buf;
  return iVar9;
}
```
