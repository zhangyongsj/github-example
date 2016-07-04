zytest1.c
import {Injectable} from '@angular/core';
import {Observable} from 'rxjs/Observable';
import {Observer} from 'rxjs/Observer';
import 'rxjs/add/operator/share';

@Injectable()
export class SpinnerManager {
  loader: ILoader = { loading: false };

  constructor() {
  }

  showLoader() {
    this.loader.loading = true;
  }

  hideLoader() {
    this.loader.loading = false;
  }
}

export interface ILoader {
  loading: boolean;
}
