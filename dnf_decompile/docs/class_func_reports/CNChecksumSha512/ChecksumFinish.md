# ChecksumFinish

`_ZN16CNChecksumSha51214ChecksumFinishEPhi`

`CNChecksumSha512::ChecksumFinish(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08099204` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099204  _ZN16CNChecksumSha51214ChecksumFinishEPhi
#           CNChecksumSha512::ChecksumFinish(unsigned char*, int)
# range [0x08099204, 0x08099259]
08099204 +0x00:  push   %ebp
08099205 +0x01:  mov    %esp,%ebp
08099207 +0x03:  sub    $0x18,%esp
0809920a +0x06:  mov    0x8(%ebp),%eax
0809920d +0x09:  mov    0x8(%eax),%eax
08099210 +0x0c:  test   %eax,%eax
08099212 +0x0e:  jne    0809921b <+0x17>
08099214 +0x10:  mov    $0x70000000,%eax
08099219 +0x15:  jmp    08099258 <+0x54>
0809921b +0x17:  mov    0x8(%ebp),%eax
0809921e +0x1a:  mov    (%eax),%eax
08099220 +0x1c:  add    $0x20,%eax
08099223 +0x1f:  mov    (%eax),%edx
08099225 +0x21:  mov    0x8(%ebp),%eax
08099228 +0x24:  mov    %eax,(%esp)
0809922b +0x27:  call   *%edx
0809922d +0x29:  cmp    0x10(%ebp),%eax
08099230 +0x2c:  setg   %al
08099233 +0x2f:  test   %al,%al
08099235 +0x31:  je     0809923e <+0x3a>
08099237 +0x33:  mov    $0x70000001,%eax
0809923c +0x38:  jmp    08099258 <+0x54>
0809923e +0x3a:  mov    0x8(%ebp),%eax
08099241 +0x3d:  mov    0x8(%eax),%eax
08099244 +0x40:  mov    0xc(%ebp),%edx
08099247 +0x43:  mov    %edx,0x4(%esp)
0809924b +0x47:  mov    %eax,(%esp)
0809924e +0x4a:  call   080c2a7e <_Z12SHA512_FinalP15SHA512_ALG_INFOPh>  ; SHA512_Final(SHA512_ALG_INFO*, unsigned char*)
08099253 +0x4f:  mov    $0x6fffffff,%eax
08099258 +0x54:  leave
08099259 +0x55:  ret
```

## 反编译 C

```c
// CNChecksumSha512::ChecksumFinish @ 0x8099204

/* CNChecksumSha512::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha512::ChecksumFinish(CNChecksumSha512 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar2) {
      uVar1 = 0x70000001;
    }
    else {
      SHA512_Final(*(SHA512_ALG_INFO **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
