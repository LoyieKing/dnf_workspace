# writeStringFile

`_ZN23RDARScriptStringManager15writeStringFileEi`

`RDARScriptStringManager::writeStringFile(int)`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa50bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa50bc  _ZN23RDARScriptStringManager15writeStringFileEi
#           RDARScriptStringManager::writeStringFile(int)
# range [0x08aa50bc, 0x08aa529d]
08aa50bc +0x000:  push   %ebp
08aa50bd +0x001:  mov    %esp,%ebp
08aa50bf +0x003:  push   %ebx
08aa50c0 +0x004:  sub    $0x644,%esp
08aa50c6 +0x00a:  mov    0x8(%ebp),%eax
08aa50c9 +0x00d:  mov    0xc(%ebp),%edx
08aa50cc +0x010:  mov    %edx,0x4(%esp)
08aa50d0 +0x014:  mov    %eax,(%esp)
08aa50d3 +0x017:  call   088bad4e <_ZNK16STScriptFileList11GetFileNameEi>  ; STScriptFileList::GetFileName(int) const
08aa50d8 +0x01c:  mov    %eax,0x8(%esp)
08aa50dc +0x020:  movl   $"Script/%s",0x4(%esp)
08aa50e4 +0x028:  lea    -0x22c(%ebp),%eax
08aa50ea +0x02e:  mov    %eax,(%esp)
08aa50ed +0x031:  call   08aa687c <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x15e>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x15e
08aa50f2 +0x036:  movl   $"w",0x4(%esp)
08aa50fa +0x03e:  lea    -0x22c(%ebp),%eax
08aa5100 +0x044:  mov    %eax,(%esp)
08aa5103 +0x047:  call   0807e770 <_init+0x1068>
08aa5108 +0x04c:  mov    %eax,-0x2c(%ebp)
08aa510b +0x04f:  cmpl   $0x0,-0x2c(%ebp)
08aa510f +0x053:  setne  %al
08aa5112 +0x056:  test   %al,%al
08aa5114 +0x058:  je     08aa5290 <+0x1d4>
08aa511a +0x05e:  mov    0xc(%ebp),%ebx
08aa511d +0x061:  mov    0x8(%ebp),%eax
08aa5120 +0x064:  add    $0x18,%eax
08aa5123 +0x067:  mov    %eax,(%esp)
08aa5126 +0x06a:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa512b +0x06f:  cmp    %eax,%ebx
08aa512d +0x071:  setb   %al
08aa5130 +0x074:  test   %al,%al
08aa5132 +0x076:  je     08aa527e <+0x1c2>
08aa5138 +0x07c:  mov    0xc(%ebp),%eax
08aa513b +0x07f:  mov    0x8(%ebp),%edx
08aa513e +0x082:  add    $0x18,%edx
08aa5141 +0x085:  mov    %eax,0x4(%esp)
08aa5145 +0x089:  mov    %edx,(%esp)
08aa5148 +0x08c:  call   08aa68ce <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1b0>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1b0
08aa514d +0x091:  mov    %eax,-0x28(%ebp)
08aa5150 +0x094:  movl   $0x0,-0x24(%ebp)
08aa5157 +0x09b:  jmp    08aa5263 <+0x1a7>
08aa515c +0x0a0:  mov    -0x28(%ebp),%eax
08aa515f +0x0a3:  mov    (%eax),%eax
08aa5161 +0x0a5:  mov    -0x24(%ebp),%edx
08aa5164 +0x0a8:  mov    %edx,0x4(%esp)
08aa5168 +0x0ac:  mov    %eax,(%esp)
08aa516b +0x0af:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5170 +0x0b4:  mov    %eax,-0x20(%ebp)
08aa5173 +0x0b7:  mov    -0x28(%ebp),%eax
08aa5176 +0x0ba:  mov    (%eax),%eax
08aa5178 +0x0bc:  mov    -0x24(%ebp),%edx
08aa517b +0x0bf:  mov    %edx,0x4(%esp)
08aa517f +0x0c3:  mov    %eax,(%esp)
08aa5182 +0x0c6:  call   08ab2668 <_ZNK16StringDictionary8getValueEi>  ; StringDictionary::getValue(int) const
08aa5187 +0x0cb:  mov    %eax,0x4(%esp)
08aa518b +0x0cf:  lea    -0x62c(%ebp),%eax
08aa5191 +0x0d5:  mov    %eax,(%esp)
08aa5194 +0x0d8:  call   0807def0 <_init+0x7e8>
08aa5199 +0x0dd:  cmpl   $0x0,-0x20(%ebp)
08aa519d +0x0e1:  je     08aa525f <+0x1a3>
08aa51a3 +0x0e7:  lea    -0x62c(%ebp),%eax
08aa51a9 +0x0ed:  mov    %eax,-0x1c(%ebp)
08aa51ac +0x0f0:  jmp    08aa5228 <+0x16c>
08aa51ae +0x0f2:  mov    -0x1c(%ebp),%eax
08aa51b1 +0x0f5:  movzbl (%eax),%eax
08aa51b4 +0x0f8:  cmp    $0xa,%al
08aa51b6 +0x0fa:  jne    08aa5224 <+0x168>
08aa51b8 +0x0fc:  movl   $0x1,-0x18(%ebp)
08aa51bf +0x103:  mov    -0x1c(%ebp),%eax
08aa51c2 +0x106:  add    $0x1,%eax
08aa51c5 +0x109:  mov    %eax,-0x10(%ebp)
08aa51c8 +0x10c:  jmp    08aa51d2 <+0x116>
08aa51ca +0x10e:  addl   $0x1,-0x18(%ebp)
08aa51ce +0x112:  addl   $0x1,-0x10(%ebp)
08aa51d2 +0x116:  mov    -0x10(%ebp),%eax
08aa51d5 +0x119:  movzbl (%eax),%eax
08aa51d8 +0x11c:  test   %al,%al
08aa51da +0x11e:  setne  %al
08aa51dd +0x121:  test   %al,%al
08aa51df +0x123:  jne    08aa51ca <+0x10e>
08aa51e1 +0x125:  mov    -0x18(%ebp),%eax
08aa51e4 +0x128:  add    -0x1c(%ebp),%eax
08aa51e7 +0x12b:  mov    %eax,-0x14(%ebp)
08aa51ea +0x12e:  mov    -0x18(%ebp),%eax
08aa51ed +0x131:  mov    %eax,-0xc(%ebp)
08aa51f0 +0x134:  jmp    08aa5208 <+0x14c>
08aa51f2 +0x136:  mov    -0x14(%ebp),%eax
08aa51f5 +0x139:  lea    0x1(%eax),%edx
08aa51f8 +0x13c:  mov    -0x14(%ebp),%eax
08aa51fb +0x13f:  movzbl (%eax),%eax
08aa51fe +0x142:  mov    %al,(%edx)
08aa5200 +0x144:  subl   $0x1,-0xc(%ebp)
08aa5204 +0x148:  subl   $0x1,-0x14(%ebp)
08aa5208 +0x14c:  mov    -0xc(%ebp),%eax
08aa520b +0x14f:  not    %eax
08aa520d +0x151:  shr    $0x1f,%eax
08aa5210 +0x154:  test   %al,%al
08aa5212 +0x156:  jne    08aa51f2 <+0x136>
08aa5214 +0x158:  mov    -0x1c(%ebp),%eax
08aa5217 +0x15b:  movb   $0x5c,(%eax)
08aa521a +0x15e:  addl   $0x1,-0x1c(%ebp)
08aa521e +0x162:  mov    -0x1c(%ebp),%eax
08aa5221 +0x165:  movb   $0x6e,(%eax)
08aa5224 +0x168:  addl   $0x1,-0x1c(%ebp)
08aa5228 +0x16c:  mov    -0x1c(%ebp),%eax
08aa522b +0x16f:  movzbl (%eax),%eax
08aa522e +0x172:  test   %al,%al
08aa5230 +0x174:  setne  %al
08aa5233 +0x177:  test   %al,%al
08aa5235 +0x179:  jne    08aa51ae <+0xf2>
08aa523b +0x17f:  lea    -0x62c(%ebp),%eax
08aa5241 +0x185:  mov    %eax,0xc(%esp)
08aa5245 +0x189:  mov    -0x20(%ebp),%eax
08aa5248 +0x18c:  mov    %eax,0x8(%esp)
08aa524c +0x190:  movl   $"%s>%s\n",0x4(%esp)
08aa5254 +0x198:  mov    -0x2c(%ebp),%eax
08aa5257 +0x19b:  mov    %eax,(%esp)
08aa525a +0x19e:  call   0807da90 <_init+0x388>
08aa525f +0x1a3:  addl   $0x1,-0x24(%ebp)
08aa5263 +0x1a7:  mov    -0x28(%ebp),%eax
08aa5266 +0x1aa:  mov    (%eax),%eax
08aa5268 +0x1ac:  mov    %eax,(%esp)
08aa526b +0x1af:  call   08ab2612 <_ZNK16StringDictionary8getCountEv>  ; StringDictionary::getCount() const
08aa5270 +0x1b4:  cmp    -0x24(%ebp),%eax
08aa5273 +0x1b7:  setg   %al
08aa5276 +0x1ba:  test   %al,%al
08aa5278 +0x1bc:  jne    08aa515c <+0xa0>
08aa527e +0x1c2:  mov    -0x2c(%ebp),%eax
08aa5281 +0x1c5:  mov    %eax,(%esp)
08aa5284 +0x1c8:  call   0807dea0 <_init+0x798>
08aa5289 +0x1cd:  mov    $0x1,%eax
08aa528e +0x1d2:  jmp    08aa5295 <+0x1d9>
08aa5290 +0x1d4:  mov    $0x0,%eax
08aa5295 +0x1d9:  add    $0x644,%esp
08aa529b +0x1df:  pop    %ebx
08aa529c +0x1e0:  pop    %ebp
08aa529d +0x1e1:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::writeStringFile @ 0x8aa50bc

