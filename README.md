## C言語実行環境

### 起動方法
1. イメージをビルド
```
$ docker build -t ${tag_name} .
```
2. コンテナ起動＆コンテナ内にアクセス
```
$ docker run -itv ${HOST_PROJECT_ROOT_PATH}:${CONTAINER_WORKDIR} ${IMAGE_ID} /bin/bash
```

### ファイル実行方法
```
$ cd ${c_env/src}
$ sh run.sh ${ファイル名}
```
