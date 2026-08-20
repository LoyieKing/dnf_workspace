# rewriteUsableEmoticon

`_ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc`

`CDataManager::rewriteUsableEmoticon(CUser const&, char*)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fba2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fba2  _ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc
#           CDataManager::rewriteUsableEmoticon(CUser const&, char*)
# range [0x0835fba2, 0x0835fc75]
0835fba2 +0x00:  push   %ebp
0835fba3 +0x01:  mov    %esp,%ebp
0835fba5 +0x03:  sub    $0x28,%esp
0835fba8 +0x06:  cmpl   $0x0,0x10(%ebp)
0835fbac +0x0a:  je     0835fc73 <+0xd1>
0835fbb2 +0x10:  mov    0x10(%ebp),%eax
0835fbb5 +0x13:  mov    %eax,(%esp)
0835fbb8 +0x16:  call   0807e3b0 <_init+0xca8>
0835fbbd +0x1b:  mov    %eax,-0x14(%ebp)
0835fbc0 +0x1e:  movl   $0x0,-0x10(%ebp)
0835fbc7 +0x25:  jmp    0835fc5d <+0xbb>
0835fbcc +0x2a:  mov    -0x10(%ebp),%eax
0835fbcf +0x2d:  add    0x10(%ebp),%eax
0835fbd2 +0x30:  movzbl (%eax),%eax
0835fbd5 +0x33:  cmp    $0x1e,%al
0835fbd7 +0x35:  jne    0835fc55 <+0xb3>
0835fbd9 +0x37:  mov    -0x10(%ebp),%eax
0835fbdc +0x3a:  add    $0x1,%eax
0835fbdf +0x3d:  add    0x10(%ebp),%eax
0835fbe2 +0x40:  movzbl (%eax),%eax
0835fbe5 +0x43:  cmp    $0x20,%al
0835fbe7 +0x45:  jne    0835fc58 <+0xb6>
0835fbe9 +0x47:  mov    -0x10(%ebp),%eax
0835fbec +0x4a:  add    $0x2,%eax
0835fbef +0x4d:  add    0x10(%ebp),%eax
0835fbf2 +0x50:  movzbl (%eax),%eax
0835fbf5 +0x53:  movsbl %al,%eax
0835fbf8 +0x56:  mov    %eax,-0xc(%ebp)
0835fbfb +0x59:  mov    0x8(%ebp),%eax
0835fbfe +0x5c:  mov    0x28(%eax),%eax
0835fc01 +0x5f:  mov    -0xc(%ebp),%edx
0835fc04 +0x62:  mov    %edx,0x4(%esp)
0835fc08 +0x66:  mov    %eax,(%esp)
0835fc0b +0x69:  call   080e581c <_ZN21CChattingEmoticonList13find_emoticonEi>  ; CChattingEmoticonList::find_emoticon(int)
0835fc10 +0x6e:  mov    %eax,-0x18(%ebp)
0835fc13 +0x71:  cmpl   $0x0,-0x18(%ebp)
0835fc17 +0x75:  jne    0835fc27 <+0x85>
0835fc19 +0x77:  mov    -0x10(%ebp),%eax
0835fc1c +0x7a:  add    $0x2,%eax
0835fc1f +0x7d:  add    0x10(%ebp),%eax
0835fc22 +0x80:  movb   $0xff,(%eax)
0835fc25 +0x83:  jmp    0835fc59 <+0xb7>
0835fc27 +0x85:  mov    -0x18(%ebp),%eax
0835fc2a +0x88:  mov    (%eax),%eax
0835fc2c +0x8a:  add    $0x8,%eax
0835fc2f +0x8d:  mov    (%eax),%edx
0835fc31 +0x8f:  mov    0xc(%ebp),%eax
0835fc34 +0x92:  mov    %eax,0x4(%esp)
0835fc38 +0x96:  mov    -0x18(%ebp),%eax
0835fc3b +0x99:  mov    %eax,(%esp)
0835fc3e +0x9c:  call   *%edx
0835fc40 +0x9e:  xor    $0x1,%eax
0835fc43 +0xa1:  test   %al,%al
0835fc45 +0xa3:  je     0835fc59 <+0xb7>
0835fc47 +0xa5:  mov    -0x10(%ebp),%eax
0835fc4a +0xa8:  add    $0x2,%eax
0835fc4d +0xab:  add    0x10(%ebp),%eax
0835fc50 +0xae:  movb   $0xff,(%eax)
0835fc53 +0xb1:  jmp    0835fc59 <+0xb7>
0835fc55 +0xb3:  nop
0835fc56 +0xb4:  jmp    0835fc59 <+0xb7>
0835fc58 +0xb6:  nop
0835fc59 +0xb7:  addl   $0x1,-0x10(%ebp)
0835fc5d +0xbb:  mov    -0x14(%ebp),%eax
0835fc60 +0xbe:  sub    $0x2,%eax
0835fc63 +0xc1:  cmp    -0x10(%ebp),%eax
0835fc66 +0xc4:  setg   %al
0835fc69 +0xc7:  test   %al,%al
0835fc6b +0xc9:  jne    0835fbcc <+0x2a>
0835fc71 +0xcf:  jmp    0835fc74 <+0xd2>
0835fc73 +0xd1:  nop
0835fc74 +0xd2:  leave
0835fc75 +0xd3:  ret
```

## 反编译 C

```c
// CDataManager::rewriteUsableEmoticon @ 0x835fba2

/* CDataManager::rewriteUsableEmoticon(CUser const&, char*) */

void __thiscall CDataManager::rewriteUsableEmoticon(CDataManager *this,CUser *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  int *piVar3;
  int local_14;
  
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    for (local_14 = 0; local_14 < (int)(sVar2 - 2); local_14 = local_14 + 1) {
      if ((param_2[local_14] == '\x1e') && (param_2[local_14 + 1] == ' ')) {
        piVar3 = (int *)CChattingEmoticonList::find_emoticon(*(int *)(this + 0x28));
        if (piVar3 == (int *)0x0) {
          param_2[local_14 + 2] = -1;
        }
        else {
          cVar1 = (**(code **)(*piVar3 + 8))(piVar3,param_1);
          if (cVar1 != '\x01') {
            param_2[local_14 + 2] = -1;
          }
        }
      }
    }
  }
  return;
}
```
