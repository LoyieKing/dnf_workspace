# yyunput

`_ZN25__slang_filter__FlexLexer7yyunputEiPc`

`__slang_filter__FlexLexer::yyunput(int, char*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080941ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080941ba  _ZN25__slang_filter__FlexLexer7yyunputEiPc
#           __slang_filter__FlexLexer::yyunput(int, char*)
# range [0x080941ba, 0x08094343]
080941ba +0x000:  push   %ebp
080941bb +0x001:  mov    %esp,%ebp
080941bd +0x003:  push   %edi
080941be +0x004:  push   %esi
080941bf +0x005:  push   %ebx
080941c0 +0x006:  sub    $0x1c,%esp
080941c3 +0x009:  mov    0x8(%ebp),%eax
080941c6 +0x00c:  mov    0x30(%eax),%ebx
080941c9 +0x00f:  mov    0x8(%ebp),%eax
080941cc +0x012:  movzbl 0x28(%eax),%eax
080941d0 +0x016:  mov    %al,(%ebx)
080941d2 +0x018:  mov    0x8(%ebp),%eax
080941d5 +0x01b:  mov    0x48(%eax),%edx
080941d8 +0x01e:  mov    0x8(%ebp),%eax
080941db +0x021:  mov    0x40(%eax),%eax
080941de +0x024:  shl    $0x2,%eax
080941e1 +0x027:  lea    (%edx,%eax,1),%eax
080941e4 +0x02a:  mov    (%eax),%eax
080941e6 +0x02c:  mov    0x4(%eax),%eax
080941e9 +0x02f:  add    $0x2,%eax
080941ec +0x032:  cmp    %ebx,%eax
080941ee +0x034:  jbe    08094307 <+0x14d>
080941f4 +0x03a:  mov    0x8(%ebp),%eax
080941f7 +0x03d:  mov    0x2c(%eax),%eax
080941fa +0x040:  lea    0x2(%eax),%esi
080941fd +0x043:  mov    0x8(%ebp),%eax
08094200 +0x046:  mov    0x48(%eax),%edx
08094203 +0x049:  mov    0x8(%ebp),%eax
08094206 +0x04c:  mov    0x40(%eax),%eax
08094209 +0x04f:  shl    $0x2,%eax
0809420c +0x052:  lea    (%edx,%eax,1),%eax
0809420f +0x055:  mov    (%eax),%eax
08094211 +0x057:  mov    0x4(%eax),%edx
08094214 +0x05a:  mov    0x8(%ebp),%eax
08094217 +0x05d:  mov    0x48(%eax),%ecx
0809421a +0x060:  mov    0x8(%ebp),%eax
0809421d +0x063:  mov    0x40(%eax),%eax
08094220 +0x066:  shl    $0x2,%eax
08094223 +0x069:  lea    (%ecx,%eax,1),%eax
08094226 +0x06c:  mov    (%eax),%eax
08094228 +0x06e:  mov    0xc(%eax),%eax
0809422b +0x071:  add    $0x2,%eax
0809422e +0x074:  lea    (%edx,%eax,1),%edi
08094231 +0x077:  mov    0x8(%ebp),%eax
08094234 +0x07a:  mov    0x48(%eax),%edx
08094237 +0x07d:  mov    0x8(%ebp),%eax
0809423a +0x080:  mov    0x40(%eax),%eax
0809423d +0x083:  shl    $0x2,%eax
08094240 +0x086:  lea    (%edx,%eax,1),%eax
08094243 +0x089:  mov    (%eax),%eax
08094245 +0x08b:  mov    0x4(%eax),%edx
08094248 +0x08e:  mov    %esi,%eax
0809424a +0x090:  lea    (%edx,%eax,1),%esi
0809424d +0x093:  jmp    0809425a <+0xa0>
0809424f +0x095:  sub    $0x1,%edi
08094252 +0x098:  sub    $0x1,%esi
08094255 +0x09b:  movzbl (%esi),%eax
08094258 +0x09e:  mov    %al,(%edi)
0809425a +0x0a0:  mov    0x8(%ebp),%eax
0809425d +0x0a3:  mov    0x48(%eax),%edx
08094260 +0x0a6:  mov    0x8(%ebp),%eax
08094263 +0x0a9:  mov    0x40(%eax),%eax
08094266 +0x0ac:  shl    $0x2,%eax
08094269 +0x0af:  lea    (%edx,%eax,1),%eax
0809426c +0x0b2:  mov    (%eax),%eax
0809426e +0x0b4:  mov    0x4(%eax),%eax
08094271 +0x0b7:  cmp    %esi,%eax
08094273 +0x0b9:  setb   %al
08094276 +0x0bc:  test   %al,%al
08094278 +0x0be:  jne    0809424f <+0x95>
0809427a +0x0c0:  mov    %edi,%edx
0809427c +0x0c2:  mov    %esi,%eax
0809427e +0x0c4:  mov    %edx,%ecx
08094280 +0x0c6:  sub    %eax,%ecx
08094282 +0x0c8:  mov    %ecx,%eax
08094284 +0x0ca:  add    %eax,%ebx
08094286 +0x0cc:  mov    %edi,%edx
08094288 +0x0ce:  mov    %esi,%eax
0809428a +0x0d0:  mov    %edx,%ecx
0809428c +0x0d2:  sub    %eax,%ecx
0809428e +0x0d4:  mov    %ecx,%eax
08094290 +0x0d6:  add    %eax,0x10(%ebp)
08094293 +0x0d9:  mov    0x8(%ebp),%eax
08094296 +0x0dc:  mov    0x48(%eax),%edx
08094299 +0x0df:  mov    0x8(%ebp),%eax
0809429c +0x0e2:  mov    0x40(%eax),%eax
0809429f +0x0e5:  shl    $0x2,%eax
080942a2 +0x0e8:  lea    (%edx,%eax,1),%eax
080942a5 +0x0eb:  mov    (%eax),%eax
080942a7 +0x0ed:  mov    0x8(%ebp),%edx
080942aa +0x0f0:  mov    0x48(%edx),%ecx
080942ad +0x0f3:  mov    0x8(%ebp),%edx
080942b0 +0x0f6:  mov    0x40(%edx),%edx
080942b3 +0x0f9:  shl    $0x2,%edx
080942b6 +0x0fc:  lea    (%ecx,%edx,1),%edx
080942b9 +0x0ff:  mov    (%edx),%edx
080942bb +0x101:  mov    0xc(%edx),%edx
080942be +0x104:  mov    %edx,%ecx
080942c0 +0x106:  mov    0x8(%ebp),%edx
080942c3 +0x109:  mov    %ecx,0x2c(%edx)
080942c6 +0x10c:  mov    0x8(%ebp),%edx
080942c9 +0x10f:  mov    0x2c(%edx),%edx
080942cc +0x112:  mov    %edx,0x10(%eax)
080942cf +0x115:  mov    0x8(%ebp),%eax
080942d2 +0x118:  mov    0x48(%eax),%edx
080942d5 +0x11b:  mov    0x8(%ebp),%eax
080942d8 +0x11e:  mov    0x40(%eax),%eax
080942db +0x121:  shl    $0x2,%eax
080942de +0x124:  lea    (%edx,%eax,1),%eax
080942e1 +0x127:  mov    (%eax),%eax
080942e3 +0x129:  mov    0x4(%eax),%eax
080942e6 +0x12c:  add    $0x2,%eax
080942e9 +0x12f:  cmp    %ebx,%eax
080942eb +0x131:  jbe    08094307 <+0x14d>
080942ed +0x133:  mov    0x8(%ebp),%eax
080942f0 +0x136:  mov    (%eax),%eax
080942f2 +0x138:  add    $0x2c,%eax
080942f5 +0x13b:  mov    (%eax),%edx
080942f7 +0x13d:  movl   $"flex scanner push-back overflow",0x4(%esp)
080942ff +0x145:  mov    0x8(%ebp),%eax
08094302 +0x148:  mov    %eax,(%esp)
08094305 +0x14b:  call   *%edx
08094307 +0x14d:  sub    $0x1,%ebx
0809430a +0x150:  mov    0xc(%ebp),%eax
0809430d +0x153:  mov    %al,(%ebx)
0809430f +0x155:  cmpl   $0xa,0xc(%ebp)
08094313 +0x159:  jne    08094324 <+0x16a>
08094315 +0x15b:  mov    0x8(%ebp),%eax
08094318 +0x15e:  mov    0xc(%eax),%eax
0809431b +0x161:  lea    -0x1(%eax),%edx
0809431e +0x164:  mov    0x8(%ebp),%eax
08094321 +0x167:  mov    %edx,0xc(%eax)
08094324 +0x16a:  mov    0x8(%ebp),%eax
08094327 +0x16d:  mov    0x10(%ebp),%edx
0809432a +0x170:  mov    %edx,0x4(%eax)
0809432d +0x173:  movzbl (%ebx),%edx
08094330 +0x176:  mov    0x8(%ebp),%eax
08094333 +0x179:  mov    %dl,0x28(%eax)
08094336 +0x17c:  mov    0x8(%ebp),%eax
08094339 +0x17f:  mov    %ebx,0x30(%eax)
0809433c +0x182:  add    $0x1c,%esp
0809433f +0x185:  pop    %ebx
08094340 +0x186:  pop    %esi
08094341 +0x187:  pop    %edi
08094342 +0x188:  pop    %ebp
08094343 +0x189:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yyunput @ 0x80941ba

/* __slang_filter__FlexLexer::yyunput(int, char*) */

void __thiscall
__slang_filter__FlexLexer::yyunput(__slang_filter__FlexLexer *this,int param_1,char *param_2)

{
  int iVar1;
  __slang_filter__FlexLexer *p_Var2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  p_Var2 = *(__slang_filter__FlexLexer **)(this + 0x30);
  *p_Var2 = this[0x28];
  if (p_Var2 < (__slang_filter__FlexLexer *)
               (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) + 2)) {
    puVar4 = (undefined1 *)
             (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
             *(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) + 2);
    puVar3 = (undefined1 *)
             (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
             *(int *)(this + 0x2c) + 2);
    while (*(undefined1 **)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) <
           puVar3) {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      *puVar4 = *puVar3;
    }
    p_Var2 = p_Var2 + ((int)puVar4 - (int)puVar3);
    param_2 = param_2 + ((int)puVar4 - (int)puVar3);
    iVar1 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    *(undefined4 *)(this + 0x2c) =
         *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(this + 0x2c);
    if (p_Var2 < (__slang_filter__FlexLexer *)
                 (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) + 2)) {
      (**(code **)(*(int *)this + 0x2c))(this,"flex scanner push-back overflow");
    }
  }
  p_Var2 = p_Var2 + -1;
  *p_Var2 = SUB41(param_1,0);
  if (param_1 == 10) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  }
  *(char **)(this + 4) = param_2;
  this[0x28] = *p_Var2;
  *(__slang_filter__FlexLexer **)(this + 0x30) = p_Var2;
  return;
}
```