/* RDARScriptStringManager::writeStringFile(int) */

undefined4 __thiscall
RDARScriptStringManager::writeStringFile(RDARScriptStringManager *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *__src;
  int iVar3;
  char local_630 [1024];
  char local_230 [512];
  FILE *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  int local_10;
  
  uVar1 = STScriptFileList::GetFileName((int)this);
  ss_sprintf<512u>(local_230,"Script/%s",uVar1);
  local_30 = fopen(local_230,"w");
  if (local_30 == (FILE *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                      ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18))
    ;
    if ((uint)param_1 < uVar2) {
      local_2c = (undefined4 *)
                 std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                           ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                            (this + 0x18),param_1);
      local_28 = 0;
      while( true ) {
        iVar3 = StringDictionary::getCount((StringDictionary *)*local_2c);
        if (iVar3 <= local_28) break;
        local_24 = StringDictionary::getKey((StringDictionary *)*local_2c,local_28);
        __src = (char *)StringDictionary::getValue((StringDictionary *)*local_2c,local_28);
        strcpy(local_630,__src);
        if (local_24 != 0) {
          for (local_20 = local_630; *local_20 != '\0'; local_20 = local_20 + 1) {
            if (*local_20 == '\n') {
              local_1c = 1;
              local_14 = local_20;
              while (local_14 = local_14 + 1, *local_14 != '\0') {
                local_1c = local_1c + 1;
              }
              local_18 = local_20 + local_1c;
              for (local_10 = local_1c; -1 < local_10; local_10 = local_10 + -1) {
                local_18[1] = *local_18;
                local_18 = local_18 + -1;
              }
              *local_20 = '\\';
              local_20 = local_20 + 1;
              *local_20 = 'n';
            }
          }
          fprintf(local_30,"%s>%s\n",local_24,local_630);
        }
        local_28 = local_28 + 1;
      }
    }
    fclose(local_30);
    uVar1 = 1;
  }
  return uVar1;
}
```
